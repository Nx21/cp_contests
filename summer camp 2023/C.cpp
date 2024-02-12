/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasreddine <nasreddine@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 09:14:33 by nhanafi           #+#    #+#             */
/*   Updated: 2023/07/23 23:30:01 by nasreddine       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <utility>
using namespace std;

vector <int> vist;
int f(vector <vector<int> > &mat, vector<int> &cat , int n, int m, int mm)
{
    if(vist[n])
        return 0;
    vist[n] = 1;
    if(cat[n])
        m--;
    else
        m = mm;
    if(m < 0)
        return 0;
    int res = 0;
    for (size_t i = 0; i < mat[n].size(); i++)
    {
        res += f(mat,cat, mat[n][i] ,m, mm);
    }
    return max(res, 1);
}


int main()
{
    int n,m;
    cin >> n >> m;
    vist.resize(n);
    vector<int> cat(n);
    for (size_t i = 0; i < n; i++)
    {
        cin >> cat[i];
    }
    vector < vector <int>> mat(n,vector <int>(0));
    for (size_t i = 0; i < n - 1; i++)
    {
        int a, b;
        cin >> a >> b;
        mat[a - 1].push_back(b - 1);
        mat[b - 1].push_back(a - 1);
    }
    cout << f(mat,cat, 0, m, m);
}