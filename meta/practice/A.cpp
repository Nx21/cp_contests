/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhanafi <nhanafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 10:56:41 by nhanafi           #+#    #+#             */
/*   Updated: 2023/09/23 11:12:07 by nhanafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;
int main()
{
    int t;cin >> t;
    for (size_t i = 1; i <= t; i++)
    {
        cout << "Case #"<< i <<": ";
        long long s,d,k;
        cin >> s >> d >> k;
        long long c = s + 2 * d;
        long long b = 2 * (s + d) - 1;
        cout << (min(c, b) >= k ? "YES" : "NO") << endl;
    }
}