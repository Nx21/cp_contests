/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   G.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhanafi <nhanafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 12:25:03 by nhanafi           #+#    #+#             */
/*   Updated: 2023/08/08 16:08:02 by nhanafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    long long n, res = 0; cin >> n;
    vector <long long> arr(n + 1);
    for (size_t i = 1; i <= n; i++)
    {
        cin >> arr[i];
        if(arr[i] < arr[i - 1])
        {
            res += arr[i - 1] - arr[i];
            arr[i] = arr[i - 1];
        }
    }
    cout << res;
}