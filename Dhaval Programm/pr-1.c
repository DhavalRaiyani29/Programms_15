#include<stdio.h>
void main()
{
    char a;
    int x,y;
    printf("Enter the number:- ");
    printf("1=+,2=-,3=*,4=/\n");
    scanf("%c",&a);
    printf("\nEnter Two number:- ");
    scanf("%d%d",&x,&y);

    switch(a)
        {case'1':
            {
                printf("%d+%d=%d",x,y,x+y);
            }
           break;
          case'2':
            {
                printf("%d-%d=%d",x,y,x-y);
            }
           break;
          case'3':
            {
                printf("%d*%d=%d",x,y,x*y);
            }
           break;
          case'4':
            {
                printf("%d/%d=%d",x,y,x/y);
            }
           break;
          default:
            {
                printf("Please Enter proper Number");
            }
            break;
        }


}
