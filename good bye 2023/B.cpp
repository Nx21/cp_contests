/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhanafi <nhanafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 19:39:36 by nhanafi           #+#    #+#             */
/*   Updated: 2024/01/05 16:29:46 by nhanafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector> 
using namespace std;

long long gcd(long long a, long long b)
{
    return b == 0 ? a : gcd(b, a % b);
}

int main()
{
    int t; cin >> t;
    while(t--)
    {
        long long a, b;
        cin >> a >> b;
        long long n = a * b / gcd(a, b);
        if (n == b)
            n *= a == 1 ? b : min(a, b/gcd(a, b));
        cout << n << endl;
    }
}