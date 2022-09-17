/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhanafi <nhanafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 15:32:18 by nhanafi           #+#    #+#             */
/*   Updated: 2022/09/12 16:01:34 by nhanafi          ###   ########.fr       */
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
        string s,res;
        cin >> n >> s;
        res.resize(n);
        int j = s.size() - 1;
        int i;
        for (i = 0; j >= 0; i++)
        {
            if(s[j] != '0')
                res[i] = s[j] + 'a' - '1';
            else
            {
                int k = 0;
                k = s[j - 1] - '0' + (s[j - 2] - '0') * 10;
                res[i] = k + 'a' - 1;
                j-=2;
            }
            j--;
        }
        
        for(j = i - 1 ; j >= 0; j--)
            cout << res[j];
        cout <<"\n";
        
    }
}