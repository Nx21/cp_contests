/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   D.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhanafi <nhanafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 13:37:28 by nhanafi           #+#    #+#             */
/*   Updated: 2022/09/05 16:34:06 by nhanafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
using namespace std;

int main()
{
    set <long long> st;
    string s;
    long long n;
    while(cin >> s&& cin >> n)
    {
        
        if(s == "insert")
            st.insert(n);
        else if(s == "exists")
        {
            if(st.find(n) != st.end())
                cout << "true"<< endl;
            else
                cout << "false" << endl;
        }
        else if(s == "delete")
            st.erase(n);
    }
}