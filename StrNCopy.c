#include <stdio.h>

void StrNCopy(char *a, char *b, int n);
void PutStr(char *a);

int main()
{
    int Number = 4;
    char name1[10] = "abcde";
    char name2[10];
    if (Number <= sizeof(name1) && Number <= sizeof(name2) && sizeof(name1) <= sizeof(name2))
    StrNCopy(name1, name2, Number);
    else
    printf("Full copy failed: number of elements more, than limit\n");

    PutStr(name2);
    return 0;
}

void StrNCopy(char *a, char *b, int n)
{
    int i = 0;
    while(i < n)
    {
    *(b + i) = *(a + i);
    i++;
    }
    *(b + i) = '\0';
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