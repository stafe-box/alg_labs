#include <stdio.h>

int nodf(n1, n2)
{
    int i, k;
    if (n1>n2)
        k=n2;
    else
        k=n1;
    for(i=k; ((n1 % i) != 0) || ((n2 % i) != 0); i--);
    return i;
}

int nodr(int n1, int n2, int i)
{
    if( ( (n1 % i) != 0) || ( (n2 % i) != 0) )
        return nodr(n1, n2, --i);
    else
        return i;
}

int main()
{
     int n1, n2, nod, min;
    printf("Вдедите первое чило>>>");
    scanf("%i", &n1);
    printf("Вдедите второе чило>>>");
    scanf("%i", &n2);
    nod = nodf(n1, n2);
    printf("for: %i\n", nod);
    if (n1 < n2)
        min = n1;
    else
        min = n2;
    nod = nodr(n1, n2, min);
    printf("rec: %i\n", nod);
    return 0;
}
