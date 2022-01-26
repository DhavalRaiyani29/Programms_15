#include<stdio.h>
void main()
{
    int a,b;
    printf("Enter value for a and b:-");
    scanf("%d%d",&a,&b);
    printf("Before swap a=%d and b=%d",a,b);
    a=a-b;
    b=a+b;
    a=b-a;
    printf("\nAfter swap a=%d and b=%d",a,b);
}
