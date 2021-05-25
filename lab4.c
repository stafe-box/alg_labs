#include <math.h>
#include <stdio.h>
int main()
{
    double xi, I, I2, h, y, x, e, d = 3.0;
    int n = 2;
    printf("Введите точность >>> ");
    scanf("%lf", &e);
    while (d >= e)
    {
        I2 = I;
        I = 0;
        h = 3.0 / n;
        for (int i = -1; i < n; i++)
        {
            xi = -1 + i * h;
            x = xi + h / 2.0;
            if (x > 1.0)
                y = x * x - (1/tan(x));
            else
                y = exp(-2 * sin(x));
            I = I + y;
        }
        I = h * I;
        n = n * 2;
        d = fabs(I - I2) / 3.0;
    }
    printf("Answer = %.5lf\n", I);
 }
