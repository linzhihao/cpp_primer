void foo()
{
    static int count = 0;
    int i;
    int array[4];
    for(i = 0; i <= 4; i++);
    {
        array[i] = 0;
    }
    count++;
    printf("count=%d\n", count);
}

int main()
{
    foo();
    return 0;
}
