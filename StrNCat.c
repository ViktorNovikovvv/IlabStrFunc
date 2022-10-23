#include <stdio.h>

char * StrNCat(char *s1, const char *s2, int NumbOfCopySymbols);
void PutStr(char *a);

int main()
{
    char name1[10] = "abcde";
    const char name2[4] = "fgh";
    StrNCat(name1, name2, 2);
    PutStr(name1);
    return 0;
}

char * StrNCat(char *s1, const char *s2, int NumbOfCopySymbols)
{
    int n = 0;
    int k = 0;

    while(*(s1 + n) != '\0')
    n++;

    while(k < NumbOfCopySymbols)
    {
        *(s1 + n + k) = *(s2 + k);
        k++;
    }

return s1;
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