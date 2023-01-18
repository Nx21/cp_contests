/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Coin_Piles.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhanafi <nhanafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 19:42:45 by nhanafi           #+#    #+#             */
/*   Updated: 2023/01/18 21:00:59 by nhanafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

int f(long long x, long long y)
{
    if (x == y)
        return x % 3 == 0;
    if (y > x)
        return f(y, x);
    long long res = (x - y);
    x -= 2*res;
    y -= res;
    if (x < 0 ||  y < 0)
        return 0;
    return f(y,x);
}


int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long x,y;
        cin >> x >> y;
        if (f(x,y))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    
}