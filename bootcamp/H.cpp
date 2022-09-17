/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   H.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhanafi <nhanafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 18:16:25 by nhanafi           #+#    #+#             */
/*   Updated: 2022/09/06 13:57:51 by nhanafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include <algorithm>
#include <vector>
#include <utility>
#include <map>
#include <set>
#include <algorithm>
#include <math.h>
using namespace std;
bool cmp(pair<long long, int>& a, pair<long long, int>& b)
{
    return a.second < b.second;
}

vector<pair<long long, int> > sort(map<long long, int> M, int size)
{
    vector<pair<long long, int> > A;
    for (map<long long,int>::iterator it = M.begin(); it != M.end(); it++) {
        A.push_back(*it);
    }
    sort(A.begin(), A.end(), cmp);
    return A;
}

int main()
{
    set <long long> st;
    map <long long, int> mp;
    long long n, k;
    cin >> n >> k;
    for (long long i = 0; i < n; i++)
    {
        long long a;
        cin >> a;
        mp[a]++;
        st.insert(a);
        
    }
    if(k >= (long long) st.size())
        cout << k - (long long) st.size() << endl;
    else
    {
        vector<pair<long long, int> > arr = sort(mp, (int) st.size());
        int res = 0;
        for (int i = 0; i < arr.size() && i < (long long) st.size() - k; i++)
        {
            res += arr[i].second ;
        }
        cout << res << endl;
    }
    
}