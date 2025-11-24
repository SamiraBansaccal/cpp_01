/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbansacc <sbansacc@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 18:15:04 by sbansacc          #+#    #+#             */
/*   Updated: 2025/11/24 02:43:40 by sbansacc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>
#include <string>

int	main(int ac, char **av)
{	
	if (ac != 4)
		return (1);
	std::ifstream	ifs(av[1]);
	std::string		s1 = av[2];
	std::string		s2 = av[3];
	std::string		tmp;
	if (!ifs.is_open() || s1.empty())
		return (1);
	std::ofstream	ofs((std::string(av[1]) + ".replace").c_str());
	while (std::getline(ifs, tmp))
	{
		size_t	pos;
		int		s1_len = s1.length();
		int		s2_len = s2.length();
		while ((pos = tmp.find(s1)) != std::string::npos)
		{
			tmp.erase(pos, s1_len);
			if (!s2.empty())
			{
				tmp.insert(pos, s2);
				pos += s2_len;
			}
		}
		ofs << tmp << std::endl;
	}
	ifs.close();
	ofs.close();
	return 0;
}
