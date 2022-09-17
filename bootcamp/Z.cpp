/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Z.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhanafi <nhanafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 09:15:21 by nhanafi           #+#    #+#             */
/*   Updated: 2022/09/07 17:11:18 by nhanafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <algorithm>
#include <vector>
#include <utility>
#include <map>
#include <set>
#include <algorithm>
#include <math.h>
#include <iterator>
using namespace std;

bool cmp(pair<string , int>& a, pair<string , int>& b)
{
    return a.second > b.second;
}

int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while(t--)
    {
        int n;
        cin >> n;
        vector<pair<string , int> > vec(n);
        for(int i = 0; i < n;i++)
        {
            string s;
            int age;
            cin >> s >> age;
            vec[i]= {s,age};
        }
        sort(vec.begin(), vec.end(), cmp);
        for (int i = 0; i < n; i++)
            cout << vec[i].first << endl;
    }
}