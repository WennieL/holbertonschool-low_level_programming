# C - Bit manipulation

|  A  |  B  | A\|B | A\&B | A\^B | \~A  |
| :---: | :---: | :---:| :---: | :---: | :---: |
|   0   |   0   |  0  |  0  |  0  |   1   |
|   0   |   1   |  1  |  0  |  1  |   1   |
|   1   |   0   |  1  |  0  |  1  |   0   |
|   1   |   1   |  1  |  1  |  0  |   0   |

## Requirements

#### General
- Allowed editors: vi, vim, emacs
- All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wex   tra -pedantic -std=gnu89
- All your files should end with a new line
- A README.md file, at the root of the folder of the project is mandatory
- Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
- You are not allowed to use global variables
- No more than 5 functions per file
- The only C standard library functions allowed are malloc, free and exit. Any use of functions like p  rintf, puts, calloc, realloc etc...� is forbidden
- You are allowed to use _putchar
- You don't have to push _putchar.c, we will use our file. If you do it won't be taken into account
- In the following examples, the main.c files are shown as examples. You can use them to test your fun  ctions, but you don't have to push them to your repo (if you do we won't take them into account). 
  We will use our own main.c files at compilation. 
  Our main.c files might be different from the one shown in the examples
- The prototypes of all your functions and the prototype of the function _putchar should be included 
  in your header file called main.h
- Don't forget to push your header file
- All your header files should be include guarded

## Tasks

### [0. 0](https://github.com/WennieL/holbertonschool-low_level_programming/blob/main/bit_manipulation/0-binary_to_uint.c)

#### Write a function that converts a binary number to an unsigned int.
- Prototype: unsigned int binary_to_uint(const char *b);
- where b is pointing to a string of 0 and 1 chars
- Return: the converted number, or 0 if
     - there is one or more chars in the string b that is not 0 or 1
     - b is NULL