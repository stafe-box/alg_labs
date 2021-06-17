#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct s
{
    char name[128];
    int stars;
    char adres[128];
    int tel;
    int nomera;
    int luks;
    int svobod;
};

void dob(struct s hotel[], int m)
{
    for (int i = m; i < m + 1; i++)
    {
        printf("name -> ");
        scanf("%s", hotel[i].name);
        printf("stars -> ");
        scanf("%d", &hotel[i].stars);
        printf("adres -> ");
        scanf("%s", hotel[i].adres);
        printf("number -> ");
        scanf("%d", &hotel[i].tel);
        printf("count of rooms -> ");
        scanf("%d", &hotel[i].nomera);
        printf("count of lux rooms -> ");
        scanf("%d", &hotel[i].luks);
        printf("count of free rooms -> ");
        scanf("%d", &hotel[i].svobod);

        printf("\n");
    }
    printf("\n");
}

void del(struct s hotel[])
{
    int h;
    printf("Choose number -> ");
    scanf("%d", &h);
    struct s e4 = {" ", 0, " ", 0, 0, 0, 0};
    hotel[h - 1] = e4;
}

void best(struct s hotel[], int m)
{
    int i, k = 0;
    char max;
    for (i = 1; i < m; i++)
        if (hotel[i].stars > hotel[i - 1].stars)
            max = hotel[i].stars;
    for (i = 0; i < m; i++)
        if (hotel[i].stars == max)
            if (hotel[i].svobod > k)
                k = hotel[i].svobod;
    for (i = 0; i < m; i++)
        if (hotel[i].stars == max && hotel[i].svobod == k)
            printf("\nName of hotel = %s, Stars = %d, Addres = %s, Number = %d, Count of rooms = %d, Count of Lux rooms = %d, Count free rooms = %d\n", hotel[i].name, hotel[i].stars, hotel[i].adres, hotel[i].tel, hotel[i].nomera, hotel[i].luks, hotel[i].svobod);
}

void out(struct s hotel[], int m)
{
    for (int i = 0; i < m; i++)
    {
        if (hotel[i].stars != 0)
            printf("\nName of hotel = %s, Stars = %d, Addres = %s, Number = %d, Count of rooms = %d, Count of Lux rooms = %d, Count free rooms = %d\n", hotel[i].name, hotel[i].stars, hotel[i].adres, hotel[i].tel, hotel[i].nomera, hotel[i].luks, hotel[i].svobod);
    }
}

int main()
{
    struct s hotel[50];
    struct s e0 = {"Amsterdam", 5, "komsml98", 612337, 115, 13, 35};
    hotel[0] = e0;
    struct s e1 = {"Kipr", 3, "mnj54", 64372465, 127, 20, 12};
    hotel[1] = e1;
    struct s e2 = {"Rose", 5, "lenina65", 87498146, 100, 10, 3};
    hotel[2] = e2;
    struct s e3 = {"Someday", 4, "mir54", 928484728, 113, 5, 15};
    hotel[3] = e3;
    int m = 4;
    char c;
    for (;;)
    {
        printf("\n");
        printf("Choose? n - add hotel, ");
        printf("d - delete hotel, s - search best hotel with free rooms, ");
        printf("p - print hotels, e - exit ");
        printf("\n");
        scanf("%s", &c);
        switch (c)
        {
            case 'n':
                dob(hotel, m);
                m++;
                break;
            case 'd':
                del(hotel);
                break;
            case 's':
                best(hotel, m);
                break;
            case 'p':
                out(hotel, m);
                break;
            case 'e':
                return 0;
        }
    }
    return 0;
}
