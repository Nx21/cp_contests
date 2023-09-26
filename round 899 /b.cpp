#include <iostream>
#include <vector>
#include <set>
#include <map>
using namespace std;

int issubset(set<long long> &a, set<long long> &b)
{
    for (auto i: b)
    {
        if (a.find(i) == a.end())
            return 0;
    }
    return 1;
}

int main()
{
    int t;cin >> t;
    while(t--)
    {
        int n; cin >> n;
        vector <set<long long> > arr(n);
        map <long long, set<long long> > m;
        for (size_t i = 0; i < n; i++)
        {
            int k;cin >> k;
            while(k--)
            {
                int a; cin >> a;
                arr[i].insert(a);
                m[a].insert(i);
            }
        }
        // for (auto &a: m)
        // {
        //     cout << a.first << ": ";
        //     for(auto i: a.second)
        //         cout << i << " ";
        //     cout << endl;
        // }
        int ma = m.size();
        // cout << ma << endl;
        for (auto &a: m)
        {
            int res = 0;
            for(auto &b: m)
            {
                res += issubset(a.second, b.second);
            }
            // cout << a.first << ": " << res << endl;
            ma = min(ma, res);
        }
        cout << m.size() - ma << endl;
        
        
        
    }
}