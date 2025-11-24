/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tester.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbansacc <sbansacc@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 01:57:01 by sbansacc          #+#    #+#             */
/*   Updated: 2025/11/24 03:18:49 by sbansacc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>

struct Test
{
	std::string name;
	std::string fileContent;
	std::string s1;
	std::string s2;
	std::string expected;
	bool shouldFail;
};
static Test tests[] = {
	{"Remplacement simple", "Hello World\nHello 42\nHello", "Hello", "Bonjour", "Bonjour World\nBonjour 42\nBonjour\n", false},
	{"Remplacements multiples", "foo foo foo bar foo", "foo", "XXX", "XXX XXX XXX bar XXX\n", false},
	{"Remplacement par vide", "Hello World Hello", "Hello", "\"\"", " World \n", false},
	{"Remplacement long", "a a a", "a", "LONGSTRING", "LONGSTRING LONGSTRING LONGSTRING\n", false},
	{"Chevauchement", "aaaa", "aa", "b", "bb\n", false},
	{"Aucune occurrence", "Hello World", "xyz", "ABC", "Hello World\n", false},
	{"Fichier multiligne", "Line1 test\nLine2 test test\nLine3\ntest Line4", "test", "REPLACE", "Line1 REPLACE\nLine2 REPLACE REPLACE\nLine3\nREPLACE Line4\n", false},
	{"Fichier vide", "", "test", "REPLACE", "", false}
};

struct ErrorTest
{
	std::string name;
	std::string cmd;
	bool needsFile;
	std::string fileContent;
};
static ErrorTest errorTests[] = {
	{"Fichier inexistant", "./SedIsForLosers nonexistent.txt a b", false, ""},
	{"Arguments insuffisants", "./SedIsForLosers test.txt a", false, ""},
	{"s1 vide", "./SedIsForLosers testEmpty.txt \"\" replacement", true, "Hello World"},
	{"Fichier sans permissions", "./SedIsForLosers testNoPerm.txt a b", true, "Test content"}
};

void createTestFile(const std::string& filename, const std::string& content)
{
	std::ofstream ofs(filename.c_str());
	ofs << content;
	ofs.close();
}

std::string readFile(const std::string& filename)
{
	std::ifstream ifs(filename.c_str());
	if (!ifs.is_open())
		return "";
	
	std::string content;
	std::string line;
	
	while (std::getline(ifs, line))
	{
		content += line;
		if (!ifs.eof())
			content += "\n";
	}
	ifs.close();
	return content;
}

void cleanup(const std::string& filename)
{
std::remove(filename.c_str());
std::remove((filename + ".replace").c_str());
}

void printResult(int testNum, const std::string& testName, bool passed, const std::string& result = "", const std::string& expected = "")
{
	std::cout << "Test " << testNum << " [" << testName << "]: ";
	if (passed)
		std::cout << "\033[1;32mPASSED ✓\033[0m" << std::endl;
	else
	{
		std::cout << "\033[1;31mFAILED ✗\033[0m" << std::endl;
		if (!expected.empty())
		{
			std::cout << "  Attendu: [" << expected << "]" << std::endl;
			std::cout << "  Obtenu:  [" << result << "]" << std::endl;
		}
	}
}

int main()
{
	int numTests = sizeof(tests) / sizeof(tests[0]);
	for (int i = 0; i < numTests; i++)
	{
		std::string filename = "test" + std::to_string(i + 1) + ".txt";
		std::string cmd = "./SedIsForLosers " + filename + " " + tests[i].s1 + " " + tests[i].s2;

		createTestFile(filename, tests[i].fileContent);
		system(cmd.c_str());
		
		std::string result = readFile(filename + ".replace");
		bool passed = (result == tests[i].expected);
		printResult(i + 1, tests[i].name, passed, result, tests[i].expected);
		cleanup(filename);
	}
	
	int numErrorTests = sizeof(errorTests) / sizeof(errorTests[0]);
	for (int i = 0; i < numErrorTests; i++)
	{
		std::string filename = "testErr" + std::to_string(i + 1) + ".txt";
	
		if (errorTests[i].needsFile)
			createTestFile(filename, errorTests[i].fileContent);
		if (errorTests[i].name == "Fichier sans permissions")
			system(("chmod 000 " + filename).c_str());
	
		std::string cmd = errorTests[i].cmd;
	
		int ret = system((cmd + " > /dev/null").c_str());
		bool passed = (ret != 0);
		printResult(numTests + i + 1, errorTests[i].name, passed);
	
		if (errorTests[i].needsFile)
		{
			if (errorTests[i].name == "Fichier sans permissions")
				system(("chmod 777 " + filename).c_str());
			cleanup(filename);
		}
	}
	return 0;
}