#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, k;
    char a = 'A', litera;
    int s; //s - spacja

    printf("Podaj wielka litere: ");
    scanf("%c",&litera);
    int n = (int)litera - 64;

    for(i = 1; i <= n; i++)
    {
        for(s = 1; s <= n-i; s++)
        {
            printf(" ");
        }
        for(j = 0; j <= k/2; j++)
        {
            printf("%c", a++);
        }
        a -= 2;
        for(j = 0; j < k/2; j++)
        {
            printf("%c", a--);
        }
        k += 2;
        a = 'A';
        printf("\n");
    }

    return 0;
}
