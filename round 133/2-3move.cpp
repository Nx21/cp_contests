/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2-3move.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhanafi <nhanafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 15:49:14 by nhanafi           #+#    #+#             */
/*   Updated: 2022/08/04 15:56:12 by nhanafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        long long n, res, check;
        cin >> n;
        res = n / 3 - 1;
        check = n - res * 3;
        if(n == 1)
            cout << 2 << endl;
        else if(check == 3 || check == 1)
            cout << res + 1 << endl;
        else
            cout << res + 2 << endl;
    }
       
}