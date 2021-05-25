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
    printf("x                  f(x)\n");
    printf("_______________________\n");
    
    kh = 2.0 / h;
    for (k = -1/h; k <= kh; k++)
    {
        if (k <= 1)
        {
            fx = exp(-2.0 * sin(x));
            printf("% lf         %lf\n", x, fx);
        }
        else
        {
            fx = x * x - (1/tan(x));
            printf("% lf         %lf\n", x, fx);
        }
        x = x + h;
    }
    return 0;
}
