#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, pr = 0, spr = 0, npr = 0, snpr = 0;
    printf("podaj dane: ");
    scanf("%d", &x);

    while(x != 0)
    {
        if(x%2 == 0)
        {
            pr += 1;
            spr += x;
        }
        else
        {
            npr += 1;
            snpr += x;
        }
        scanf("%d", &x);
    }
    spr /= pr;
    snpr /= npr;

    printf("parzyste: %d srednia: %d | nieparzyste: %d srednia: %d",pr,spr,npr,snpr);


    return 0;
}
