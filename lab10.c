#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void fill(int n, int m, int a[])
{
    int i, j;
    for (i = 0; i < n; i++)
        for (j = 0; j < m; j++)
            a[i * m + j] = rand() % 10;
}

void print(int n, int m, int a[])
{
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
            printf("%3d", a[i * m + j]);
        printf("\n");
    }
}

int summa(int n, int m, int b, int s, int a[])
{
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            if (i == j || i + 1 == j || i == j + 1)
            {
                s = s + a[i * m + j];
            }
        }
    }
    return (s);
}

void transpon(int n, int m, int a[])
{
    int i, j;
    int *k = (int *)malloc(m * n * sizeof(int));
    for (i = 0; i < m; i++){
        for (j = 0; j < n; j++)
        {
            k[i * n + j] = a[j * m + i];
        }
    }
    printf("Ansewr: \n");
    print(m, n, k);
    free(k);
}

void nool(int n, int m, int a[])
{
    int i, j;
    for (i = 0; i < n; i++){
        for (j = 0; j < m; j++)
        {
            if (i != j && i + 1 != j && i != j + 1)
            {
                a[i * m + j] = 0;
            }
        }
    }
    printf("Ansewr: \n");
    print(n, m, a);
}

int main()
{
    srand(time(NULL));
    int n, m, b, s = 0;
    printf("n -> ");
    scanf("%d", &n);
    printf("m -> ");
    scanf("%d", &m);
    printf("b -> ");
    scanf("%d", &b);
    int *mas = (int *)malloc(n * m * sizeof(int));
    if (!mas)
    {
        printf("Memory allocation error!\n");
        exit(EXIT_FAILURE);
    }
    fill(n, m, mas);
    print(n, m, mas);
    if (summa(n, m, b, s, mas) > b)
        transpon(n, m, mas);
    else
        nool(n, m, mas);
    free(mas);
    return 0;
}