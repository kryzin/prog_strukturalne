#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;

    printf("liczba\tkwadrat\tszescian\n");
    printf("\n");

    for(x = 0; x <= 25; x++)
        printf("%d\t%d\t%d\n", x, x*x, x*x*x);

    return 0;
}
