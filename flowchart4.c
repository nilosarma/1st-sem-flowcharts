#include<stdio.h>
int main()
{
    int B, H;
    float A;
    printf("Enter the base of the triangle ");
    scanf("%d",&B);
    printf("Enter the height of the triangle");
    scanf("%d",&H);
    A=0.5*B*H;
    printf("The area of triangle is %f", A);
    return 0;
}