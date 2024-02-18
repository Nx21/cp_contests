#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(int argc, char const *argv[])
{
    int t; cin >> t;
    while(t--)
    {
        long long n, res = 0; cin >> n;
        vector<long long> vec(2*n);
        for (size_t i = 0; i < 2*n; i++)
            cin >> vec[i];
        sort(vec.begin(), vec.end());
        for (size_t i = 0; i < 2*n; i+=2)
        {
            res += vec[i];
        }
        cout << res << endl;
    }
    return 0;
}
