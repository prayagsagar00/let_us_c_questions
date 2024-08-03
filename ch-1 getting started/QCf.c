/*program to interchange locations */
/*Author Prayag Date: 02/08/2024*/

#include <stdio.h>
int main()
{
    float C;
    float D;

    printf("please input number into C and D   ");
    scanf("%f %f", &C, &D);

    C = C + D;
    D = C - D;
    C = C - D;

    printf("the interchanged value of C is %f and D is %f ", C, D);

    return 0;
}

/*Two numbers are input through the keyboard into two
locations C and D. Write a program to interchange the
contents of C and D. */