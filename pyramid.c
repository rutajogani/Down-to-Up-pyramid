#include<stdio.h>
int main()
{
    int number;
    printf("Enter Number: ");
    scanf("%d",&number);

    for (int i = 1; i <= number; i++)
    {
        for (int j = number; j >= i; j--)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
    
}