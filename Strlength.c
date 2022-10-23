#include <stdio.h>

int StrLength(char * a);

int main()
{
    int a = 0;
    char name[20] = "abcde";
    a = StrLength(name);
    printf("%d", a);
    return 0;
}

int StrLength(char * a)
{
    int i = 0;
    while(*(a+i) != '\0')
    i++;
    return i+1;

}