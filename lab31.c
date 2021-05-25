#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    double h = 0, kh = 0, fx = 0, k = 0, x = -1;
    printf("input H [0 < h <= 1] >>> ");
    scanf("%lf", &h);
    if((h < 0) || (h >= 1))
    {
        printf("H does not match scope\n");
        exit(0);
    }
    k = -(1/h);
    kh = 2.0 / h;
    printf("x                  f(x)\n");
    printf("_______________________\n");
    while (k <= kh)
    {
        if (k <= 1)
            fx = exp(-2.0 * sin(x));
        else
            fx = x * x - (1.0/tan(x));
        printf("% lf         %lf\n", x, fx);
        x = x + h;
        k = k + 1;
    }
}
