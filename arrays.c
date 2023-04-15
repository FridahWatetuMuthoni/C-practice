#include <stdio.h>

int main(void)
{
    int i, j, size, len;
    // this are arrays inside of arrays because the strings are arrays themeselves
    // The first set of brackets is for the array of all strings and the second set is for each individual string
    char tracks[][80] = {
        "I left my heart in havard med school",
        "Newark, Newark- a wonderful town",
        "Dancing with a Dork",
        "From here to maternity",
        "The girl from Iwo Jima",
    };

    size = sizeof(tracks) / 80;

    // lets print out each string in the array
    for (i = 0; i < size; i++)
    {
        printf("%s\n", tracks[i]);
    }

    // get individual charaters in a string
    for (i = 0; i < size; i++)
    {
        len = sizeof(tracks[i]);
        for (j = 0; j < len; j++)
        {
            printf("%c", tracks[i][j]);
        }
        printf("\n");
    }
    return (0);
}