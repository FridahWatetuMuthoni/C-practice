#include <stdio.h>
#include <stdlib.h>

#define LENGTH 20 //this is an object like macro
//object like macros are used as a type of constant type value for our program
#define PI 3.14

/**
 * logger: used to log errors when their is a bug in our code
 * @msg: the error message
 * @src: name of source code file
 * @line: the line number of where 
 * 
 * Return: the function just prints out the error it doesnt return anything
*/
void logger(char *msg, char *src, int line);

int main(void)
{
    //calulating the area of a circle
    int radius = 14;
    int area = PI * radius * radius;
    printf("The area of the circle is: %d\n", area);

    printf("%d\n", LENGTH);

    // c own macros
    printf("File: %s\n",__FILE__);
    printf("Date: %s\n", __DATE__);
    printf("Time:%s\n",__TIME__);
    printf("Line: %d\n",__LINE__);
    printf("ANSI: %d\n", __STDC__);

    //logger function call
    logger("task 1 done", __FILE__, __LINE__);
    logger("task 2 done", __FILE__, __LINE__);

    return(0);
}

void logger(char *msg, char *src, int line){
    //create a file pointer variable
    FILE *file;

    //open the file in append mode
    file = fopen("log.txt", "a");
    if (file == NULL)
    {
        printf("Error opening log file.\n");
        exit(1);
    }
    fprintf(file, "%s:%d:%s\n", src, line,msg);

    fclose(file);
}