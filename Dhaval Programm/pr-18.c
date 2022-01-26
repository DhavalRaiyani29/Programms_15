#include<stdio.h>
void main()
{
    int s=10;
    int *q,**r;
    q=&s;
    printf("%u",*q);
    r=&q;
    printf("\n%u",r);
}
