#include <stdio.h>
#include <stdlib.h>

int main()
{
    int val;
    char card_name[3];

    puts("Enter the card_name: ");
    scanf("%2s", card_name);

    val = 0;

    if (card_name[0] == 'K' || card_name[0] == 'k')
    {
        val = 10;
    }
    else if (card_name[0] == 'Q' || card_name[0] == 'q')
    {
        val = 10;
    }
    else if (card_name[0] == 'J' || card_name[0] == 'j')
    {
        val = 10;
    }
    else if (card_name[0] == 'A' || card_name[0] == 'a')
    {
        val = 11;
    }
    else
    {
        // atoi converts a string to a number
        val = atoi(card_name);
    }
    printf("The card value is: %i\n", val);

    return (0);
}