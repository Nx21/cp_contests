/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   L.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhanafi <nhanafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 11:41:57 by nhanafi           #+#    #+#             */
/*   Updated: 2022/09/11 16:06:37 by nhanafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
using namespace std;

int main()
{
    int n,m;
    cin >> n >> m;
    vector <long long> vec(n + 1);
    vector <vector <long long > > mat1(n + 1, vec);
    vector <vector <long long > > mat2(n + 1, vec);
    for (int i = 1; i <= n; i++)
    {
        string s;
        cin >> s;
        for (int j = 1; j <= n; j++)
        {
            mat1[i][j] = s[j - 1] == 'O' ? 1 : 0;
            mat2[i][j + m] 
        }
    }
    for (int i = 0; i < m; i++)
    {
        int x1,y1,x2,y2;
        cin >> x1 >> y1 >> x2 >> y2;
        long long res = mat[x1 - 1][y1 - 1] + mat[x2][y2] - mat[x1 - 1][y2] - mat[x2][y1 - 1];
        cout << res << endl;
    }
}