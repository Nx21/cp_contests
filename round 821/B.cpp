/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhanafi <nhanafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 16:00:44 by nhanafi           #+#    #+#             */
/*   Updated: 2022/09/19 16:38:28 by nhanafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <complex>
#include <iomanip>
#include <algorithm>
#include <queue>
#include <stack>
#include <string>
#include <vector>
#include <cmath>
#include <map>
#include <set>


using namespace std;
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long n,x, y;
        cin >> n >> x >> y;
        if((x == 0 && y == 0) || x == y || (x && y))
            cout << "-1\n";
        else
        {
            if(x < y)
                swap(x,y);
            if((n - 1) % x)
            {
                cout << "-1\n";
                continue;
            }
            for (int k = 2; k <= n; k += x)
            {
                for (size_t i = 0; i < x; i++)
                    cout << k << " ";
            }
            cout << "\n";
        }
    }
    return 0;
}
