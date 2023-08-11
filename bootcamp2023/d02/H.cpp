/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   H.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhanafi <nhanafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 12:25:03 by nhanafi           #+#    #+#             */
/*   Updated: 2023/08/11 09:09:48 by nhanafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    long long res1 = 1,res2 = 1;
    long long mod = 998244353;
    for (size_t i = 0; i < 3; i++)
    {
        long long a;cin >> a;
        a %= mod;
        res1 = (res1 * a) % mod;
    }
    for (size_t i = 0; i < 3; i++)
    {
        long long a;cin >> a;
        a %= mod;
        res2 = (res2 * a) % mod;
    }
    res1 = (mod + (res1 - res2)%mod)%mod;
    cout << res1;
}