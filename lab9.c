#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
int main(int argc, char* argv[])
{
    char str[100];
    printf("Just write here>>>");
    scanf("%[^\n]s", str);
    char *p = str;
    int sum = 0;
    while (*p) {
        while (*p && !isdigit(*p))
            ++p;
        sum += atoi(p);
        while (*p && isdigit(*p))
            ++p;
    }
    printf("Сумма чисел в строке = %d\n", sum);
    return sum;
}
