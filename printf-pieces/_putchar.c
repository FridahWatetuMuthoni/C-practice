#include <unistd.h>

/*
unistd provides access to the POSIX operating system API
since unistd is POSIX standard it should be available in all operating systems
write(int fildes, const void *buf, size_t nbyte)
@fildes => file description
@buf => pointer to buffer
@nbyte=> number of bytes to take from the buffer
write(1, "Hello, world")
*/
/**
 * write- this is a function used to write data to standard output
 * @str- the string we are printing out
 */

void _putchar(char str)
{
    write(1, &str, 1);
}

int main(void)
{
    _putchar('a');
    _putchar(97);
}
