/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   k.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhanafi <nhanafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 12:38:09 by nhanafi           #+#    #+#             */
/*   Updated: 2023/08/11 09:26:47 by nhanafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
using namespace std;

long long gcd(long long a, long long b)
{
    if(a % b == 0)
        return b;
    if(b == 0)
        return a;
    return gcd(b , a % b);
}

int main()
{
    int n;
    long long g,v;
    cin >> n;
    int i;
    vector <long long> arr(n);
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    if(n == 1)
        cout << arr[0] << endl;
    if(n == 2)
        cout << (arr[0] > arr[1] ? arr[0] : arr[1]) << endl;
    else
    {
        long long a = gcd(arr[0] , arr[1]);
        long long c = gcd(arr[0] , arr[2]);
        long long b = gcd(arr[1] , arr[2]);
        if(a > b)
        {
            g = a;
            v = arr[1];
        }
        else
        {
            g = b;
            v = arr[0];
        }
        if(c > g)
            g = c;
        else if(v > arr[2])
            v = arr[2];
        // cout << g << "   " << v <<endl; 
        for (int i = 3; i < n; i++)
        {
            if(gcd(g, arr[i]) > gcd(g, v))
                g = gcd(g, arr[i]);
            else
            {
                g = gcd(g, v);
                v = arr[i];
            }
            // cout << g << "   " << v <<endl; 
        }
        cout << g <<endl;
    }
        
}