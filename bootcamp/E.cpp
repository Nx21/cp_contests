/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   E.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhanafi <nhanafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 13:37:28 by nhanafi           #+#    #+#             */
/*   Updated: 2022/09/05 15:01:50 by nhanafi          ###   ########.fr       */
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
    set <long long> st;
    map <long long, int> mp;
    int n;
    while(1)
    {
        cin >> n;
        if(n == 0)
            return 0;
        if(n == 1)
        {
           long long k,p;
           cin >> k >> p;
           mp[p] = k;
           st.insert(p);
        }
        if(n == 3)
        {
            if(st.size() == 0)
                cout << 0 << "\n";
            else
            {
                cout << mp[*st.begin()]  << "\n";
                st.erase(*st.begin());
            }
        }
        if(n == 2)
        {
            if(st.size() == 0)
                cout << 0 << "\n";
            else
            {
                cout << mp[*prev(st.end())]  << "\n";
                st.erase(*prev(st.end()));
            }
        }
    }
}