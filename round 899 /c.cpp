#include <iostream>
#include <vector>
using namespace std;


int main()
{
    int t;cin >> t;
    while(t--)
    {
        int n; cin >> n;
        vector <long long> arr(n);
        for (size_t i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        
        int j = n;
        long long res = 0;
        for (int i = n - 1; i >= 0; i--)
        {
            if (i%2)
                continue;
            if (arr[i] > 0)
            {
                res += arr[i];
                arr[i] = 0;
                if (i + 1 < n && arr[i + 1] > 0)
                {
                    res += arr[i + 1];
                    arr[i + 1] = 0;
                }
                j = i;
            }
        }
        int m = 0;
        for (int i = j - 1; i >= 0; i--)
        {
            if (i%2 == 0)
                continue;
            if (i + 2 < j)
                arr[i] = max(arr[i + 2], max(arr[i],arr[i] + arr[i + 2]));
            if (i != 1 && m < arr[i])
                m = arr[i];
            if (arr[i] + arr[i - 1] > m)
                m = arr[i] + arr[i - 1];
        }

        cout << res + m << endl;
        
    }
}