/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhanafi <nhanafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 16:51:08 by nhanafi           #+#    #+#             */
/*   Updated: 2022/09/15 17:00:13 by nhanafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <utility>
using namespace std;

long long ft_pow(long long a, long long b, long long n)
{
    if(n == 1)
        return  0;
    if(b == 0)
        return 1 % n;
    long long  p = ft_pow(a, b/2,n) % n;
    if(b % 2)
        return (p * p * (a % n) ) % n;
    return (p * p) % n;   
}

int main()
{
    long long n;
    cin >> n;
    cout << ft_pow(3, n, 1e9 + 7);
}