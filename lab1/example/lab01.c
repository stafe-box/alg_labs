#include <stdio.h>
#include <math.h>
int main()
{
    float a, b, c;
    printf("Enter a -> ");
    scanf("%f",&a);
    printf("Enter b -> ");
    scanf("%f",&b);
    printf("Enter c -> ");
    scanf("%f",&c);
    if (!a && !b && !c)//все не равны нулю
        return 0;
    float x = 1.0f;
    printf("f(x) = ");
    if (a)//а!=0
        printf("%f * x^2 ", a);
    if (b)
    {
        /*if (b > 0.0f)
            printf("+ ");
        if (b < 0.0f)
            printf("- ");*/
        printf("%+f * x ", b);
    }
    if (c)
        printf("%+f", c);
    /*{
         if (c > 0.0f)
            printf("+ ");
        else
            printf("- ");}
        printf("%f", fabs(c));
    }*/
    printf("\n");
    float f_x = a * x * x + b * x + c;
    float f_minus_x = a * x * x + b * -x + c;
    if (f_x == f_minus_x)
        printf("Function is even: f(x) = %f = f(-x) = %f\n", f_x, f_minus_x);
    /*else if (f_minus_x == -f_x)
        printf("Function is odd: f(-x) = %f = -f(x) = %f\n", f_minus_x, -f_x);*/
    else
        printf ("Function is neither even nor odd: f(x) = %f != f(-x) = % f != -f(x) = %f\n" , f_x , f_minus_x , -f_x);
    if (a)
    {
        if (b)
        {
            float vx = -b / (2.0f * a);
            float vy = a * vx * vx + b * vx + c;
            printf("Vertex (%f, %f) is a ", vx, vy);
            if (a > 0.0f)
                printf("minimum");
            else
                printf("maximum");
            printf("\n");
        }
        else
        {
            printf("Vertex (%f, %f) is a ", 0.0f, c);
            if (a > 0.0f)
                printf("minimum");
            else
                printf("maximum");
            printf("\n");
        }
    }
    return 0;
}
