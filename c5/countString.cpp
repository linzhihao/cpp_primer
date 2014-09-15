#include<iostream>
#include<string>

using namespace std;

int main()
{
    string str;
    string maxStr;
    string prevStr;
    int count = 1;
    int maxCount = 1;
    while(cin >> str)
    {
        if(str == prevStr)
        {
            count++;
        }
        else
        {
            if(count > maxCount)
            {
                maxCount = count;
                maxStr = prevStr;
            }
            prevStr = str;
            count = 1;
        }
    }
    cout << maxStr << endl;
    cout << maxCount << endl;
    return 0;
}
