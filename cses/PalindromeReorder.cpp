/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PalindromeReorder.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhanafi <nhanafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 20:05:56 by nhanafi           #+#    #+#             */
/*   Updated: 2023/01/18 20:23:34 by nhanafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int a = 0;
    string str ;
    cin >> str ;
    vector<int> arr(26,0);
    for (size_t i = 0; i < str.size(); i++)
        arr[str[i] - 'A']++;
    for (size_t i = 0; i < 26; i++)
    {
        if (arr[i] % 2)
            a++;
    }
    if (a > 1)
    {
        cout << "NO SOLUTION" << endl;
        return 0;
    }
    for (size_t i = 0; i < 26; i++)
    {
        if (arr[i] % 2 == 0)
        {
            for (size_t j = 0; j < arr[i]/2; j++)
            {
                cout << char(i + 'A');
            }
        }
    }
    for (size_t i = 0; i < 26; i++)
    {
        if (arr[i] % 2)
        {
            for (size_t j = 0; j < arr[i]; j++)
            {
                cout << char(i + 'A');
            }
        }
    }
    for (int i = 25; i >= 0; i--)
    {
        if (arr[i] % 2 == 0)
        {
            for (size_t j = 0; j < arr[i]/2; j++)
            {
                cout << char(i + 'A');
            }
        }
    }
    cout << endl;
}