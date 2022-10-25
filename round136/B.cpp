/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhanafi <nhanafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 09:14:33 by nhanafi           #+#    #+#             */
/*   Updated: 2022/09/29 16:06:57 by nhanafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <utility>
using namespace std;


int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,res = 0;
        cin >> n;
        vector <int> arr(n);
        vector <int> d(n);
        for (int i = 0; i < n; i++)
            cin >> d[i];
        arr[0] = d[0];
        for (int i = 1; i < n; i++)
        {
            if(d[i] + arr[i -1] == arr[i - 1] - d[i] || arr[i - 1] - d[i] < 0)
                arr[i] = d[i] + arr[i -1];
            else
                res = -1;
        }
        if(res)
            cout << res << endl;
        else
        {
            for (int i = 0; i < n; i++)
            {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }
}