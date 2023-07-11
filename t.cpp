#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int calPoint(vector<string>ops)
{
    stack <int> st;
    for(auto it: ops)
    {
        if(it == "+")
        {
            int a = st.top();
            st.pop();
            int b = st.top();
            st.push_
        }
    }
}