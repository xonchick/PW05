#include <stdio.h>

double calc(double a, double b) //тип double более точный, чем float
{
    return (((a*a)+(b*b))/(a*b)); //return возвращает значение, вычисленное функцией

}

int main()
{
    double a, b;
    while (scanf("%lf %lf", &a, &b) == 2)
    {
        printf("%.4f", calc(a,b));
    }

}