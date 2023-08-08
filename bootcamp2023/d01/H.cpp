/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   H.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhanafi <nhanafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 12:25:03 by nhanafi           #+#    #+#             */
/*   Updated: 2023/08/08 16:08:20 by nhanafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
using namespace std;

void f()
{
    int n; cin >> n;
    char k; cin >> k;
    string s; cin >> s;
    for (auto c: s)
    {
        if(c < k)
        {
            cout << k;
            k = 0;
        }
        cout << c;
    }
    if(k)
        cout << k;
    cout << endl;
}

int main()
{
    int t; cin >> t;
    while (t--)
    {
        f();
    }
    
}