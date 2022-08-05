/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   robot.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhanafi <nhanafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 16:22:42 by nhanafi           #+#    #+#             */
/*   Updated: 2022/08/04 16:52:05 by nhanafi          ###   ########.fr       */
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
        long long n , res1 = 0, res2 = 0;
        cin >> n;
        vector<long long> arr(n);
        vector <vector<long long> > mat(2,arr);
        for (long long k = 0; k < n; k++)
        {
            cin >> mat[0][k];
            if(k)
            {
            if(res1 > mat[0][k])
                res1++;
            else 
                res1 = mat[0][k] + 1;
            }
            
        }
        for (long long k = 0; k < n; k++)
            cin >> mat[1][k];
        for (long long k = n - 1; k >= 0; k--)
        {
            if(res1 > mat[1][k])
                res1++;
            else 
                res1 = mat[1][k] + 1;
            
        }
        for (long long k = 0; k < n; k++)
        {
            if(k)
            {
            if(res2 > mat[0][k])
                res2++;
            else 
                res2 = mat[0][k] + 1;
            }
            if(res2 > mat[1][k])
                res2++;
            else 
                res2 = mat[1][k] + 1;
        }
        cout << min(res2, res1) << endl;
    }     
}