/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   I.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhanafi <nhanafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 12:25:03 by nhanafi           #+#    #+#             */
/*   Updated: 2023/08/11 09:23:56 by nhanafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
using namespace std;

int gcd(int a, int b)
{
    return b == 0 ? a : gcd(b, a % b);   
}

int main()
{
    long long n;
    cin >> n;
    long long res;cin >> res;
    for (size_t i = 1; i < n; i++)
    {
        long long a;cin >> a;
        res = gcd(res, a);
    }
    cout << res;
}