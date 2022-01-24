#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    int i,j,c;
    for(i=5;i>=1;i--){
        for(j=1;j<=i;j++){
            printf(" *");
        }
        for(c=5;c>i;c--){
            printf("    ");
        }
        for(j=1;j<=i;j++){
            printf(" *");
        }
        printf("\n");
    }
    for(i=1;i<=5;i++){
        for(j=1;j<=i;j++){
            printf(" *");
        }
        for(c=5;c>i;c--){
            printf("    ");
        }
        for(j=1;j<=i;j++){
            printf(" *");
        }
        printf("\n");
    }
    printf("\n");
    for(i=1;i<=5;i++){
        for(j=1;j<=i;j++){
            printf(" *");
        }
        for(c=5;c>i;c--){
            printf("    ");
        }
        for(j=1;j<=i;j++){
            printf(" *");
        }
        printf("\n");
    }
    for(i=5;i>=1;i--){
        for(j=1;j<=i;j++){
            printf(" *");
        }
        for(c=5;c>i;c--){
            printf("    ");
        }
        for(j=1;j<=i;j++){
            printf(" *");
        }
        printf("\n");
    }
    printf("\n");
    for(i=1;i<=5;i++){
        for(c=5;c>i;c--){
            printf(" ");
        }
        for(j=1;j<=i;j++){
            if((i+j)%2==0){
                printf(" 0");
            }
            else{
                printf(" 1");
            }
        }
        printf("\n");
    }
    printf("\n");
    int l=1,m=65;
    for(i=1;i<=5;i++){
        for(j=1;j<=i;j++){
            if((i+j)%2==0){
                printf(" %c",m);
                m++;
            }
            else{
                printf(" %d",l);
                l++;
            }
        }
        printf("\n");
    }
    printf("\n");
    for(i=1;i<=5;i++){
        for(c=5;c>i;c--){
            printf(" ");
        }
        for(j=i;j>=1;j--){
            printf("%d",j);
        }
        for(j=2;j<=i;j++){
            printf("%d",j);
        }
        printf("\n");
    }
    printf("\n");
    int d=64;
    for(i=1;i<=5;i++){
        for(c=5;c>i;c--){
            printf("  ");
        }
        for(j=1;j<=i;j++){
            printf("   %c",d);
            d++;
        }
        printf("\n");
    }
    printf("\n");
    for(i=1;i<=5;i++){
        for(j=1;j<=5;j++){
            if((i==1||i==5||j==1||j==5)){
                printf(" *");
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }
    for(i=1;i<=5;i++){
        for(j=1;j<=5;j++){
            if((i==1||i==5||(i==j))){
                printf(" *");
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}
