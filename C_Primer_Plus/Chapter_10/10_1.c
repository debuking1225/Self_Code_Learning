#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

#define MONTHS 12
#define YEARS 5

int main(void)
{
    const float rain[YEARS][MONTHS] = 
    {
        {4.3, 4.3, 4.3, 3.0, 2.0, 1.2, 0.2, 0.2, 0.4, 2.4, 3.5, 6.6},
        {8.5, 8.2, 1.2, 1.6, 2.4, 0.0, 0.0, 0.0, 0.4, 0.8, 6.1, 8.4},
        {9.1, 8.5, 6.7, 4.3, 2.1, 0.8, 0.2, 0.2, 1.1, 2.3, 6.1, 8.3},
        {7.2, 9.9, 8.4, 3.3, 1.2, 0.8, 0.4, 0.0, 0.6, 1.7, 4.3, 6.2},
        {7.6, 5.6, 3.8, 2.8, 3.8, 0.2, 0.0, 0.0, 0.0, 1.3, 4.6, 6.1}
    };
    
    int year, month;

    float subtot, total;

    printf("YEAR RAINFALL  (inches)\n");
    for (year = 0, total = 0; year < YEARS; year++)
    {
        for (month = 0, subtot = 0; month < MONTHS; month++)
        {
            subtot += *(*(rain + year) + month);
        }
        printf("%d %g\n", 2010 + year, subtot);
        total += subtot;
    }
    printf("\nThe yearly average is %.1f inches.\n\n", total / YEARS);
    printf("MONTHLY AVERAGES:\n\n");
    printf(" Jan  Feb  Mar  Apr  May  Jun  Jul  Aug  Sep  Oct  Nov  Dec\n");

    for (month = 0; month < MONTHS; month++)
    {
        for (year = 0, subtot = 0; year < YEARS; year++)
        {
            subtot += *(*(rain + year) + month);
        }
        printf("%4.1f ", subtot / YEARS);
    }
    printf("\n");

    return 0;   
}
