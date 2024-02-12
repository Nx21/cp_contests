/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhanafi <nhanafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 19:39:36 by nhanafi           #+#    #+#             */
/*   Updated: 2024/01/05 16:30:01 by nhanafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector> 
using namespace std;

void f(vector<int> &arr, int k)
{
    int n = 2023;
    for (size_t i = 0; i < arr.size(); i++)
    {
        if (n % arr[i])
        {
            cout << "NO" << endl;
            return;
        }
        n /= arr[i];
    }
    cout << "YES" << endl;
    cout << n;
    for (size_t i = 0; i < k - 1; i++)
    {
        cout <<  " " << 1;
    }
    cout << endl;
    
       
}

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n, k; cin >> n >> k;
        vector <int> arr(n);
        for (size_t i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        f(arr, k);
    }
}
