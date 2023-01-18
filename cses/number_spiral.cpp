/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   number_spiral.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhanafi <nhanafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 19:24:15 by nhanafi           #+#    #+#             */
/*   Updated: 2023/01/18 19:37:55 by nhanafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long x,y;
        cin >> x >> y;
        long long max = x;
        if (y > x)
            max = y;
        long long res = 1 + (max * (max - 1));
        // cout << res << endl;
        if (y > x)
        {
            if (max % 2 == 0)
                res += x - y;
            else
                res -= x - y;   
        }
        else
        {
            if (max % 2 == 0)
                res -= y - x;
            else
                res += y - x;
        }
        cout << res << endl;
    }
    
}