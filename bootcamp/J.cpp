/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   J.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhanafi <nhanafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 14:41:08 by nhanafi           #+#    #+#             */
/*   Updated: 2022/09/06 15:02:14 by nhanafi          ###   ########.fr       */
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

int main()
{
    string s;
    int x,y;
    cin >> s >> x >> y;
    for (int i = 0; i < x - 1; i++)
        cout << s[i];
    for (int i = y - 1; i >= x - 1; i--)
        cout << s[i];
    for (int i = y; s[i]; i++)
        cout << s[i];
    cout << endl;
}