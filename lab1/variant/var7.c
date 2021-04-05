#include <stdio.h>

int main(){
    int a, b, sc, s1, s2;
    float res;
    s1=0;
    s2=0;

    printf("enter a: ");
    scanf("%i", &a);
    printf("enter b: ");
    scanf("%i", &b);
    printf("enter second parameter: ");
    scanf("%i", &sc);//второй параметр

    if (sc!=0)
    {
        while (a!=0)
        {
            s1=s1+a%10;
            a=a/10;
        }
        while (b!=0)
        {
            s2=s2+b%10;
            b=b/10;
        }
        if (s1>s2)
        {
            res=(s2*1.f)/(sc*1.f);
        }
        else
        {
            res=(s1*1.f)/(sc*1.f);
        }
        printf("%f",res);
    }
    else
    {
        printf("error: X/0");
    }
}
