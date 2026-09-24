# C++ Course Level 2

Practice code and notes from **Introduction to Programming Using C++ (Level 2)**, the second level of my C++ learning path. It builds on the fundamentals from [Level 1](https://github.com/Torph-10/Cpp_Course_Level_1) and moves into intermediate concepts: debugging, vectors, pointers, dynamic memory, exception handling and file handling.

## Topics

### Debugging
- Breakpoints, memory values and the Autos / Quick Watch windows
- Changing values in debug mode
- Step Into / Over / Out

### Miscellaneous
- Creating your own library
- Ternary operator (short-hand `if`)
- Range-based loops
- Number validation
- Bitwise AND / OR operators

### Functions
- Declaration vs definition
- Default parameters
- Function overloading
- Call stack / call hierarchy
- Recursion

### Variables
- Static, automatic and register variables

### Printing and Formatting
- `printf` formats for integers, floats, strings and chars
- `setw` manipulator

### Arrays and Vectors
- Two-dimensional arrays
- Vectors: declaration, adding, removing, accessing and changing elements
- Vector of structures, vector functions and iterators

### References and Pointers
- Call by reference and by value review
- Creating references
- Pointers: declaration, dereferencing, common mistakes
- Pointers vs references
- Call by reference using pointers
- Pointers with arrays and structures
- Pointer to void

### Dynamic Memory Allocation
- `new` and `delete`
- Dynamic arrays
- Stack vs heap

### Exception Handling
- `try` / `catch`

### Strings
- String object and common methods
- `<cctype>` functions

### File Handling
- Write, append and read modes
- Loading data from a file into a vector
- Saving a vector to a file
- Deleting and updating records in a file

### Date and Time
- Local / UTC time
- The date-time structure

## Getting Started

### Requirements
- A C++ compiler such as `g++` (C++11 or newer)

### Clone the repository

```bash
git clone git@github.com:Torph-10/Cpp_Course_Level_2.git
cd Cpp_Course_Level_2
```

### Compile and run an example

```bash
g++ -Wall -Wextra -std=c++17 main.cpp -o program
./program
```

Replace `main.cpp` with the file you want to run. If a folder name contains spaces, wrap the path in quotes:

```bash
cd "Dynamic Arrays"
```

## Author

**Torph-10** ([GitHub](https://github.com/Torph-10))

## Notes

This repository is for learning purposes. Code is written to practice concepts, not for production use.
