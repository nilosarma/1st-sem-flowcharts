#include<stdio.h>
int main()
{
int A, B;
printf("Enter the two numbers: ");
scanf("%d%d" , &A, &B);
if (A>B)
    printf("%d is larger", A);
else if(B>A)
    printf("%d is larger", B);
else printf("Both equal");
return 0;
}