/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   M.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhanafi <nhanafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 12:25:03 by nhanafi           #+#    #+#             */
/*   Updated: 2023/08/11 09:33:45 by nhanafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
using namespace std;


int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> arr(m + 1);
    for (size_t i = 2; i <= m; i++)
    {
        for (size_t j = i + i; j <= m; j += i)
        {
            arr[j] = 1;
        }
    }
    bool b = 0;
    for (size_t i = n; i <= m; i++)
    {
        if(!arr[i])
        {
            b = 1;
            cout << i << endl;
        }
    }
    if(!b)
        cout << "Absent" << endl;
}