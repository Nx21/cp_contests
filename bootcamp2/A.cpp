/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhanafi <nhanafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 09:14:33 by nhanafi           #+#    #+#             */
/*   Updated: 2022/09/12 15:31:50 by nhanafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <utility>
using namespace std;

int visited(vector <pair<int,vector<int> > > mat, int n)
{
    for (int i = 0; i < n; i++)
    {
        if(!mat[i].first)
            return 0;
    }
    return 1;
}


int main()
{
    int n,res = 0;
    cin >> n;
    vector <pair<int,vector<int> > > mat(n);
    for (int i = 0; i < n; i++)
    {
        vector <int> arr;
        for (int j = 0; j < n; j++)
        {
            int a;
            cin >> a;
            if(a)
                arr.push_back(j);
            res += a;
        }
        mat[i].second = arr;
        mat[i].first = 0;
    }
    vector <int> arr;
    int i = 0;
    arr.push_back(i);
    while(i < arr.size() && arr.size() < n)
    {
        mat[arr[i]].first = 1;
        for (int j = 0; j < mat[arr[i]].second.size(); j++)
        {
            if(!mat[mat[arr[i]].second[j]].first)
                arr.push_back(mat[arr[i]].second[j]);
        }
        i++;
    }
    for (int i = 0; i < arr.size(); i++)
    {
        mat[arr[i]].first = 1;
    }
    
    
    if(n == res/2 + 1 && visited(mat,n))
        cout << "YES";
    else 
        cout << "NO";
}