/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   D.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhanafi <nhanafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 12:25:03 by nhanafi           #+#    #+#             */
/*   Updated: 2023/08/07 14:13:41 by nhanafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stack>
using namespace std;

void f()
{
    string op = "([";
    fflush(stdin);
    string s; getline(cin, s);
    stack <char> st;
    for (auto c: s)
    {
        if(op.find(c) != op.npos)
        {
            st.push(c);
        }
        else
        {
            if(st.empty())
            {
                cout << "No" << endl;
                return ;
            }
            if(st.top() + 1 == c || st.top() + 2 == c)
                st.pop();
            else
            {
                cout << "No" << endl;
                return ;
            }
        }
    }
    if(st.empty())
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

}

int main()
{
    string s; getline(cin, s);
	int t = stoi(s);
    while(t--)
    {
        f();
    }
}