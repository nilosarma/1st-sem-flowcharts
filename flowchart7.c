#include<stdio.h>
int main()
{
int a,b,c,d,e;
float avg;
printf("Enter five numbers");
scanf("%d%d%d%d%d",&a, &b, &c, &d, &e);
avg = (a+ b+ c+ d+ e)/5.0;
printf("The average of the given number is %f",avg);
return 0;

}
