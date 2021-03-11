#include <stdio.h>
#include <stdlib.h>

int main()
{
    char x;
    int znaki[255] = {0};
    int ile=0;
    printf("podaj dane: ");

    while(x != '#')
    {
        x = fgetc(stdin);
        ile += 1;
        if(znaki[x] == 0)
        {
            printf("%c %d | ",x,x);
            znaki[x] += 1;
        }
        if(ile%8 == 0) printf("\n");
    }


    return 0;
}

