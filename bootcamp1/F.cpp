/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   F.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhanafi <nhanafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 09:27:29 by nhanafi           #+#    #+#             */
/*   Updated: 2022/09/10 15:26:03 by nhanafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
using namespace std;

int main()
{
    int n;
    long long x, res = 0;
    cin >> n;
    vector <long long> arr(n + 1);
    map <long long, int> mp;
    mp[0] = 1;
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
        arr[i] += arr[i - 1];
        res += mp[((arr[i] % n) + n) % n];
        mp[((arr[i] % n) + n) % n]++;
    }
    cout << res << endl;
}