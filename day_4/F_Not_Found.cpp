#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;

    vector<bool> present(26, false);

    for (auto ch : s)
    {
        present[ch - 'a'] = true;
    }

    string result = "None";
    for (int i = 0;i < 26;i++)
    {
        if (!present[i])
        {
            result = i + 'a';
            break;
        }
    }
    if (result == "None")
    {
        cout << "None" << endl;
    }
    else cout << result << endl;

    return 0;
}