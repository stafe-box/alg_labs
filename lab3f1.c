#include <stdio.h>
#include <math.h>
#include <stdlib.h>
float ctg(x)
{
    return cos(x)/sin(x);
}

int main()
{
    float h, x, fx;
    x = -1.0;
    fx = 0.0;
    h = 0.0;
    printf("input H [0 <= h <= 1] >>> ");
    scanf("%f", &h);
    if((h < 0) || (h >= 1))
    {
        printf("H does not match scope\n");
        exit(0);
    }
    printf("x                  f(x)\n");
    printf("_______________________\n");
    for (x = -1; x <= 1; x = x + h)
    {
        fx = exp(-2 * sin(x));
        printf("% .3f         %.6f\n", x, fx);
    }
    for (x = x+0; x <= 2.0; x = x + h)
    {
        fx = x * x - ctg(x);
        printf("% f         %.6f\n", x, fx);
    }
    return 0;
}
