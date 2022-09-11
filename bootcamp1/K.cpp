/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   K.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhanafi <nhanafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 14:59:21 by nhanafi           #+#    #+#             */
/*   Updated: 2022/09/11 13:31:09 by nhanafi          ###   ########.fr       */
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
    int n;
    cin >> n;
    vector <pair <long long, long long> > vec(n); 
    for (int i = 0; i <  n; i++)
        cin >> vec[i].second >> vec[i].first;
    sort(vec.begin(), vec.end());
    long long sum = 1, j = 0;
    for (int i = 1; i <  n; i++)
    {
        if(vec[j].first <= vec[i].second)
        {
            sum++;
            j = i;
        }
    }
    cout << sum << endl;
}
