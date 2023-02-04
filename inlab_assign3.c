/******************************************************************************

HANDS-ON LAB #1: Basic C
In-lab Assignment #3

*******************************************************************************/
#include <stdio.h>

void main()
{
    int int_num;
    int int_rev;
    int int_rem;

    printf("Enter an integer number with 3 digits: ");
    scanf("%d", &int_num);

    while (int_num != 0) {
        int_rem = int_num % 10;
        int_rev = int_rev * 10 + int_rem;
        int_num = int_num / 10;
    }

    printf("Number backwards: %d", int_rev);


}
