/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhanafi <nhanafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 22:12:01 by nhanafi           #+#    #+#             */
/*   Updated: 2022/10/24 22:48:20 by nhanafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>
#include <iomanip>
#include <map>
using namespace std;
vector<pair< long long, double> > greater_than(string expr);

int find_firstof(string expr, char c)
{
    char par = 0;
    for(int i = 0; expr[i]; i++)
    {
        if(expr[i] == par)
            par = 0;
        else if (expr[i] == '(')
            par = ')';
        else if (!par && expr[i] == c)
            return i;
    }
    return -1;
}
vector<pair< long long, double> > variable(string expr)
{
    if(expr[0] == '(' && expr[expr.size() - 1] == ')')
        return greater_than(expr.substr(1,expr.size() - 2));
    if (expr[0] == 'd')
    {
        int n = stoi(expr.substr(1));
        vector<pair< long long, double> > arr(n);
        for(int i = 0; i < n; i++)
            arr[i] = {i + 1, (double)100/n};
        return arr;
    }
    return vector<pair< long long, double> > (1, {stoi(expr), 100});
}


vector<pair< long long, double> > multi(string expr)
{
    vector<pair< long long, double> > res;
    vector<pair< long long, double> > res2;
    int len = find_firstof(expr, '*');
    if(len != -1)
    {
        res = variable(expr.substr(0, len));
        res2 = multi(expr.substr(len + 1));
        vector<pair< long long, double> > tot(res.size() * res2.size());
        for(int i = 0; i < res.size(); i++)
        {
            for(int j = 0; j < res2.size(); j++)
            {
                tot[i*res2.size() + j].first = res[i].first * res2[j].first;
                tot[i*res2.size() + j].second = (res[i].second * res2[j].second)/100;
            }
        }
        return tot;
    }
    return variable(expr);
}

vector<pair< long long, double> > sub(string expr)
{
    vector<pair< long long, double> > res;
    vector<pair< long long, double> > res2;
    int len = find_firstof(expr, '-');
    if(len != -1)
    {
        res = multi(expr.substr(0, len));
        res2 = sub(expr.substr(len + 1));
        vector<pair< long long, double> > tot(res.size() * res2.size());
        for(int i = 0; i < res.size(); i++)
        {
            for(int j = 0; j < res2.size(); j++)
            {
                tot[i*res2.size() + j].first = res[i].first - res2[j].first;
                tot[i*res2.size() + j].second = (res[i].second * res2[j].second)/100;
            }
        }
        return tot;
    }
    return multi(expr);
}

vector<pair< long long, double> > add(string expr)
{
    vector<pair< long long, double> > res;
    vector<pair< long long, double> > res2;
    int len = find_firstof(expr, '+');
    if(len != -1)
    {
        res = sub(expr.substr(0, len));
        res2 = add(expr.substr(len + 1));
        vector<pair< long long, double> > tot(res.size() * res2.size());
        for(int i = 0; i < res.size(); i++)
        {
            for(int j = 0; j < res2.size(); j++)
            {
                tot[i*res2.size() + j].first = res[i].first + res2[j].first;
                tot[i*res2.size() + j].second = (res[i].second * res2[j].second)/100;
            }
        }
        return tot;
    }
    return sub(expr);
}


vector<pair< long long, double> > greater_than(string expr)
{
    vector<pair< long long, double> > res;
    vector<pair< long long, double> > res2;
    int len = find_firstof(expr, '>');
    if(len != -1)
    {
        res = add(expr.substr(0, len));
        res2 = greater_than(expr.substr(len + 1));
        vector<pair< long long, double> > tot(res.size() * res2.size());
        for(int i = 0; i < res.size(); i++)
        {
            for(int j = 0; j < res2.size(); j++)
            {
                tot[i*res2.size() + j].first = res[i].first > res2[j].first;
                tot[i*res2.size() + j].second = (res[i].second * res2[j].second)/100;
            }
        }
        return tot;
    }
    return add(expr);
}





int main()
{
    string expr;
    getline(cin, expr);
    vector<pair< long long, double> > res = greater_than(expr);
    // cout.precision(2);
    map <long long, double> mp;
    for(int i = 0; i < res.size(); i++)
    {
        mp[res[i].first] += res[i].second;
    }
    for(auto it : mp)
    {
        cout << it.first << " ";
        cout << fixed << setprecision(2) << it.second << endl;
        
    }
}