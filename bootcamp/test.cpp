
#include <iostream>
#include <algorithm>
#include <vector>
#include <utility>
#include <map>
#include <set>
#include <algorithm>
#include <math.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector <int> arr(n + 1,1);
    for (int i = 3; i <= n; i++)
    {
        if(i % 2)
            // cout << i << " :  " << 6 * (i/7) << "   " << 2 * (i/3) << endl;
            arr[i] = arr[6 * i/7] + arr[2 * i /3];
        else
            // cout << i << " :  " << 6 * (i/7) << "   " << 2 * (i/3) << endl;
            arr[i] = arr[i - 1] + arr[i - 3];
    }
    // for (int i = 0; i < n; i++)
    // {
    //     if(i%2)
    //     else
    //         cout << i << "  :  "  <<arr[i] << " :  " << - 1<< "   " << - 3 << endl;
    // }
    cout << n << "  :  "  <<arr[n] << " :  " << (6 * n/7) - n << "   " << (2 * n/3) - n << endl;
    
    
}