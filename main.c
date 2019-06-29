#include <stdio.h>
#include <stdint.h>


void DecToGray(uint32_t cycles, uint32_t number)
{
    uint32_t gray=0, x=0, y=0;
    x = number / 2;
    gray = number^x;

    for (uint32_t i=cycles ; i>0 ; --i)
    {
        if(gray&(1 << (i-1)))
        y=1;
        printf("%d", y);
        y=0;
    }
    printf("\n");
}


int main()
{
    uint32_t cycles, number;
    scanf("%d", &cycles);
    scanf("%d", &number);
    DecToGray(cycles,number);
    return 0;
}
