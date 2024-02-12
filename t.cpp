#include <iostream>
#include <vector>
using namespace std;
long long mod = 1e9 + 7;
long long ftpow(long long a, long long b)
{
   if(b == 0)
     return 1;
   long long y = ftpow(a , b/2);
   y = (y * y) % mod;
   if(b %2)
       y = (y *a)%mod;
   return y;
}

int main()
{
    int t;cin >> t;
    vector <long long> arr(1e6 + 10, 1);
    for (size_t i = 1; i <= 1e6; i++)
    {
        arr[i] = (i * arr[i - 1]) % mod;
    }
    while (t--)
    {
        long long a, b; cin >> a >> b;
        cout << (((arr[a] * ftpow(arr[b], mod - 2))%mod)* ftpow(arr[a - b], mod - 2))%mod  << endl;
    }
    
}