#include <stdio.h>
int main()
{
    int r;
    float a, p;
    printf("Enter the radius ");
    scanf("%d", &r);
    a = 3.14 * r * r;
    p = 2 * 3.14 * r;
    printf("The area is %f and the perimeter is %f", a, p);
    return 0;
}