/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   I.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhanafi <nhanafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 20:16:45 by nhanafi           #+#    #+#             */
/*   Updated: 2022/09/22 23:42:43 by nhanafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <utility>
#include <math.h>
using namespace std;
long long MOD = 1e9 + 7;
int main()
{
    long long n;
    cin >> n;
    vector <long long > arr(n);
    vector <long long > res(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if(i == 0)
            continue;
        if(i == 1)
        {
            res[i] = abs(arr[i] - arr[i - 1]);
            continue;
        }
        if(res[i - 1] + abs(arr[i] - arr[i - 1]) < res[i - 2] + abs(arr[i] - arr[i - 2]))
            res[i] = res[i - 1] + abs(arr[i] - arr[i - 1]);
        else
            res[i] = res[i - 2] + abs(arr[i] - arr[i - 2]);
    }
    cout << res[n - 1];
}