/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhanafi <nhanafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 19:39:36 by nhanafi           #+#    #+#             */
/*   Updated: 2024/01/05 16:29:27 by nhanafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector> 
using namespace std;


int main()
{
    int t; cin >> t;
    while(t--)
    {
        long long n, res = 0, odd = 0;cin >> n;
        for (size_t i = 0; i < n; i++)
        {
            long long a; cin >> a;
            odd += a % 2;
            res += a;
            if (!i)
                cout << res << " ";
            else
                cout << res - odd/3 - (odd % 3 == 1) << " ";
        }
        cout << endl;  
    }
}