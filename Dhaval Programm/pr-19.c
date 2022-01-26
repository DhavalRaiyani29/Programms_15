#include<stdio.h>
#include<conio.h>
void swap(int*,int*);
void main()
{
    int a,b,c;
    printf("Enter two number:- ");
    scanf("%d%d",&a,&b);
    printf("Before swap a=%d and b=%d",a,b);
    swap(&a,&b);
    printf("\nAfter swaping a=%d and b=%d",a,b);
}
void swap(int *x,int *y)
{
    int c;
    c=*x;
    *x=*y;
    *y=c;
}
