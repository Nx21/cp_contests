/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasreddine <nasreddine@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 15:56:44 by nhanafi           #+#    #+#             */
/*   Updated: 2023/06/18 16:34:43 by nasreddine       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <utility>
#include <cmath>
using namespace std;

int main()
{
   int t;
   cin >> t;
   while(t--)
   {
        long long a,b,c,k;
        cin >> a >> b >> c >> k;
        if (max(a,b) > c || max(a,b) + 1 < c)
        {
            cout << -2 << endl;
            continue;
        }
        pair <long long, long long> A,B,C;
        A = make_pair(pow(10,a - 1), pow(10,a) - 1);
        B = make_pair(pow(10,b - 1), pow(10,b) - 1);
        C = make_pair(pow(10,c - 1), pow(10,c) - 1);
        long long tmpa = A.first;
        long long tmpb = B.first;
        long long tmpc = tmpa + tmpb;
        if (tmpc < C.first)
        {
            int res = C.first - tmpc;
            tmpc = C.first;
            tmpb += res;
            if(tmpb > B.second)
            {
                res = tmpc - B.second;
                tmpb = B.second;
            }
            else
                res = 0;
            tmpa += res;
            if(tmpa > A.second)
            {
                cout << -1 << endl;
                continue;
            }
        }
        else if(tmpc > C.second)
        {
            cout << -3 << endl;
            continue;
        }
        cout << tmpa << endl;
        cout << tmpb << endl;
        cout << tmpc << endl;
        
   }
}