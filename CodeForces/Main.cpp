#include <bits/stdc++.h>
#include <iostream>
#include <string>


void solve()
{
    string s;
    cin >> s;
    char ok = (s[0] == 'Y' || s[0] == 'y');
    ok &= (s[1] == 'E' || s[1] == 'e');
    ok &= (s[2] == 's' || s[2] == 'S');
    cout << (ok ? "YES" : "NO") << "\n";
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    //   #ifndef ONLINE_JUDGE
    // 	freopen("Error.txt", "w", stderr);
    // #endif
    int testcases;
    bool multi = true;
    if (multi)
    {
        cin >> testcases;
    }
    else
    {
        testcases = 1;
    }
    while (testcases--)
    {
        solve();
    }
    return 0;
}
