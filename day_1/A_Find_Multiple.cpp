#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int a, b, c;
    cin >> a >> b >> c;

    int result = a + (c - a % c) % c;
    if (result <= b) cout << result << endl;
    else cout << -1 << endl;

    return 0;
}