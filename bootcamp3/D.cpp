/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   D.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhanafi <nhanafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 16:00:50 by nhanafi           #+#    #+#             */
/*   Updated: 2022/09/24 01:31:32 by nhanafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <utility>
using namespace std;

int f(int a, int b, int c, int n)
{
    if(!a && !b && !c)
        return 1;
    if(!a || !b || !c)
        return 0;
    if(a == 1 && b == 1 && c == 1 && n == 6)
        return 1;
    if(a == 1 && b == 1 && c == 1 && n != 6)
        return 0;
    if(a < b)
        return f(b, a, c,n);
    if(a < c)
        return f(c, b, a,n);
    if(b < c)
        return f(a, c, b,n);
    if(a != b)
    {
        n += a - b;
        a = b;
        b = b - n/7;
        c = c - n/7;
        return f(a,b,c, n % 7);
    }
    else if(b != c)
    {
        n += b - c;
        b = c;
        a = a - n/7;
        c = c - n/7;
        return f(a,b,c, n % 7);
    }
    else
    {
        n += c - 1;
        c = 1;
        a = a - n/7;
        b = b - n/7;
        return f(a,b,c, n % 7);
    }
    return 1;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long a,b,c;
        cin >> a >> b >> c;
        cout << (f(a,b,c, 0) ? "YES\n" : "NO\n");
    }
     
}