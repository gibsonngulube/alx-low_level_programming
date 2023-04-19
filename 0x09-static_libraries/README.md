Learning Static Libraries in C

This repository contains the results of my project to learn about static libraries in C. The project involved reading about the concept of static libraries, practicing how to create them, and completing tasks to solidify my understanding.

Tasks

As part of this project, I completed the following tasks:


1. Created the static library libmy.a containing all function prototypes.
2. Created a script called create_static_lib.sh that creates a static library called liball.a from all the .c files that are in the current directory.
Repository Contents

The repository contains the following files:

1. libmy.a: The static library that contains all function prototypes.
2. main.h: The header file for the static library.
3. create_static_lib.sh: The bash script to create a static library from all .c files in the current directory.
4. README.md: This README file.

How to Use

To use the static library in your own program, follow these steps:

1. Include the header file main.h in your program.
2. Link your program with the libmy.a static library during the compilation process.
3. Use the functions in the static library as needed in your program.

To create a new static library from all .c files in the current directory, run the command ./create_static_lib.sh.

Conclusion

Through this project, I have learned about the concept of static libraries in C and how to create them. I have also created a new static library libmy.a containing all function prototypes and a bash script to automate the creation of static libraries from multiple .c files.
