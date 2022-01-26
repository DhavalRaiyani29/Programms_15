#include<stdio.h>
void main()
{
    float n1, n2, n3;
    printf("Enter three numbers: ");
    scanf("%f %f %f", &n1, &n2, &n3);

    if (n1 >= n2)
        {
        if (n1 >= n3)
            printf("%.1f is the largest number.", n1);
        else
            printf("%.1f is the largest number.", n3);
        }
    else
      {
        if (n2 >= n3)
            printf("%.1f is the largest number.", n2);
        else
            printf("%.1f is the largest number.", n3);
       }


}
