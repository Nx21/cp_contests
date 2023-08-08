/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhanafi <nhanafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 12:25:03 by nhanafi           #+#    #+#             */
/*   Updated: 2023/08/08 15:03:12 by nhanafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main()
{
    long long n, q, res = 0; cin >> n >> q;
    vector <long long> arr(n + 1);
    map <long long, long long> mp;
    mp[0] = 1;
    for (size_t i = 1; i <= n; i++)
    {
        cin >> arr[i];
        arr[i] += arr[i -1];
        // cout << arr[i] << ' ';
        if(mp.find(arr[i] - q) != mp.end())
        {
            res += mp[arr[i] - q];
        }
        mp[arr[i]]++;
    }
    cout << res << endl;
}