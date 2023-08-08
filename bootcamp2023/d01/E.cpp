/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   E.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhanafi <nhanafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 12:25:03 by nhanafi           #+#    #+#             */
/*   Updated: 2023/08/08 15:38:41 by nhanafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
using namespace std;
int main()
{
    long long mod = 1e9 + 7;
    long long n;cin >> n;
    vector <string > mp(n);
    for (size_t i = 0; i < n; i++)
    {
        cin >> mp[i];
    }
    vector <vector <long long> > arr(n + 1, vector <long long>(n + 1));
    for (size_t i = 1; i <= n; i++)
    {
        for (size_t j = 1; j <= n; j++)
        {
            if(i == 1 && j == 1 && mp[i - 1][j - 1] == '.')
                arr[i][j] = 1;
            else if(mp[i - 1][j - 1] == '.')
                arr[i][j] = (arr[i - 1][j] + arr[i][j - 1])%mod;
        }
    }
    cout << arr[n][n] << endl;;
}