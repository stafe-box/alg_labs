#include <stdio.h>
#include <math.h>

int main()
{
    double x, y, z;
    printf("input x {-0.769293  < x < 1} >>> ");
    scanf("%lf", &x);
    if ((x > -0.769293) && (x < 1.0))
    {
        y = (x - 2.0) * sqrt ((1.0 + x) / (1.0 - x));
        z = log10(y * y - 1);
        printf("y = %lf \nz = %lf \n", y, z);
    }
    else
        printf("x does not match the scope \n");
    return 0;
}
