/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   K.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhanafi <nhanafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 15:02:17 by nhanafi           #+#    #+#             */
/*   Updated: 2022/09/07 18:02:26 by nhanafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <algorithm>
#include <vector>
#include <utility>
#include <map>
#include <set>
#include <algorithm>
#include <math.h>
#include <iterator>
using namespace std;

map <unsigned long long, unsigned long long> mp;

unsigned long long f(unsigned long long n)
{
    if(n <= 2)
        return 1;
    if(mp[n] != 0)
        return mp[n] %  4294967296;
    if(n % 2)
        mp[n] = (f(6 * n / 7) % (4294967296)+ f(2 * n / 3)% (4294967296)) % (4294967296);
    else
        mp[n] = (f(n - 1)% (4294967296) + f(n - 3)% (4294967296)) % (4294967296);
    return mp[n] %  4294967296;
}


int main()
{
    unsigned long long n;
    cin >> n;
    cout << (f(n)) %  4294967296 << endl;
}