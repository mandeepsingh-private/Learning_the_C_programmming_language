#include <stdio.h>
#define IN 1
#define OUT 0
// COunt number of words in input text
int main()
{
    int c, nw, state;
    c = 0;
    nw = 0;
    state = OUT;
    while ((c = getchar()) != EOF)
    {
        if (c == '\t' || c == '\n' || c == ' ')
        {
            state = OUT;
        }
        else if (state == OUT)
        {
            state = IN;
            ++nw;
            printf("Number of words %d\n", nw);
        }
    }
}