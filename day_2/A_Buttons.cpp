#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b;
    cin >> a >> b;

    int ans = 0;
    if (a > b)
    {
        ans += a + (a - 1);
    }
    else if (a < b)
    {
        ans += b + (b - 1);
    }
    else ans += a + b;

    cout << ans << endl;
    return 0;
}