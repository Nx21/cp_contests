/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhanafi <nhanafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 14:32:51 by nhanafi           #+#    #+#             */
/*   Updated: 2023/04/27 17:06:01 by nhanafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <utility>
using namespace std;


int main()
{
	int t;cin >> t;
	while(t--)
	{
		long long n, res = 0, r = 0;cin >> n;
		vector <long long>arr(n);
		map <long long, long long>m;
		
		for (size_t i = 0; i < n; i++)
		{
			long long x;
			cin >> x;
			for (size_t j = 2; x != 1; j++)
			{

				while(x % j == 0)
				{
					x = x/ j;
					m[j]++;
				}
			}
		}
		for (auto [x,y]: m)
		{
			res += y%2;
			r += y/2;
		}
		cout << r + res/3 << endl;
	}
}