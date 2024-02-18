#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(int argc, char const *argv[])
{
    int t; cin >> t;
    while(t--)
    {
        long long n; cin >> n;
        for (size_t i = 0; i < n; i++)
        {
            if(i % 2)
                cout << n - i + !(n % 2)<< " ";
            else
                cout << i + 1 << " ";
        }
        cout << endl;
        
    }
    return 0;
}
