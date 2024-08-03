/*program to convert unit*/
/*Author Prayag Date: 02/08/2024*/

#include <stdio.h>
int main()
{
    float dist;
    float mtr;
    float ft;
    float inch;
    float cm;

    printf("please enter the distance between two cities in km.  ");
    scanf("%f", &dist);

    mtr = dist * 1000;
    ft = dist * 3280.83;
    inch = ft * 12;
    cm = mtr * 100;

    printf("the distance in meters is %f m, in feet is %f ft, in inches is %f inch and in centimeters is %f cm  ", mtr, ft, inch, cm);

    return 0;

}

/*The distance between two cities (in km.) is input through the
keyboard. Write a program to convert and print this distance
in meters, feet, inches and centimeters. */