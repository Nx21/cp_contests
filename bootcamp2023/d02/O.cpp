/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   O.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhanafi <nhanafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 10:58:17 by nhanafi           #+#    #+#             */
/*   Updated: 2023/08/11 11:06:56 by nhanafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

long long mod = 1000000007;

long long Pow(long long a, long long b)
{
    if (b == 0)
        return 1;
    else if (b % 2 == 0)
    {
        long long y = Pow(a, b / 2);
        return ((y * y) % mod);
    }
    else
        return ((a * Pow(a, b - 1)) % mod);
}

long long dive(long long a, long long b)
{
    return ((a%mod) * Pow(b, mod -2))% mod;   
}


int main()
{
    long long n,m;
    cin >> n >> m;
    vector <long long> arr(n + 1, 1);
    for (size_t i = 1; i <= n; i++)
    {
        cin >> arr[i];
        arr[i] = arr[i]% mod;
        arr[i] = (arr[i] * arr[i - 1])% mod;
    }
    while(m--)
    {
        long long a,b;
        cin >> a >> b;
        cout << dive(arr[b], arr[a - 1]) << endl;
    }
}