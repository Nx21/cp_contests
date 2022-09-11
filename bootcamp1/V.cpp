/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   V.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhanafi <nhanafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 16:29:21 by nhanafi           #+#    #+#             */
/*   Updated: 2022/09/11 16:41:31 by nhanafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <math.h>
using namespace std;

long long prime(long long a, long long b)
{
    if(b == 0)
        return a;
    return gcd(b , a % b);
}

int main()
{
       
}