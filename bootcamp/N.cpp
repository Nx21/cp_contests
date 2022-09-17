/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   N.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhanafi <nhanafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 18:02:12 by nhanafi           #+#    #+#             */
/*   Updated: 2022/09/07 18:27:35 by nhanafi          ###   ########.fr       */
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
    int t;
    cin >> t;
    for (int k = 0; k < t; k++)
    {
        cout << "Case " << k + 1 << ":\n";
        vector <string> vec(100);
        vec[0] = "http://www.lightoj.com/";
        vec[1] = "";
        int i = 0;
        while(1)
        {
            string s;
            cin >> s;
            if(s == "QUIT")
                break;
            else if(s == "BACK")
                i--;
            else if(s == "FORWARD")
                i++;
            else if(s == "VISIT")
            {
                string url;
                cin >> url;
                i++;
                vec[i] = url;
                vec[i+1] = "";
            }
            if(i < 0)
            {
                cout << "Ignored\n";
                i++;
            }
            else if(vec[i] == "")
            {
                cout << "Ignored\n";
                i--;
            }
            else 
                cout << vec[i] << "\n";
        }
    }
    
    
}