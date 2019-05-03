#include <stdio.h>
#include <conio.h>
int main()
{
    int choose,number;
    char alpha;
    printf("*****************************************************************\n");
    printf("Choose 1 to find that number is odd or even\n");
    printf("Choose 2 to check whether character is alphabet or not\n");
    printf("Choose 3 to check whether character is vowel or not\n");
    printf("Choose 4 to check whether number is divisible by 5 and 11 or not\n");
    printf("Choose 5 to exit\n");
    printf("******************************************************************\n");

    printf("Choose a number what you want to do : ");
    scanf("%d",&choose);

    switch(choose)
    {
    case 1:
        {
        printf("Enter a number to check odd or even : ");
        scanf("%d",&number);

        if(number % 2 == 1)
        {
            printf("It is odd number");
        }
        else
        {
            printf("It is even number");
        }
        break;
        }

    case 2:
        {
            printf("Enter a character to check that it is alphabet nor not : ");
            scanf("%c",&alpha);

            if((alpha <='a' && alpha >='z') || (alpha <='A' && alpha >= 'Z' ))
            {
                printf("It is alphabet");
            }
            else
            {
                printf("It is not alphabet");
            }
            break;

        }
    }
}


