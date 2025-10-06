#include<stdio.h>
int main()
{
    int number;
    scanf("%d", & number);
    if(number % 2 == 0)
    {
        printf("the given number is EVEN");
    }
    else
    {
        printf("the given number is ODD");
    }
    return 0;
}