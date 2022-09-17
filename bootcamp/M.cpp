/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   M.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhanafi <nhanafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 17:13:07 by nhanafi           #+#    #+#             */
/*   Updated: 2022/09/07 17:25:20 by nhanafi          ###   ########.fr       */
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
#include <iterator>
using namespace std;

int main()
{
    int n,res = 0;
    cin >> n;
    set <long long> st;
    map <long long, int> mp;
    for (int i = 0; i < n; i++)
    {
        long long a;
        cin >> a;
        if(a > n)
            res++;
        else
        {
            st.insert(a);
            mp[a]++;
        }
    }
    for (set<long long>::iterator it = st.begin(); it != st.end(); it++)
    {
        if(*it > mp[*it])
            res += mp[*it];
        else if(*it < mp[*it])
            res += mp[*it] - *it;
    }
    cout << res;
    
}