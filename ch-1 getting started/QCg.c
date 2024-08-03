/*program to find cost price of one item*/
/*Author Prayag Date: 02/08/2024*/

#include <stdio.h>
int main()
{
    float sp;
    float profit;
    float cp;
    float cp_one;

    printf("please enter selling price and profit of 15 items    ");
    scanf("%f %f", &sp, &profit);

    cp = sp - profit;
    cp_one = cp / 15;

    printf("the cost price of one item is %f  ", cp_one);

    return 0;
}

/*If the total selling price of 15 items and the total profit earned on them is input through the keyboard. Write a program to find the cost price of one item.*/