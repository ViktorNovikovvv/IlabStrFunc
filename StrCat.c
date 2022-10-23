#include <stdio.h>
#define SIZE_1 10
#define SIZE_2 3

char *StrCat(char *a, char *b);
void PutStr(char *a);

int main()
{
    char name1[SIZE_1] = "abcde";
    char name2[SIZE_2] = "fg";
    StrCat(name1, name2);
    PutStr(name1);
    return 0;
}

char *StrCat(char *a, char *b)
{
    int i = 0;
    while (*(a + i) != '\0')
    i++;

    if (i + 1 <= SIZE_1 - SIZE_2)
    {
    int n = 0;
    while (*(b + n) != '\0')
    {
        *(a + i + n) = *(b + n);
        n++;
    }
    *(a + i + n) = *(b + n);

    return a;
    }
    else
    { 
    printf("Too little place for copy second part");
    return NULL;
    }
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