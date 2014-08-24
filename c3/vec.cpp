#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int> vi;
    for(int i = 0; i < 10; i++)
    {
        vi.push_back(i);
    }
    for(auto it = vi.begin(); it != vi.end(); ++it)
    {
        *it *= 2;
    }
    for(auto c : vi)
        cout << c << endl;
    return 0;
}
