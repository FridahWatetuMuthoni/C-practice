#include <stdio.h>
#include <stdlib.h>
/*
Write a program that prints the opcodes of its own main function.
1. the opcodes should be printed in hexadecimal, lowercase
2. each opcode is two char long
4. You have to use atoi to convert the argument to an int
5. If the number of argument is not the correct one, print Error, followed by a new line, and exit with the status 1
6 . If the number of bytes is negative, print Error, followed by a new line, and exit with the status 2
*/

/*
what is opcode?
An opcode (short for "operation code") is a code that represents a single machine language instruction
that can be executed by a CPU (central processing unit) or other hardware processor.
The opcode specifies the operation to be performed by the processor, such as arithmetic or logic operations, memory operations, or control flow instructions.
Each CPU architecture has its own set of opcodes, which are designed to work with the specific instruction set of that CPU.
When a program is compiled or assembled, the source code is translated into machine code, which consists of a sequence of opcodes and their operands.
When the program is executed, the CPU reads the opcodes from memory and executes the corresponding instructions.
*/

/*
The reason why `char **` is used instead of `char *` as a parameter type for the function pointer `ptr` in `int (*ptr)(int, char **) = main` is because the `main` function itself takes a `char **` as one of its parameters.
In C, the `argv` parameter of the `main` function is a pointer to an array of pointers to characters, with each pointer pointing to a string representing a command line argument.
 Therefore, when `main` is used as the initializer for the `address` function pointer, it is necessary to specify a `char **` as one of the parameter types for `address` to match the parameter list of `main`.
If the `main` function took only a `char *` as its second parameter, then the function pointer declaration could also use `char *` instead of `char **` for the second parameter type.
*/

/*
opcode = *(unsigned char *)ptr;
This line of code is a type of pointer casting in C. It takes a void pointer called ptr and casts it to an unsigned char pointer.
 The * operator dereferences the pointer to access the value stored in memory at the memory location pointed to by ptr, and assigns it to the opcode variable.
*/

int main(int argc, char *argv[])
{
    int i, num_bytes;
    unsigned char opcode;

    num_bytes = atoi(argv[1]);

    // cheking if the number of arguements expected is correct
    if (argc != 2)
    {
        printf("Error\n");
        exit(1);
    }

    // checking if the number of bytes entered is negative
    if (num_bytes < 0)
    {
        printf("Error\n");
        exit(2);
    }
    // creating a function pointer that points to the start of our main function
    // you can use the function main and the pointer address which i this case is main

    int (*ptr)(int, char **) = main;

    // Print the opcodes of the main function
    for (i = 0; i < num_bytes; i++)
    {
        // opcode is an unsigned character that will be used to store each individual opcode as it is read.
        opcode = *(unsigned char *)ptr;
        //  %02x format specifier, which prints a two-digit hexadecimal number with leading zeros.
        printf("%02x", opcode);
        /*
        If the loop counter i is not equal to nums - 1,
        the program prints a space character before continuing to the next opcode.
        It then increments the address pointer to point to the next memory location containing an opcode.
        */
        if (i == num_bytes - 1)
            continue;
        printf(" ");

        ptr++;
    }
    printf("\n");
    return (0);
}