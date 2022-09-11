/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   D.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhanafi <nhanafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 09:55:59 by nhanafi           #+#    #+#             */
/*   Updated: 2022/09/11 11:40:02 by nhanafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
using namespace std;

void f(string s, int n)
{
    long long res = 0;
    vector <long long> arr(n + 1);
    vector <long long> sum(n + 1);
    map <long long, int> mp;
    mp[0] = 1;
    for (int i = 1; i <= n; i++)
    {
        arr[i] = s[i - 1] - '0' + arr[i - 1];
        sum[i] = arr[i] - i;
        res += mp[sum[i]];
        mp[sum[i]]++;
    }
    cout << res << endl;
}

int main()
{
    int t;
    cin >>t;
    while(t--)
    {
        int n;
        string s;
        cin >> n >> s;
        f(s, n);
    }
}