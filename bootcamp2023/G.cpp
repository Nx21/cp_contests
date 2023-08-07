/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   G.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhanafi <nhanafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 12:25:03 by nhanafi           #+#    #+#             */
/*   Updated: 2023/08/07 14:31:03 by nhanafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main()
{
    long long n,x;cin >> n >> x;
    vector <long long> arr(n);
    map <long long, long long> mp;
    for (size_t i = 0; i < n; i++)
    {
        cin >> arr[i];
        if(mp[x - arr[i]])
        {
            cout << mp[x - arr[i]] << " " << i + 1<< endl;
            return 0;
        }
        mp[arr[i]] = i + 1;
    }
    cout << "IMPOSSIBLE" << endl;
}