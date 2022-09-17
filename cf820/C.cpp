/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhanafi <nhanafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 15:32:18 by nhanafi           #+#    #+#             */
/*   Updated: 2022/09/12 16:54:49 by nhanafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <utility>
#include <math.h>
using namespace std;

#define long long int


bool sorttwo(pair <int , int> a, pair <int , int> b)
{
    if(a.first != b.first)
        return a.first > b.first;
    else 
        return a.second > b.second;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        vector <pair <int , int> > vec(s.size());
        for (int i = 0; i < s.size(); i++)
        {
            vec[i].first = s[i] - 'a';
            vec[i].second = i;
        }
        sort(vec.begin(), vec.end());
        int x,y,a = 1;
        for (int i = 0; i < s.size(); i++)
        {
            if(vec[i].second == s.size() - 1)
                y =  i;
            else if(vec[i].second == 0)
                x =  i;
        }
        cout << (int) abs(s[0] - s[s.size() - 1]) << " " << abs(x - y) + 1 << "\n"; 
        if(x <= y)
        {
            for (int i = x; i <= y; i++)
            {
                cout << vec[i].second + 1 << " ";
            }
            cout << endl;
        }
        else
        {
            for (int i = x; i >= y; i--)
            {
                cout << vec[i].second + 1 << " ";
            }
            cout << endl;
        }
    }
}