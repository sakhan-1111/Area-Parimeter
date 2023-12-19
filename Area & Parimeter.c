#include <stdio.h>
#include <conio.h>
int main()
{
    float a,pi=3.1416,p,r;
    printf("Enter the radius: ");
    scanf("%f", &r);
    a=pi*r*r;
    printf("Area is= %f\n",a);
    p=2*pi*r;
    printf("Parimeter is= %f",p);
    return 0;
}
