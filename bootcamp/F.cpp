/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   F.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhanafi <nhanafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 15:03:41 by nhanafi           #+#    #+#             */
/*   Updated: 2022/09/08 18:36:12 by nhanafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

int main()
{
    set <string> st;
    string s;
    
    long long n;
    while(cin >> s)
    {
        int j = 0;
        int i;
        for (i = 0; s[i]; i++)
        {
            if (s[i] >= 'A' && s[i] <= 'Z') s[i]= s[i] - 'A' + 'a';
            if(!(s[i] >= 'a' && s[i] <= 'z'))
            {
                if(i != j)
                    st.insert(s.substr(j, i - j));
                j = i + 1;
            }
        }
        if(i != j)
            st.insert(s.substr(j, i - j));
    }
    for(set<string>::iterator it = st.begin() ; it != st.end() ; it++)
        cout << *it << "\n";
}