/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhanafi <nhanafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 15:49:14 by nhanafi           #+#    #+#             */
/*   Updated: 2022/09/05 13:35:14 by nhanafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
using namespace std;

int main()
{
    int n,m,a;
    cin >> n;
    vector <int> arr(n);
    vector <int> res;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cin >> m;
    set <int> st;
    for (int i = 0; i < m; i++)
    {
        cin >> a;
        st.insert(a);
    }
    for (int i = 0; i < n; i++)
    {
        if(st.find(arr[i]) == st.end())
            res.push_back(arr[i]);
    }
    cout << res.size() << "\n";
    for(int i = 0; i < res.size(); i++)
        cout << res[i] << " ";
    cout << "\n";
}