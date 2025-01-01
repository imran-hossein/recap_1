#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;

    string result = to_string(n);
    while (result.length() < 4)
    {
        result = '0' + result;
    }
    cout << result << endl;
    return 0;
}