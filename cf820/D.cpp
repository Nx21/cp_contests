/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   D.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhanafi <nhanafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 15:32:18 by nhanafi           #+#    #+#             */
/*   Updated: 2022/09/12 17:36:37 by nhanafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <utility>
#include <math.h>
using namespace std;


int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector <long long> vec(n);
        for (int i = 0; i < n; i++)
            cin >> vec[i];
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            vec[i] = a - vec[i];
        }
        sort(vec.begin(), vec.end());
        for (int i = 0; i < n; i++)
        {
            cout << vec[i] << " ";
        }
        cout << endl;
        int i = n - 1;
        int j = 0;
        while(vec[j])
            j++;
        j--;
        int sum = 0;
        int k = n-1;
        while(vec[i] >= 0 && j >= 0)
        {
            if(vec[i] >= vec[j] * -1)
            {
                sum++;
                i--;
                j--;
                k = i;
            }
            else
            {
                vec[i - 1] += vec[i];
                i--;
            }
        }
        int s = 0;
        while(vec[k] >= 0)
        {
            s++;
            k--;
        }
        s--;
        cout << sum + s / 2<< endl;
    }
}