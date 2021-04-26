//
//  09.c
//  
//
//  Created by Александр Тимик on 26.04.2021.
//

#include <stdio.h>
#include <math.h>

int main()
{
    double x, y;
    x=0.0;
    y=1.1;
    while (fabs(y) > 1.0)
    {
    x = x - 0.000001;
    y = (x - 2.0) * sqrt ((1.0 + x) / (1.0 - x));
    printf("x = %lf \ny = %lf \n", x, y);
    }
}
