/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   N.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhanafi <nhanafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 12:25:03 by nhanafi           #+#    #+#             */
/*   Updated: 2023/08/11 10:43:28 by nhanafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main()
{
    long long m = 1e7;
    vector<int> arr(m + 1);
    arr[0] = 1;
    arr[1] = 1;
    for (long long i = 2; i <= m; i++)
    {
        if (!arr[i])
        {
            for (long long j = i * i; j <= m; j += i)
            {
                arr[j] = 1;
            }
        }
    }
    int n; cin >> n;
    while (n--)
    {
        long long a;
        cin >> a;
        long long x = sqrt(a);
        if(x*x==a && !arr[x])
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}