/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhanafi <nhanafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 12:25:03 by nhanafi           #+#    #+#             */
/*   Updated: 2023/08/08 14:54:11 by nhanafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    long long n, q; cin >> n >> q;
    vector <long long> arr(n + 1);
    for (size_t i = 1; i <= n; i++)
    {
        cin >> arr[i];
        arr[i] ^= arr[i -1];
    }
    while (q--)
    {
        long long l,r; cin >> l >> r;
        cout << (arr[r] ^ arr[l - 1]) << endl;
    }
    
}