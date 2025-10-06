#include<stdio.h>
int main()
{
    int num ;
    scanf("%d", & num);
    if(num > 0)
    {
        printf("the number is possitive");
    }
    else if (num < 0)
    {
        printf("the number is negative");
    }
    else
    {
        printf("the number is ZERO");
    }
}