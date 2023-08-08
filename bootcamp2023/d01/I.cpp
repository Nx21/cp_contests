/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   I.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhanafi <nhanafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 12:25:03 by nhanafi           #+#    #+#             */
/*   Updated: 2023/08/08 16:29:22 by nhanafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main()
{
    long long n, res = 0; cin >> n;
    res = (n *(n + 1))/2;
    if(res % 2)
    {
        cout << "NO" << endl;
        return 0;
    }
    cout << "YES " << endl;
    set <int> v;
    res /= 2;
    for (size_t i = n; i > 0; i--)
    {
        if(res >= i)
        {
            res -= i;
            v.insert(i);
        }
    }
    cout << v.size() << " ";
    for (auto k: v)
    {
        cout << k << ' ';
    }
    cout << n - v.size() << " ";
    for (size_t i = 1; i <= n; i++)
    {
        if(v.find(i) == v.end())
            cout << i << ' ';
    }
    cout << endl;
}