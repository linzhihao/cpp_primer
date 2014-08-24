#include<iostream>
int main()
{
    int i = 0, &r1 = i;
    double d = 0, & r2 = d;
    r2 = 3.14;
    r2 = r1;
    i = r2;
    r1 = d;
    int j, &rj = j;
    j = 5;
    rj = 10;
    std::cout << j << " " << rj << std::endl;
    return 0;
}
