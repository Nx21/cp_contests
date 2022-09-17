/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   P.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhanafi <nhanafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 19:02:28 by nhanafi           #+#    #+#             */
/*   Updated: 2022/09/07 19:14:51 by nhanafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <algorithm>
#include <vector>
#include <utility>
#include <map>
#include <set>
#include <algorithm>
#include <math.h>
#include <iterator>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int k = 0; k < t; k++)
    {
        int n,m;
        cin >> n >> m;
        vector <string> vec(n);
        set <string> st;
        string s;
        for (int i = 0; i < n; i++)
        {
            cin >> s;
            vec[i] = s;
        }
        for (int i = 0; i < m; i++)
        {
            cin >> s;
            for (int j = 0; j < n; j++)
                st.insert(vec[j] + s);
            
        }
        cout << "Case " << k  + 1 << ": " << st.size() << endl;
    }
}
