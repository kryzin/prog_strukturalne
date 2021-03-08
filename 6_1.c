#include <stdio.h>
#include <stdlib.h>

int main()
{
    char litery[26];
    int i;
    srand(time(NULL));
    for(i=0; i<26; i++)
    {
        litery[i]=rand()%(122-97) + 97;
    }
    for(i=0;i<26;i++)
    {
        printf("%c\t",litery[i]);
    }
    return 0;
}
