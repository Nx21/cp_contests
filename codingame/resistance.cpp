#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/


bool comstr(const string &str, const string &find, const int &n)
{
    for(int i = 0; i < find.size(); i++)
        if (str[i + n] != find[i])
            return 0;
    return 1;
}




int main()
{
    vector <string> mp(26); 
    mp[0] = ".-";
    mp[1] = "-...";
    mp[2] = "-.-.";
    mp[3] = "-..";
    mp[4] = ".";
    mp[5] = "..-.";
    mp[6] = "--.";
    mp[7] = "....";
    mp[8] = "..";
    mp[9] = ".---";
    mp[10] = "-.-";
    mp[11] = ".-..";
    mp[12] = "--";
    mp[13] = "-.";
    mp[14] = "---";
    mp[15] = ".--.";
    mp[16] = "--.-";
    mp[17] = ".-.";
    mp[18] = "...";
    mp[19] = "-";
    mp[20] = "..-";
    mp[21] = "...-";
    mp[22] = ".--";
    mp[23] = "-..-";
    mp[24] = "-.--";
    mp[25] = "--..";
    string l;
    cin >> l; cin.ignore();
    int n;
    cin >> n; cin.ignore();
    vector <string> v(n,"");
    vector <int64_t> res(l.size() + 1,0);
    for (int i = 0; i < n; i++) {
        string w;
        cin >> w; cin.ignore();
        for(int j = 0; w[j]; j++)
            v[i] += mp[w[j] - 'A'];
    }

    res[0] = 1;
    for (int i = 0; i < l.size(); i++)
        if (res[i])
            for(int j = 0; j < n; j++)
                if (comstr(l, v[j], i))
                    res[i + v[j].size()] += res[i];

    cout << res[l.size()] << endl;
}