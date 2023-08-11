/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhanafi <nhanafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 09:12:01 by nhanafi           #+#    #+#             */
/*   Updated: 2023/08/11 09:12:22 by nhanafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
 
 
int inlist(long long val,long long k,vector <long long> &app, long n)
{
    long l = 0,med;
    long r = n - 1;
    if(app[r] >= val - k && app[r] <= val + k)
    {
        app[r] = -1;
        return 1;
    }
    if(app[l] >= val - k && app[l] <= val + k)
    {
        app[l] = -1;
        return 1;
    }
    while(l + 1 < r)
    {
        med = (l + r)/2;
        if(app[med] < 0 || app[med] > val + k)
            l = med;
        else if(app[med] < val - k)
            r = med;
        else
        {
            app[med] = -1;
            return 1;
        }
        // cout << med << endl;
    }
    return 0;       
}
 
int main(int argc, char const *argv[])
{
    long n, m;
    long long k,res=0;
    cin >> n >> m >> k;
    vector <long long> apt(n);
    vector <long long> app(m);
    for (long i = 0; i < n; i++)
        cin >> apt[i];
    for (long i = 0; i < m; i++)
        cin >> app[i];
 
    sort(app.begin(),app.end());
    sort(apt.begin(),apt.end()); 
    for(long i = 0; i < m; i++)
    {
        res += inlist(app[i],k,apt,n);
    }
    
    cout << res << endl;
    
    
    return 0;
}