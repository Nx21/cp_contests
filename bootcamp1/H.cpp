/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   H.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhanafi <nhanafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 14:59:21 by nhanafi           #+#    #+#             */
/*   Updated: 2022/09/10 16:01:24 by nhanafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
using namespace std;

long long ft_pow(long long a, long long b)
{
    if(b == 0)
        return 1;
    long long c = ft_pow(a, b/2) % 2019;
    if(b%2)
        return (c * c * a) % 2019 ;
    return (c*c) % 2019;
}

int main()
{
    string s;
    long long res = 0;
    cin >> s;
    vector <long long> arr(s.size() + 1);
    map <long long, int> mp;
    mp[0] = 1;
    for (int i = s.size() - 1; i >= 0; i--)
    {
        arr[i] = ((s[i] - '0') * ft_pow(10, s.size() - i - 1) + (arr[i + 1])) % 2019;
        res += mp[arr[i]];
        mp[arr[i]]++;
    }
    cout << res << endl;
}