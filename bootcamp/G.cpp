/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   G.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhanafi <nhanafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 13:37:28 by nhanafi           #+#    #+#             */
/*   Updated: 2022/09/05 18:00:34 by nhanafi          ###   ########.fr       */
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
    map <string, int> mp;
    set <string> st;
    int n, max = 0;
    cin >> n;
    string str = "";
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >>  s;
        if(st.find(s) == st.end())
            mp[s] = 0;
        mp[s]++;
        st.insert(s);
        if(mp[s] == max && s > str)
            str = s;
        if(mp[s] >  max)
        {
            max = mp[s];
            str = s;
        }
    }
    cout << str << " " << max <<endl;
    // for(set<string>::iterator it = prev(st.end()) ; it != prev(st.begin()) ; it--)
    //     if(mp[*it] == max)
    //     {
    //         cout << *it << " " << max <<endl;
    //         break;
    //     }
}
