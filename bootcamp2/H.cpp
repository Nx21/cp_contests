/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   H.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhanafi <nhanafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 20:16:45 by nhanafi           #+#    #+#             */
/*   Updated: 2022/09/22 22:47:12 by nhanafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <utility>
using namespace std;
long long MOD = 1e9 + 7;
int main()
{
    vector <long long > mat(1e6 + 1, 1e9);
    mat[1] = 0;
    for (int i = 2; i <= 1e6; i++)
    {
        if(i % 3 == 0)
            mat[i] = mat[i/3] + 1;
        if(i % 2 == 0 && mat[i] > mat[i / 2] + 1)
            mat[i] = mat[i / 2] + 1;
        if(mat[i] > mat[i - 1] + 1)
            mat[i] = mat[i - 1] + 1;
    }
    long long n;
    while(cin >> n)
        cout << mat[n] << "\n";
}