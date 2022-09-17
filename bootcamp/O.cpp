/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   O.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhanafi <nhanafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 18:33:49 by nhanafi           #+#    #+#             */
/*   Updated: 2022/09/07 18:44:08 by nhanafi          ###   ########.fr       */
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
    string vowel = "aeiou";
    int i = 0;
    bool err = 0;
    while (getline(cin, s))
    {
        if(s == "")
            break;
        int res = 0;
        for (int i = 0; s[i]; i++)
        {
            if(vowel.find(s[i]) != string::npos)
                res++;
        }
        if(i % 2 && res != 7)
            err = 1;
        if(i % 2 == 0 && res != 5)
            err = 1;
        i++;
    }
    if(err)
        cout << "NO\n";
    else 
        cout << "YES\n";
    
}