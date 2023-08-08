/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   D.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhanafi <nhanafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 12:25:03 by nhanafi           #+#    #+#             */
/*   Updated: 2023/08/08 15:14:55 by nhanafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    long long n; cin >> n;
    if(n < 2)
    {
        cout << 1 << endl;
        return 0;
    }
    vector <long long> arr(3);
    arr[0] = 1;
    arr[1] = 1;
    for (size_t i = 2; i <= n; i++)
    {
        arr[2] = arr[1] + arr[0];
        arr[0] = arr[1];
        arr[1] = arr[2]; 
    }
    cout << arr[2] << endl;
    
}