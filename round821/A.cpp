/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhanafi <nhanafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 15:33:56 by nhanafi           #+#    #+#             */
/*   Updated: 2022/09/19 15:59:13 by nhanafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <complex>
#include <iomanip>
#include <algorithm>
#include <queue>
#include <stack>
#include <string>
#include <vector>
#include <cmath>
#include <map>
#include <set>


using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,k;
        long long res = 0;;
        cin >> n >> k;
        vector <vector <long long> >arr(k , vector<long long>(n));
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i % k][i / k];
        }
        for (int i = 0; i < k; i++)
        {
            sort(arr[i].begin(), arr[i].end(), greater<long long>());
            res += arr[i][0];
        }
        cout << res  << endl;
        
    }
    return 0;
}
