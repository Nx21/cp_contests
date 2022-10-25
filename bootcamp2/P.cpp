/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   P.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhanafi <nhanafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 20:16:45 by nhanafi           #+#    #+#             */
/*   Updated: 2022/09/22 22:13:06 by nhanafi          ###   ########.fr       */
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
    int n;
    cin >> n;
    vector <vector <long long> > mat(n + 1, vector <long long>(n + 1));
    mat[1][1] = 1;
    for (int i = 1; i <= n; i++)
    {
        string s;
        cin >> s;
        for (int j = 1; j <= n; j++)
        {
            if(s[j - 1] == '.')
                mat[i][j] += (mat[i -1][j] + mat[i][j - 1]) % MOD;
            else
                mat[i][j] = 0;
        }
    }
    cout << mat[n][n];
}