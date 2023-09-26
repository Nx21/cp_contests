/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   e.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhanafi <nhanafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 14:46:21 by nhanafi           #+#    #+#             */
/*   Updated: 2023/08/31 16:52:27 by nhanafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdlib.h>
#include <stdio.h> 
#include <vector>
#include <set>
#include <stack>
#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>
#include <utility>

using namespace std;
// #define mod 998244353

// long long Pow(long long a, long long b)
// {
//     if (b == 0)
//         return 1;
//     else if (b % 2 == 0)
//     {
//         long long y = Pow(a, b / 2);
//         return ((y * y) % mod);
//     }
//     else
//         return ((a * Pow(a, b - 1)) % mod);
// }

void f()
{
    string s;
    cin >> s;
    vector <char> vec(s.size());
    int v = 0;
    int z = 0;
    int j = 0;
    for (size_t i = 0; s[i]; i++)
    {
        if (s[i] == '+')
        {
            vec[j] = 1;
            j++;
        }
        else if (s[i] == '-')
        {
            j--;
            if(vec[j] == 0)
                z--;
            if (v > j)
                v = j;
        }
        else if (s[i] == '1')
        {
            if (z)
            {
                cout << "NO\n";
                return ;
            }
            v = j;
            z = 0;
        }
        else
        {
            if (v == j || j < 2)
            {
                cout << "NO\n";
                return ;
            }
            z++;
            vec[j] = 0;
            j++;
        }
    }
    cout << "YES\n";
}


int main()
{
    int t; cin >> t;
    while (t--)
    {
        f();
    }
    
    
}