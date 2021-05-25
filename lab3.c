#include <stdio.h>
#include <math.h>
#include <stdlib.h>
float ctg(x)
{
    return cos(x)/sin(x);
}

int main()
{
    float h, x, fx, lh;
    x = -1.0;
    fx = 0.0;
    h = 0.0;
    printf("input H [0 < h <= 1] >>> ");
    scanf("%f", &h);
    if((h < 0) || (h >= 1))
    {
        printf("H does not match scope\n");
        exit(0);
    }
    lh = 2.0 / h;
    printf("x                  f(x)\n");
    printf("_______________________\n");
    while(lh => kh)
    if (i <= 1.0)
    {
        fx = exp(-2 * sin(x));
        printf("% f         %f\n", x, fx);
    }
    else
    {
        
    }
    printf(
    while((x >= 1.0) && (x <= 2))
    {
        fx = x * x - ctg(x);
        printf("% f         %f\n", x, fx);
        x =x + lh;
    }
    return 0;
}
