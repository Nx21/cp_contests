/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasreddine <nasreddine@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 22:12:01 by nhanafi           #+#    #+#             */
/*   Updated: 2023/07/23 20:08:55 by nasreddine       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>
#include <iomanip>
#include <map>
using namespace std;

int main()
{
    long  long a,b,m,n;
    cin >> n >> m >> a >> b;
    cout << min(min((n/m)*b + (n%m)*a, a * n), (n/m + 1) * b);
}