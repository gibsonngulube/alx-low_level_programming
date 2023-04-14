**Multi-Dimensional Arrays and Pointers Code Challenges**

This repository contains solutions to several code challenges related to C multi-dimensional arrays and pointers.

 **Challenges**

 0. memset
 Implement the _memset() function which fills the first n bytes of the memory area pointed to by s with the constant byte b.

 Prototype: char *_memset(char *s, char b, unsigned int n)

 1. memcpy
 Implement the _memcpy() function which copies n bytes from memory area src to memory area dest.

 Prototype: char *_memcpy(char *dest, char *src, unsigned int n)

 2. strchr
 Implement the _strchr() function which returns a pointer to the first occurrence of the character c in the string s, or NULL if the character is not found.

 Prototype: char *_strchr(char *s, char c)

 3. strspn
 Implement the _strspn() function which returns the number of bytes in the initial segment of s which consist only of bytes from accept.

 Prototype: unsigned int _strspn(char *s, char *accept)

 4. strpbrk
 Implement the _strpbrk() function which locates the first occurrence in the string s of any of the bytes in the string accept.

 Prototype: char *_strpbrk(char *s, char *accept)

 5. strstr
 Implement the _strstr() function which finds the first occurrence of the substring needle in the string haystack.

 Prototype: char *_strstr(char *haystack, char *needle)

 6. Chess is mental torture
 Implement the print_chessboard() function which prints the chessboard.

 Prototype: void print_chessboard(char (*a)[8])

 7. The line of life is a ragged diagonal between duty and desire
 Implement the print_diagsums() function which prints the sum of the two diagonals of a square matrix of integers.

 Prototype: void print_diagsums(int *a, int size)

 8. Double pointer, double fun
 Implement the set_string() function which sets the value of a pointer to a char.

 Prototype: void set_string(char **s, char *to)

 9. My primary goal of hacking was the intellectual curiosity, the seduction of adventure
 Crack the password for the crackme2 program included in the repository.

 **Running the Solutions**

 To run the solutions, simply compile the source file and execute the resulting binary. Each solution is implemented in a separate C source file.

 gcc -Wall -Werror -Wextra -pedantic -std=gnu89 solution.c -o solution ./solution

 **License**

 This repository is licensed under the MIT License. See the LICENSE file for more information.
