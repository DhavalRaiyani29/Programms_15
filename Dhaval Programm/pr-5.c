#include<stdio.h>
void main()
{
    int distance;
    float meter,feet,inches,centimeter;
    printf("Enter the distance in KM:-");
    scanf("%d",&distance);
    meter=distance*1000;
    printf("Meter=%f\n",meter);
    feet=distance*3280.84;
    printf("feet=%f\n",feet);
    inches=distance*39370.1;
    printf("Inches=%f\n",inches);
    centimeter=distance*100000;
    printf("centimeter=%f\n",centimeter);
}
