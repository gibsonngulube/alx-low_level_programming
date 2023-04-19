Argc, Argv

This repository contains a collection of C programs that demonstrate the use of argc and argv. These two parameters are used in C to access command-line arguments passed to the program when it is run.

Programs

0-whatsmyname.c - This program prints the name of the executable file, followed by a new line. It demonstrates how to access the name of the program using argv[0].
1-args.c - This program prints the number of arguments passed to it. It uses the value of argc to determine the number of arguments.
2-args.c - This program prints all the arguments passed to it. It uses a loop to iterate over the argv array and print each argument.
3-mul.c - This program multiplies two numbers passed as command-line arguments and prints the result. It demonstrates how to convert string arguments to integers using atoi.
4-add.c - This program adds positive numbers passed as command-line arguments and prints the result. It uses a loop to iterate over the argv array, convert each argument to an integer using atoi, and sum up the positive integers.

Usage

To run any of these programs, navigate to the directory containing the source code and use the following command:

gcc program_name.c -o program_name

Replace program_name with the name of the program you want to run. This will compile the code and create an executable file with the same name as the source code file.

To run the program, use the following command:

./program_name [arguments]

Replace program_name with the name of the executable file, and [arguments] with any command-line arguments you want to pass to the program.
