/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   F.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhanafi <nhanafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 12:25:03 by nhanafi           #+#    #+#             */
/*   Updated: 2023/08/08 16:08:04 by nhanafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
using namespace std;
 
int main()
{
    long long n,x;
    cin >> n >> x;
    vector <long long> arr(n);
    for (size_t i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    vector <long long> res(x + 1, -1);
    res[0] = 0;
    for (size_t i = 0; i <= x; i++)
    {
        if (res[i] != -1)
        {
            for (size_t j = 0; j < n; j++)
            {
                if (i + arr[j] <= x && (res[i + arr[j]] > res[i] + 1 || res[i + arr[j]] == - 1))
                {
                    res[i + arr[j]] = res[i] + 1;
                }
            }
        }
        
    }
    cout << res[x];
}