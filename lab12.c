#include <stdio.h>
#include <string.h>
#include <ctype.h>

typedef struct hot
{
  int status;
  char name[20];
  int stars;
  char addr[60];
  int number;
  int countRooms;
  int countLuxRooms;
  int freeRooms;
} hotel;

void init_hotel(int n, hotel *name)
{
  for (int i = 0; i < n; i++)
      name[i].status = 0;
}

void fill(int n, hotel *name)
{
  char v1[20];
  char v2[60];
  int k = 0;
  for (int i = 0; i < n; i++)
  {
      if (k != n)
      {
          if (!name[i].status)
          {
              memset(v1, 0, sizeof(v1));
              memset(v2, 0, sizeof(v2));
              name[i].status = 1;
              printf("Enter name : ");
              scanf("%s", v1);
              for (int t = 0; t < 20; t++)
                  v1[t] = tolower(v1[t]);
              strcpy(name[i].name, v1);
              printf("Enter stars : ");
              scanf("%d", &name[i].stars);
              printf("Enter addres : ");
              scanf("%s", v2);
              for (int t = 0; t < 60; t++)
                  v2[t] = tolower(v2[t]);
              strcpy(name[i].addr, v2);
              printf("Enter number : ");
              scanf("%s", &name[i].number);
              printf("Enter count of rooms: ");
              scanf("%d", &name[i].countRooms);
              printf("Enter count of lux rooms : ");
              scanf("%d", &name[i].countLuxRooms);
              printf("Enter count of free rooms: ");
              scanf("%d", &name[i].freeRooms);
              break;
          }
          else
              k++;
        }
  }
}

void remove_hotel(int n, hotel *name)
{
    name[n].status = 0;
}

void printstr(int n, hotel *name)
{
    for (int i = 0; i < n; i++)
    {
        if (name[i].status)
        {
            printf("\n");
            printf("Name%d = %s\n", i, name[i].name);
            printf("Stars%d = %d\n", i, name[i].stars);
            printf("Addres%d = %s\n", i, name[i].addr);
            printf("Number%d = %d\n", i, name[i].number);
            printf("Count of rooms%d = %d\n", i, name[i].countRooms);
            printf("Count of lux rooms%d = %d\n", i, name[i].countLuxRooms);
            printf("Count of free rooms%d = %d\n", i, name[i].freeRooms);
        }
    }
}

void bestHotel(int n, hotel *name)
{
    struct hot bestHotels[n];
    int bestStars = 5, i, countBest = 0, maxFreeRooms;
    for (i = 0; i <= n; i++)
        if (name[i].stars == bestStars && name[i].status != 0)
        {
            if (name[i].stars == bestStars)
            {
                bestHotels[countBest] = name[i];
                countBest++;
            }
            if (i == n && countBest == 0){
                i = 0;
                bestStars--;
            }
        }
    maxFreeRooms = bestHotels[1].freeRooms;
    int indexOfMax = 0;
    for (i = 0; i < countBest; i++)
    {
        if (maxFreeRooms < bestHotels[i].freeRooms){
            maxFreeRooms = bestHotels[i].freeRooms;
            indexOfMax = i;
        }
    }
    printf("%s %d %s %d %d %d %d\n", bestHotels[indexOfMax].name, bestHotels[indexOfMax].stars, bestHotels[indexOfMax].addr, bestHotels[indexOfMax].number, bestHotels[indexOfMax].countRooms, bestHotels[indexOfMax].countLuxRooms, bestHotels[indexOfMax].freeRooms);
}

void read_hotel(int n, hotel *name)
{
    FILE* hotel_list = fopen("hotel_list.txt", "r");
    if (hotel_list == NULL)
        printf("Файла со списком магазинов не существует\n");
    else
    {
        for(int i = 0; i < n; i++)
            fscanf(hotel_list, "%d %s %d %s %d %d %d %d\n", &name[i].status, name[i].name, &name[i].stars, name[i].addr, &name[i].number, &name[i].countRooms, &name[i].countLuxRooms, &name[i].freeRooms);
        fclose(hotel_list);
    }
}

void write_hotel(int n, hotel *name)
{
    FILE* hotel_list = fopen("hotel_list.txt", "w");
    for (int i = 0; i < n; i++)
    {
        if (name[i].status)
        fprintf(hotel_list, "%d %s %d %s %d %d %d %d\n", name[i].status, name[i].name, name[i].stars, name[i].addr, name[i].number, name[i].countRooms, name[i].countLuxRooms, name[i].freeRooms);
    }
    fclose(hotel_list);
}

int main()
{
  int n = 10, l = 0;
  char c;
  hotel test[n];
  init_hotel(n, test);
  read_hotel(n, test);
  while(c != 'e')
  {
      printf("\n");
      printf("Choose? n - add hotel, ");
      printf("d - delete hotel, s - search best hotel with free rooms, ");
      printf("p - print hotels, e - exit ");
      printf("\n");
      scanf("%s", &c);
      switch(c)
      {
              case 'p':
                  printstr(n,test);
                  break;
              case 'n':
                  fill(n,test);
                  break;
              case 'd':
                  printf("Choose number: \n");
                  scanf("%d", &l);
                  remove_hotel(l,test);
                  break;
              case 's':
                  bestHotel(n, test);
                  break;
              case 'e':
                  break;
              default:
                  printf("Error\n");
                  break;
      }
  }
  write_hotel(n, test);
  return 0;
}
