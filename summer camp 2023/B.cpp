/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasreddine <nasreddine@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 22:12:01 by nhanafi           #+#    #+#             */
/*   Updated: 2023/07/23 23:19:43 by nasreddine       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>
#include <iomanip>
#include <map>
using namespace std;

int main()
{
    long  long m,n;
    cin >> n >> m;
    if(m == 0 && n == 1)
    {
        cout << "0 0" << endl;
        return 0;
    }
    if(m < 1 || m > n *9)
    {
        cout << "-1 -1" << endl;
        return 0;
    }
    vector<int> v(n, 0);
    long long mm = m - 1;
    for (size_t i = 0; i < n; i++)
    {
        v[i] += min(9ll, mm);
        mm -= min(9ll, mm);
    }
    v[n - 1] += 1;
    for (size_t i = 0; i < n; i++)
        cout << v[n - 1 - i];
    cout << " ";
    for (size_t i = 0; i < n; i++)
    {
        cout << min(9ll, m);
        m -= min(9ll , m);
    }
}