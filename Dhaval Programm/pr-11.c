#include <stdio.h>
void main()
{
    int a[100],i,n=10,min,max;
    printf("Enter elements in array : ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }

    min=max=a[0];
    for(i=1; i<n; i++)
    {
      if(min>a[i])
         min=a[i];
      if(max<a[i])
         max=a[i];
    }
     printf("minimum of array is : %d",min);
     printf("\nmaximum of array is : %d",max);

}
