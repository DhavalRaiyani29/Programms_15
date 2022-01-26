#include<stdio.h>
void main()
{
    float P,R,N,I;
    printf("Enter the value of P:-");
    scanf("%f",&P);
    printf("Enter the value of R:-");
    scanf("%f",&R);
    printf("Enter the value of N:-");
    scanf("%f",&N);
    I=P*R*N/100;
    printf("Simple interst is %f",I);
}
