#include <iostream>

using namespace std;

int reused = 42;
int main()
{
    /*
    unsigned int a = -1;
    int b = {1};
    int _;
    std::cout << a * b << std::endl; */

    int unique = 0;
    cout << unique << " " << reused << endl;
    int reused = 1;
    cout << unique << " " << reused << endl;
    cout << ::reused << " " << reused << endl;
    return 0;
}
