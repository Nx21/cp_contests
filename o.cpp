#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <utility>
#include <cmath>
#include <algorithm>
using namespace std;



int findLongestSubsequence(vector <int> arr)
{
    sort(arr.begin(), arr.end());
    int l = 0;
    int r = arr.size() - 1;
    while(l < r)
    {
        if((arr[r] - arr[0]) % 2 == 0)
            return r + 1;
        if((arr[arr.size() - 1] - arr[l]) % 2 == 0)
            return arr.size() - l;
        l++;
        r--;
    }
    return 1;
}

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (size_t i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << findLongestSubsequence(arr) << endl;
}