/*program to find aggregate and percentage marks*/
/*Author Prayag Date: 02/08/2024*/

#include <stdio.h>
int main()
{
    float sci;
    float maths;
    float eng;
    float hindi;
    float sst;
    float aggr;
    float percent;

    printf("please enter marks of student in different subjects in order of science, mathematics, hindi and sst:   ");
    scanf("%f %f %f %f %f", &sci, &maths, &eng, &hindi, &sst);

    aggr = sci + maths + eng + hindi + sst + aggr + percent;
    percent = aggr * 100 / 500;

    printf("the aggregate marks obtained by student is %f and had percentage %f ", aggr, percent);

    return 0;
}

/*If the marks obtained by a student in five different subjects
are input through the keyboard, find out the aggregate marks
and percentage marks obtained by the student. Assume that
the maximum marks*/