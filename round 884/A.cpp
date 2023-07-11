/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasreddine <nasreddine@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 15:33:36 by nasreddine        #+#    #+#             */
/*   Updated: 2023/07/11 15:41:55 by nasreddine       ###   ########.fr       */
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
    while (t--)
    {
        int a,b; cin >> a >> b;
        if(a > 1)
        {
            cout << 1 << endl;
        }
        else
        {
            if(b > 2)
                cout << 1 << endl;
            else
                cout << 3 << endl;
        }
    }
    
}