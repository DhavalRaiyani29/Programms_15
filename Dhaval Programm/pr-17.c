#include<stdio.h>
#include<conio.h>
#include<string.h>


struct student
    {
        char name[10];
        float height;
        int rollno;
    };
void main()
    {
        struct student x;
        printf("Enter name,height,roll no:-");
        scanf("%s%f%d",&x.name,&x.height,&x.rollno);
        printf("Name=%s\nHeight=%.2f\nRoll no=%d",x.name,x.height,x.rollno);
    }
