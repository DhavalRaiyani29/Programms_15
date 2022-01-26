
#include<stdio.h>
void main()
{
    char a;
    printf("\nEnter Any Character :");
    scanf("%c",&a);
    if(a>='0' && a<='9')
        {
          printf("\n Entered Character is Digit");
        }
    else if(a>='A' && a<='Z')
        {
          printf("\n Entered Character is Capital Letter");
        }
    else if(a>='a' && a<='z')
        {
          printf("\n Entered Character is Small Letter");
        }
    else
        {
          printf("\n Entered Character is Special Character");
        }

}
