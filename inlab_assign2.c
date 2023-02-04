/******************************************************************************

HANDS-ON LAB #1: Basic C
In-lab Assignment #2

*******************************************************************************/
#include <stdio.h>

void main()
{
    int     int_num;
    float   flt_mean;
    
    printf("Enter integer 1: ");
    scanf("%d", &int_num);
    flt_mean += (float)int_num;
    
    printf("Enter integer 2: ");
    scanf("%d", &int_num);
    flt_mean += (float)int_num;
    
    printf("Enter integer 3: ");
    scanf("%d", &int_num);
    flt_mean += (float)int_num;
    
    printf("Enter integer 4: ");
    scanf("%d", &int_num);
    flt_mean += (float)int_num;
    
    printf("Enter integer 5: ");
    scanf("%d", &int_num);
    flt_mean += (float)int_num;
    
    
    flt_mean = flt_mean / (float)5;
    printf("The mean of all 5 numbers is: %.2f", flt_mean);


}
