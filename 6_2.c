#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j;
    char znak='$';
    for(i=1;i<=5;i++)
    {
        for(j=i;j>=1;j--)
        {
            printf("%c",znak);
        }
        printf("\n");
    }
    return 0;
}
