#include <stdio.h>
int main(void)
{
    int x;

    for (x = 2023; x < 2028; ++x) 
        printf("Cette année, %d\n", x);
    printf("x is %d\n", x);
    return 0;
}