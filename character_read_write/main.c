#include <stdio.h>
//Ctrl + c or CTRL + d EOF
int main()
{
    int c;
    c = getchar();
    while (c != EOF)
    {
        putchar(c);
        c = getchar();
        }
}