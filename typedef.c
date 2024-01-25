#include <stdio.h>

typedef struct {
    char name[20];
    int id;
} Person;

void main()
{
    Person p1;
    printf("Name :\t");
    scanf("%s",p1.name);
    printf("\nYou have entered %s",p1.name);
}
