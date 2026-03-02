# CPP Module 01 (42 School)

## 📋 Description
This module focuses on memory allocation, pointers to members, references, and the usage of the `switch` statement in C++. It marks the definitive transition from C memory management to C++ mechanics.

## 🧠 Implementation Logic (Score: 100/100)
The exercises cover essential concepts for resource management and code organization:

- **Memory Management (New/Delete)**: Practiced allocating objects on the heap and ensuring proper destruction to avoid memory leaks (ZombieHorde).
- **References vs Pointers**: Deep dive into when to use a reference for safety and when a pointer is still necessary for nullability or reassignment.
- **File Manipulation (Sed is for losers)**: Implementation of a file replacement system using `std::ifstream` and `std::ofstream`.
- **Pointers to Members (Harl 2.0)**: 
  - Used an array of pointers to member functions to call specific log levels (DEBUG, INFO, etc.) without complex `if/else` structures.
  - **HarlFilter**: Implementation of a switch/case with fall-through logic to filter log messages based on severity.



## 📂 Project Structure
- `ex00/`: BraiiiiiiinnnzzzZ (Stack vs Heap).
- `ex01/`: Moar Brainz! (Array allocation).
- `ex02/`: HI THIS IS BRAIN (References).
- `ex03/`: Unnecessary violence (Weapon references/pointers).
- `ex04/`: Sed is for losers (String streams/Files).
- `ex05/`: Harl 2.0 (Pointers to member functions).
- `ex06/`: HarlFilter (Switch/Case).

## 🛠️ Usage & Compilation

### Compilation
All exercises are compiled with `c++ -Wall -Wextra -Werror -std=c++98`.
```bash
make
```
Execution (Example: Harl 2.0)
```bash
./harl
```
