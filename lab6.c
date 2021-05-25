#include <stdio.h>
# include <stdlib.h>
#include <time.h>


void fill( int n , int a[])
{
    int i =0;
    srand(time(NULL));
    for( i = 0; i < n; i++)
        a[i] = rand()% 100;
}


void printar (int a[], int n)
{
    int i = 0;
    for(i = 0; i < n; i++)
        printf ("%6i", a[i]);
    printf("\n\n");
}


int search (int A[], int n, int f)
{
    int i = 0, fond = 0;
    while (i <= n)
    {
        if (A[i] == f)
        {
            fond = i;
            printf("   Число найдено, элемент массива № %i\n\n", fond);
            break;
        }
        i++;
    }
    return fond;
}


int main()
{
    int n, f, fond;
    fond = -99;
    printf("   Введите количество элементов>>> ");
    scanf("%i", &n);
    printf("\n");
    int A[n];
    fill(n, A);
    printar(A, n);
    printf("   Число которое вы хотите найти>>> ");
    scanf("%i",&f);
    fond = (search (A, n,f));
    int i=0, t=0;
    for(i = 0; i < fond/2; i++)
    {
        t = A[i];
        A[i] = A[fond - (i+1)];
        A[fond - (i+1)] = t;
    }
    
    for(i =fond+1; i < (n+fond)/2; i++)
    {
        t = A[i];
        A[i] = A[n-(i)+fond];
        A[n-(i)+fond] = t;
    }
    printf("   Перевёрнутый массив\n");
    printf("   ↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓\n");
    printar(A, n);
    return 0;
}
