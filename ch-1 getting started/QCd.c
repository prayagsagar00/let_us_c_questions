/*program to convert fahrenheit temperature to centigrade*/
/*Author Prayag Date: 02/08/2024*/

#include <stdio.h>
int main()
{
    float tf;
    float tc;

    printf("please enter temperature of city in fahrenheit:   ");
    scanf("%f", &tf);

    tc = (tf - 32) * 5 / 9;

    printf("the temperature of city in degree centigrade is %f  ", tc);

    return 0;
}

/*Temperature of a city in Fahrenheit degrees is input through
the keyboard. Write a program to convert this temperature
into Centigrade degrees.*/