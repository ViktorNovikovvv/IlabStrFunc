#include <stdio.h>

void PutStr(char *a);

int main()
{
    char name[10] = "abcde";
    PutStr(name);
    return 0; 
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