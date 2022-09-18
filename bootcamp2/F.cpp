/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   F.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhanafi <nhanafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 15:56:44 by nhanafi           #+#    #+#             */
/*   Updated: 2022/09/17 16:56:36 by nhanafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <utility>
using namespace std;

int    dfs(int start, int res, vector<vector<int> > &mat, vector<int> &vis)
{
    vis[start] = 1;
    for(int i = 0; i < mat[start].size(); i++)
    {
        if (!vis[mat[start][i]])
            res = dfs(mat[start][i], start, mat, vis);
        else
            res++;
    }
    return res;
}

int main()
{
    int n,res = 0;
    cin >> n;
    vector <vector<int> > mat(n);
    vector <int> vis(n, 0);
    for (int i = 0; i < n; i++)
    {
        vector <int> arr;
        for (int j = 0; j < n; j++)
        {
            int a;
            cin >> a;
            if(a)
                arr.push_back(j);
        }
        mat[i] = arr;
    }
    
    for (int i = 0; i < n; i++)
    {
        if(!vis[i])
        {
            res += dfs(i, 0, mat, vis);
        }
    }
    cout << res << endl;
    
}