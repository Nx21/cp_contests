/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhanafi <nhanafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 14:20:21 by nhanafi           #+#    #+#             */
/*   Updated: 2023/04/04 15:21:02 by nhanafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
using namespace std;

void f(long long &x, long long n)
{
    x -= n/2;
    if (x <= 0)
        x = 1 - x;
}

int main()
{
    int t;cin >> t;
    // cout << t << endl;
    while(t--)
    {
        int n;cin >> n;
        vector<long long> arr(n - 1);
        int res = 0;
        for (size_t i = 0; i < n - 1; i++)
        {
            cin >> arr[i];
        }
        int j;
        for (int i = 1; i < n - 1; i++)
        {
            if (arr[i] == arr[i - 1])
                arr[i] = 0;
            else if (arr[i - 1] > arr[i])
                res = i;
        }
        // cout << n << endl;
        for (size_t i = 0; i < n - 1; i++)
        {
            if (res == i)
                cout << 0 << " ";
            cout << arr[i] << " ";
        }
        cout << endl;
    }
}