/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   V.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhanafi <nhanafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 16:29:21 by nhanafi           #+#    #+#             */
/*   Updated: 2022/09/11 17:02:50 by nhanafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <math.h>
using namespace std;


int main()
{
    long long n;
    cin >> n;
    map <int, int> mp;
    int i = 2;
    while(n > 1)
    {
        while(n % i == 0)
        {
            mp[i]++;
            n = n / i;
        }
        i++;
    }
    
    for (std::map<int,int>::iterator  it = mp.begin(); it != mp.end(); it++)
    {
        if(it != mp.begin())
            cout << "*";
        cout << it->first;
        if(it->second != 1)
            cout << "^" << it->second;
    }
    
    
}