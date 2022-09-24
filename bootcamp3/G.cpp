/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   G.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhanafi <nhanafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 16:51:08 by nhanafi           #+#    #+#             */
/*   Updated: 2022/09/24 05:47:28 by nhanafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <utility>
using namespace std;
const long long mod = (long long)1e7;
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
    long long t;
    cin >> t;
    while(t--)
    {
        long long a,b,c;
        cin >> a >> b >> c;
        b = ft_pow(b % mod, c, mod);
        a = ft_pow(a % mod, b, mod);
        cout << a << endl;
    }
}