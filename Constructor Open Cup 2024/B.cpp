/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasreddine <nasreddine@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 15:33:36 by nasreddine        #+#    #+#             */
/*   Updated: 2024/02/03 19:47:24 by nasreddine       ###   ########.fr       */
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
    int t, k, res = 1 , tmp =-1;
    cin >> t >> k;
    while (t--)
    {
        string s; cin >> s;
        if(tmp + s.size() + 1> k)
        {
            tmp = s.size();
            res++;
        }
        else
            tmp += s.size() + 1;
    }
    cout << res << endl;
}