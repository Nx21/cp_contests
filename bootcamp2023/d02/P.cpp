/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   P.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhanafi <nhanafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 11:09:29 by nhanafi           #+#    #+#             */
/*   Updated: 2023/08/11 11:09:36 by nhanafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;
 
unsigned long power(unsigned long a, unsigned long b, long p)
{
    unsigned long res;
    res = 1;
    a = a % p;
    while(b)
    {
        if(b % 2)
            res = (res * a) % p;
        b = b / 2;
        a = (a * a) % p;
    }
    return res;
}
 
int main()
{
    int n;
    unsigned long sol;
    long p = 1000000007;
    cin >> n;
    unsigned long a[n],b[n],c[n];
    for (int i = 0; i < n; i++)
        cin >> a[i] >> b[i] >> c[i];
    for (int i = 0; i < n; i++)
    {
        sol = power(b[i],c[i],p-1);
        cout << power(a[i],sol,p) << "\n";
    }
}