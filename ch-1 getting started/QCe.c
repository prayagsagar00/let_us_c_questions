/*program to calculate area & perimeter of rectangle and circle*/
/*Author Prayag Date: 02/08/2024*/

#include <stdio.h>
int main()
{
    float length;
    float breadth;
    float radius;
    float area_rect;
    float peri_rect;
    float area_circle;
    float circumf_circle;
    float pi = 3.1415;

    printf("please enter length & breadth of rectangle and radius of circle:  ");
    scanf("%f %f %f", &length, &breadth, &radius );

    area_rect = length * breadth;
    peri_rect = 2 * (length + breadth);

    area_circle = pi * radius * radius;
    circumf_circle = 2 * pi * radius;

    printf("the area & perimeter of rectangle is %f & %f and \n area & circumference of circle is %f & %f", area_rect, peri_rect, area_circle, circumf_circle);

    return 0;
}

/*The length & breadth of a rectangle and radius of a circle are
input through the keyboard. Write a program to calculate the
area & perimeter of the rectangle, and the area &
circumference of the circle. */