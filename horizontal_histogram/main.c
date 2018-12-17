#include <stdio.h>
#include <string.h>

int main()
{
    //hold length of string
    unsigned long length;
    // Holds the name input by user upto 50 characters
    char name[50];
    //iterator for generating dash for bar chart
    int i = 0;
    //iterator for generating dash for bar chart
    int j = 0;
    //take user name input
    printf("input your name [without spaces and < 50 characters] : ");
    scanf("%s", &name[0]);
    //find the length of string
    length = strlen(name);
    printf("length of your name is %lu \n", length);
    //generate dashes for bar chart
    while (i < length)
    {
        printf("--");
        ++i;
    }
    printf("| \n");
    // fill the bar chart with []
    while (j < length)
    {
        printf("[]");
        ++j;
    }
    printf("| \n");
    //generate dashes for bar chart
    while (length > 0)
    {
        printf("--");
        --length;
    }
    printf("| \n");
}