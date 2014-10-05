#include<stdio.h>

void foo()
{
    static int count = 0;
    int array[4];
    int i;
    for(i = 0; i <= 4; i++)
    {
        array[i] -= 4;
    }
    count++;
    printf("count=%d\n", count);
}

int main()
{
    foo();
    return 0;
}
