#include <stdio.h>
#include <string.h>

int positive_int();

int main(void)
{
    int function = positive_int();
}

int positive_int()
{
    int input;

    do
    {
        printf("please enter a positive num\n");
        scanf("%i", &input);
    }
    while(input < 0);

    printf("thank you for entering a positive num!\n");
    printf("I just wanted to waste your time :)\n");

    return input;
}