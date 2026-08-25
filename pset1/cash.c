#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    float dollars = get_float("Enter: ");

    int cents = round(dollars * 100);

    int coins = 0;

    int value[] = {25, 10, 5, 1};
    for(int i = 0; i < 4; i++)
    {
        while(cents >= value[i])
        {
             cents = cents - value[i];
             coins++;
        }
    }
    printf("Answer: %i\n",coins);
} 
