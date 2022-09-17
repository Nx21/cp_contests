/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   D.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhanafi <nhanafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 16:00:50 by nhanafi           #+#    #+#             */
/*   Updated: 2022/09/16 16:21:20 by nhanafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <utility>
using namespace std;

int f(int a, int b, int c)
{
    if(a < b)
        return f(b, a, c);
    if(a < c)
        return f(c, b, a);
    if(b < c)
        return f(a, c, b);
    cout << a<< b << c << endl;
    return 1;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long a,b,c;
        cin >> a >> b >> c;
        f(a,b,c);
    }
     
}