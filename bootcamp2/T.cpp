/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   T.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhanafi <nhanafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 15:56:44 by nhanafi           #+#    #+#             */
/*   Updated: 2022/09/23 00:20:47 by nhanafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <utility>
using namespace std;


int main()
{
    int n,res = 0;
    cin >> n;
    set <pair<int , int> > st;
    for (int i = 0; i < n; i++)
    {
        vector <int> arr;
        for (int j = 0; j < n; j++)
        {
            int a;
            cin >> a;
            if(a)
            {
                if(i < j)
                    st.insert(pair(i,j));
                else
                    st.insert(pair(j,i));
            }
        }
    }
    
    for (set <pair<int , int> >::iterator it = st.begin(); it != st.end() ; it++)
    {
        cout << it->first + 1 << " " << it->second + 1 << endl;
    }
}