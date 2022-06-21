#include <stdio.h>
#include <math.h>

double calc(int a, int b, double c, double d)
{
    double t1, t2, t3, t4; // temp var
    t1 = b*c;
    t2 = a*d;
    t3 = pow(d,2)*c;
    t4 = pow(c,2)*d;
    return 2*3.14*(t1-t2)(t3-t4);

}

double calc_2(double a, double b)
{
    double t1, t2, t3, t4;
    printf("Avrage J: %0.4lf\n", 0.0534*0.025*(9.8-0.025*b)/(b-a));
}

int main()
{
    double data_1[8], data_2[8];
    double ans_1[4], ans_2[4];
    int i;
    double sum_1, sum_2;
    double avrage_1, avrage_2;

    printf(input the first set of data:\n");
    for(i=0; i<8; i++)
    {
        scanf("%lf", &data_1[i]);
    }

    printf(input the second set of data:\n");
    for(i=0; i<8; i++)
    {
        scanf("%lf", &data_2[i]);
    }

    for(i=0, i<4, i++)
    {
        ans_1[i] = calc(i+1, i+5, data_1[i], data_1[i+4]);
        ans_2[i] = calc(i+1, i+5, data_2[i], data_2[i+4]);
    }

    for(i=0, i<4, i++)
    {
        printf("First set of angle velocity: %0.4lf\n", ans_1[i]);
    }
    

}
