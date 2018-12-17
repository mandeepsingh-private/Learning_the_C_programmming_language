#include <stdio.h>

int main()
{
    long c, nc, nl, nt, nbs;
    nc = 0;
    nl = 0;
    nt = 0;
    nbs = 0;
    while ((c = getchar()) != EOF)
    {
        if (c != '\t' || c != '\n' || c != ' ')
        {
            ++nc;
        }

        if (c == '\t')
        {
            ++nt;
        }

        if (c == '\n')
        {
            ++nl;
        }

        if (c == ' ')
        {
            ++nbs;
        }
        printf("Number of characters = %ld, tabs = %ld, new lines = %ld, blanks = %ld \n", nc, nt, nl, nbs);
    }
}