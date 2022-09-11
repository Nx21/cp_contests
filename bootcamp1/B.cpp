/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhanafi <nhanafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 09:14:33 by nhanafi           #+#    #+#             */
/*   Updated: 2022/09/10 09:25:34 by nhanafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
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
    cin >> n;
    int i;
    vector <long long> arr(n + 1);
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
        if(i)
            arr[i] = gcd(arr[i] ,arr[i - 1]);
    }
    cout << arr[i - 1] << endl;
}