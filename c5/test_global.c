void initArray()
{
    int array[100];
    int i;
    for(i = 0; i < 100; i++)
    {
        array[i] = i;
    }
}

void printArray()
{   
    int array[100];
    int i;
    for(i = 0; i < 100; i++)
    {
        printf("array[%d]=%d\n", i, array[i]);
    }
}

int main()
{
    initArray();
    printArray();
    return 0;
}
