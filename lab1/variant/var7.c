#include <stdio.h>

int main()
{
    int a, b, s1, s2;
    float res;
    s1 = 0;
    s2 = 0;

    printf ("enter a: ");
    scanf ("%i", &a);
    printf ("enter b: ");
    scanf ("%i", &b);
   
    while (a)
    {
        s1 = s1 + a % 10;
        a = a / 10;//считаем сумму цифр в числе для а
    }
    while (b)
    {
        s2 = s2 + b % 10;
        b = b / 10;//считаем сумму цифр в числе для b
    }
    if (s1 != 0 || s2 != 0)
    {
        if (s1 > s2)// сумма цифр от a больше чем сумма цифр от b
            res = (float) s2 / s1 ;//делим наименьшую сумму на второй параметр
        else
            res = (float) s1 / s2;//делим наименьшую сумму на второй параметр
        printf ("Result: %f \n", res);
    }
    else
        printf ("error: Division by zero \n");
    return (0);
}
