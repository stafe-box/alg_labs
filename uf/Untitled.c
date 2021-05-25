#include <stdio.h>
int main()
{
FILE *f;
int x;
f=fopen("test.txt", "w");
scanf("%i", &x);
fprintf(f,"%i",x);
}
