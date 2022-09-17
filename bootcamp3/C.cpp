/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhanafi <nhanafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 16:51:08 by nhanafi           #+#    #+#             */
/*   Updated: 2022/09/15 17:06:18 by nhanafi          ###   ########.fr       */
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
    long long n;
    set <long long> st;
    long long a;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        st.insert(a);
    }
    int m;
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        cin >> a;
        if(st.find(a) != st.end())
            cout << "YES\n";
        else
            cout << "NO\n";
    } 
}