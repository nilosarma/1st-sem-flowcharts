#include<stdio.h>
int main()
{
    int p;
    float N;
    printf("enter the price ");
    scanf("%d",&p);
    N = p-p*0.15;
    printf("\nPrice after discount: %f",N);
    return 0;
}