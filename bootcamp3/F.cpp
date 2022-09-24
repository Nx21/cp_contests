/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   F.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhanafi <nhanafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 16:51:08 by nhanafi           #+#    #+#             */
/*   Updated: 2022/09/24 05:40:10 by nhanafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <utility>
using namespace std;
const long long mod = (long long)10000007;
long long ft_pow(long long a, long long b, long long n)
{
    if(b == 0)
        return 1;
    long long  p = ft_pow(a, b/2,n) % n;
    if(b % 2)
        return ((((p % n) * (p % n)) % n) * (a % n) ) % n;
    return ((p % n) * (p % n)) % n;   
}

int main()
{
    long long n, k;
    while(cin >> n >> k)
    {
        if(!n && !k)
            return 0;
        long long a = (2 * ft_pow(n - 1, k, mod)) % mod;
        long long b = (2 * ft_pow(n - 1, n - 1, mod)) % mod;
        long long c = ft_pow(n % mod, n, mod) % mod;
        long long d = ft_pow(n % mod, k, mod) % mod;
        a = ((a + b) % mod + (c + d) % mod) % mod;
        cout << a << "\n";
    }
}