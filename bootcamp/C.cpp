/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhanafi <nhanafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 13:37:28 by nhanafi           #+#    #+#             */
/*   Updated: 2022/09/05 13:49:28 by nhanafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
    int n,m,a;
    cin >> n;
    cin >> m;
    int j = 0;
    if(n > m)
    {
        for (int i = 0; i < n + m; i++)
        {
            if(j < m && i % 2)
            {
                cout << "G";
                j++;
            }
            else 
                cout << "B";
        }
    }
    else
    {
        for (int i = 0; i < n + m; i++)
        {
            if(j < n && i % 2)
            {
                cout << "B";
                j++;
            }
            else 
                cout << "G";
        }
    }
    cout << "\n";
}