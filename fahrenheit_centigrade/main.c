#include <stdio.h>
#define START 0
#define STOP 300
#define STEP 20 /*step size*/

/* Print Fahrienheit to centigrade table 0 to 300 */
int main()
{
    float fahr, celsius;

    fahr = START;
    while (fahr <= STOP)
    {
        celsius = 5 * (fahr - 32) / 9;
        printf("Temp in Fahrienheit \t Celcius\n");
        printf("\t %3.0f \t\t %3.0f \n", fahr, celsius);
        fahr = fahr + STEP;
    }

    // Print in reverse
    printf("###################### In Reverse\n");
    fahr = STOP;
    while (fahr >= START)
    {
        celsius = 5 * (fahr - 32) / 9;

        printf("Temp in Fahrienheit \t Celcius\n");
        printf("\t %3.0f \t\t %3.0f \n", fahr, celsius);
        fahr = fahr - STEP;
    }
}