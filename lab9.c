#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int k = 0;
    int j = 0;
    char text[1000];
    printf("\n\nJust write here >>> ");
    fgets(text, 1000, stdin);
        char *pch = strtok(text, " ,;:");
        while (pch != NULL)
        {
            if (atoi(pch))
            {
                k += atoi(pch);
                j++;
            }
            pch = strtok(NULL, " ,;:");
        }
    printf("summ >>> %i\n\n\n", k);
    return 0;
}
