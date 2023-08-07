/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   F.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhanafi <nhanafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 12:25:03 by nhanafi           #+#    #+#             */
/*   Updated: 2023/08/07 14:17:21 by nhanafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <map>
using namespace std;

int main()
{
    int t; cin >> t;
    map <string, int> mp;
    while(t--)
    {
        string s; cin >> s;
        mp[s]++;
    }
    int max = 0;
    string s;
    for (auto c: mp)
    {
        if(max <= c.second)
        {
            max = c.second;
            s = c.first;
        }
    }
    cout << s << " " << max << endl;
}