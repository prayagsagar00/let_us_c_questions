/*program to calculate gross salary*/
/*Author Prayag Date: 02/08/2024*/

#include <stdio.h>
int main()
{
    int b_sal;
    int da;
    int hra;
    int gs;
    
    printf("please enter Ramesh's basic salary:  ");
    scanf("%d", &b_sal);

    da = 40 * b_sal / 100 ;
    hra = 20 * b_sal / 100;

    gs = b_sal + da + hra;

    printf("Ramesh's gross salary is %d", gs);

    return 0;
}

/*Ramesh’s basic salary is input through the keyboard. His
dearness allowance is 40% of basic salary, and house rent
allowance is 20% of basic salary. Write a program to calculate
his gross salary. */