#include<stdio.h>
int main()
{
    float r,area,perimeter;
    printf("Enter radius of the circle:");
    scanf("%f",&r);
    area=(3.14)*r*r;
    printf("the area of a circle is %.3f",area);
    perimeter=2*(3.14)*r;
    printf("the perimeter of a circle is %.3f",perimeter);
    return 0;
}
