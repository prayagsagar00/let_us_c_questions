/*program to print paper size*/
/*Author Prayag Date: 02/08/2024*/

#include <stdio.h>

void calc_paper_size()
{
    int height = 1189;  //initial size of height
    int width = 841;    //initial size of width
    int temp;

    for(int i = 0; i <= 8; i++)
    {
        printf("A%d : %d mm * %d mm\n", i,height, width);

        //calculate the dimensions for the next paper size
        temp = height / 2;    //halves the height
        height = width;       //new height becomes the current width
        width = temp;         //new width becomes the halved height
    }
}

int main()
{
    calc_paper_size();
    return 0;
}

/*Paper of size A0 has dimensions 1189 mm x 841 mm. Each subsequent size A(n) is defined as A(n-1) cut in half parallel to its shorter sides. Write a program to calculate and print paper sizes A0, A1, A2, ….. A8.*/