#include <stdio.h>

void PutStr(char *a);
char  *fGets(char *a, int n, FILE *stdin);


int main()
{
    char name1[5];
    fGets(name1,5,stdin);
    PutStr(name1);

}

char  *fGets(char *a, int n, FILE *stdin)
{
    while (f)
    int NumbOfSymbols = 0;
    while (*(stdin + NumbOfSymbols) != '\0' && NumbOfSymbols < n - 1)
    {
        *(a + NumbOfSymbols) = *(stdin + NumbOfSymbols);
        NumbOfSymbols++;
    }
    *(a + NumbOfSymbols) = '\0';
    return a;
}

void PutStr(char *a)
{
    int i = 0;
    while (*(a + i) != '\0')
    {
    printf("%c", *(a + i));
    i++;
    }
    printf("%c", *(a + i));
    printf("\n");
}