/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   D.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhanafi <nhanafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 19:39:36 by nhanafi           #+#    #+#             */
/*   Updated: 2024/01/05 16:29:12 by nhanafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector> 
using namespace std;

void f(int n)
{

    while(n--)
    {
        cout << 0;
    }
}

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        if (n == 1)
        {
            cout << 1 << endl;
            continue;
        }
        string s =  "169";
        for (int i = 0; 2 * i <= n - 3; i++)
        {
            int k = n - 3 - 2 * i;
            cout << s[0]; 
            f(i);
            cout << s[1];
            f(i);
            cout << s[2];
            f(k);
            cout << endl;
        }
        s =  "961";
        for (int i = 0; 2 * i <= n - 3; i++)
        {
            int k = n - 3 - 2 * i;
            cout << s[0]; 
            f(i);
            cout << s[1];
            f(i);
            cout << s[2];
            f(k);
            cout << endl;
        }
        cout << "196";
        f(n - 3);
        cout << endl;
    }
}