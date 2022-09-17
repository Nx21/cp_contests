/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   I.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhanafi <nhanafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 14:42:15 by nhanafi           #+#    #+#             */
/*   Updated: 2022/09/06 14:42:16 by nhanafi          ###   ########.fr       */
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
    multiset <long long> st;
    int n, k;
    cin >> n >> k;
    for (int i = 0; i < n; i++)
    {
        long long t;
        cin >> t;
        if(st.size() < k)
            st.insert(t);
        else
        {
            long long a = *st.begin();
            st.insert(a + t);
            st.erase(st.begin());
        }
    }
    cout << *prev(st.end()) << endl;
}