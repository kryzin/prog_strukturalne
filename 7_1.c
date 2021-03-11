#include <stdio.h>
#include <stdlib.h>

int main()
{
    int odstepy = 0, nowalinia = 0, znaki = 0;
    char x;
    printf("podaj znaki: ");

    while(x != '#')
    {
        x = fgetc(stdin);
        if (x == ' ') odstepy++;
        else if (x == '\n') nowalinia++;
        else znaki++;
    }
    znaki -=1; //bez #

    printf("odstepy: %d ; nowe linie: %d ; inne znaki: %d",odstepy,nowalinia,znaki);
    return 0;
}
