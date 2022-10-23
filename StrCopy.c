#include <stdio.h>

void StrCopy(char *a, char *b);
void PutStr(char *a);

int main()
{
    char name1[10] = "abcde";
    char name2[10];
    if (sizeof(name1) <= sizeof(name2))
    StrCopy(name1, name2);
    else
    printf("Full copy failed: different length of names\n");
    PutStr(name2);
    return 0;
}

void StrCopy(char *a, char *b)
{
    
    int i = 0;
    while (*(a + i) != '\0')
    {
    *(b + i) = *(a + i);
    i++;
    }
    *(b + i) = *(a + i);
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