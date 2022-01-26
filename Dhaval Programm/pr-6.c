#include<stdio.h>
void main()
{
    float f,c;
    printf("Enter temperature in celsius:-");
    scanf("%f",&c);
    f=(c*1.8)+32;
    printf("\n%fcelsius=%ffarenheit",c,f);
}
