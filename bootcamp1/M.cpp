/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   M.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhanafi <nhanafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 17:22:36 by nhanafi           #+#    #+#             */
/*   Updated: 2022/09/10 17:44:30 by nhanafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <utility>
using namespace std;

int main()
{
    int n,g,h;
    long long res = 0;
    vector <pair <long long, long long> > vec(n);
    for (int i = 0; i < n; i++)
        cin >> vec[i].first >> vec[i].second;
    if(n < g + h)
    {
        cout << "-1\n";
        return 0;
    }
    sort(vec.begin(), vec.end());
    for (int i = 0; i < h; i++)
    {
         
    }
    
}