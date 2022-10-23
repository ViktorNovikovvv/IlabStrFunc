#include <stdio.h>

char *StrChar(char *a, int n);

int main()
{
    char *b;
    char name[10] = "abcde";
     b = StrChar(name , 'c');
    printf("%d", b);
    return 0;
}

char *StrChar(char *a, int n)
{   
    int i = 0;
    while(*(a + i) != '\n' && *(a + i) != '\0' && *(a + i) != n)
    i++;
    if (*(a+i) == n)
    {
    printf("%d", a);
    return a;
    }
    else 
    return NULL;   
}