/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   L.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhanafi <nhanafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 15:47:46 by nhanafi           #+#    #+#             */
/*   Updated: 2022/09/07 17:09:32 by nhanafi          ###   ########.fr       */
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
#include <stack>
using namespace std;

int f(string s)
{
    stack<char> st;
    for (int i = 0; s[i]; i++)
    {
        if(s[i] == '(' || s[i] == '[')
            st.push(s[i]);
        else if (!st.empty() && st.top() == '(' && s[i] == ')')
            st.pop();
        else if (!st.empty() && st.top() == '[' && s[i] == ']')
            st.pop();
        else
            return 0;
    }
    return st.empty();
}

int main()
{
    int n;
    cin >> n;
    cin.ignore();
    while(n--)
    {
        string s;
        getline(cin, s);
        if(f(s))
            cout << "Yes\n";
        else
            cout << "No\n";
    }   
}