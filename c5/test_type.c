#include <stdio.h>

int main()
{
    printf("sizeof(int)=%u, sizeof(float)=%u\n", sizeof(int), sizeof(float));
    int i = 7;
    /*
    float f = i;
    printf("i=%d, f=%f\n", i, f);
    printf("i=%#x, f=%#x\n", i, f);
    */
    float f1 = *((float *)(&i));
    printf("i=%d, f1=%f\n", i, f1);
    printf("i=%#x, f1=%#x\n", i, *((float *)(&i)));
    return 0;
}

/*
sizeof(int)=4, sizeof(float)=4
i=7, f=7.000000
i=0x7, f=0x7c2e8638
i=7, f1=0.000000
i=0x7, f1=0x7c2e8638
*/
