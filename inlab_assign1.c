/******************************************************************************

HANDS-ON LAB #1: Basic C
In-lab Assignment #1

*******************************************************************************/
#include <stdio.h>

void main()
{
    int     int_hh;
    int     int_mm;
    float   flt_ss;
    
    printf("Enter hours: ");
    scanf("%d", &int_hh);
    
    printf("Enter minutes: ");
    scanf("%d", &int_mm);
    
    printf("Enter seconds: ");
    scanf("%f", &flt_ss);

    printf("The entered time is: %d hours %d minutes %f seconds", int_hh, int_mm, flt_ss);


}
