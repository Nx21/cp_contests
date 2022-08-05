/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhanafi <nhanafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 16:05:44 by nhanafi           #+#    #+#             */
/*   Updated: 2022/08/04 16:12:05 by nhanafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        vector <int> arr(n);
        cout << n << endl;
        for (int j = 0; j < n; j++)
        {
            arr[j] = j + 1;
            cout << arr[j] << " ";
        }
        cout << endl;
        for (int j = 0; j < n - 1; j++)
        {
            swap(arr[j], arr[j + 1]);
            for (int k = 0; k < n; k++)
                cout << arr[k] << " ";
             cout << endl;
        } 
    }     
}