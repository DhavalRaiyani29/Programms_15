#include<stdio.h>
void main()
{
    int a;
    printf("Enter a number:-");
    scanf("%d",&a);
    if(a>0)
    {
        printf("This is positive number");
    }
    else if(a<0)
    {
        printf("This is negative number");
    }
    else
    {
        printf("You enter a zero");
    }
}
