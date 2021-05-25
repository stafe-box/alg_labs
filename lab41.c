#include <math.h>
#include <stdio.h>

int main()
{
    double xi, integral, integral2, h, y, x, e, d = 2.0f;
    int n = 2;
    printf("Введите необходимую точность -> ");
    scanf("%lf", &e);
    while (d >= e)
    {
        integral2 = integral;
        integral = 0;
        h = 2.0 / n;
        for (int i = 0; i < n; i++)
        {
            xi = 0 + i * h;
            x = xi + h / 2.0;
            if (x <= 1.0)
                y = exp(-2.0 * sin(x));
            else
                y = x * x - (1/tan(x));
            integral += y;
        }
        integral *= h;
        n = n * 2;
        d = fabs(integral - integral2) / 2.0f;
    }
    printf("\n");
    printf("Ans = %lf", integral);
    printf("\n");

 }
