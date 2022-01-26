#include<stdio.h>
#include<string.h>
void main()
{
    char str[100],c;int i,a=0;
    printf("\nenter a string:");
    gets(str);
    a=strlen(str);
    printf("\nenter a character to find its position:");
    scanf("%c",&c);
    for(i=0;i<a;i++)
        {
          if(str[i]==c)
        {
          printf("character position:\n%d",i+1);
          a=1;
        }
        }
        if(a==0)
        {
          printf("\ncharacter not found");
        }
}
