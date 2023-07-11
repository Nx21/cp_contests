#include <iostream>
#include <vector>
#include <map>
using namespace std;

long long f(long long n)
{
    long long k = 1e14;
    long long res = 0;
    if (n < 4)
        return 0;
    while(n >= 4)
    {
        while(k >= 10)
        {
            res += n/k + (((n%k) * 10 / k) >= 4);
            n = n % (4 * k/10);
            k/=10;
        }
    }
    return res;
}

int main()
{
    
    int t;cin >> t;
    while(t--)
    {
        long long n, k;
        cin >> n >> k;
        map<long long, long long>m;
        for (size_t i = 0; i < n; i++)
        {
            long long tmp;cin >> tmp;
            m[tmp]++;
        }
        
    }
}