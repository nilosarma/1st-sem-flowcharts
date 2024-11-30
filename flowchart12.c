#include<stdio.h>
int main()
{
int A,B;
printf("Enter two numbers");
scanf("%d%d",&A,&B);
if(A<B)
  printf("%d is smaller",A);
else
  printf("%d is smaller",B);
return 0;
}
