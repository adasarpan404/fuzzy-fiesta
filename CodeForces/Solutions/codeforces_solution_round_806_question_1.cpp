#include <bits/stdc++.h>
#include <iostream>
#include <string>
#define all(x) x.begin(), x.end()
#define rep(i, a, b) for (int i = (a); i < (b); i++)
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
bool checkpalindrome(string str)
{
    string reverse_string = str;
    reverse(reverse_string.begin(), reverse_string.end());
    if (str == reverse_string)
    {
        return true;
    }
    else
    {
        return false;
    }
}
long fact(const int &p)
{
    if (p <= 1)
        return 1;
    return p * fact(p - 1);
}
bool isPrime(int n)
{
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;

    if (n % 2 == 0 || n % 3 == 0)
        return false;
    for (int i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;

    return true;
}
bool isPerfectSquare(long double x)
{

    if (x >= 0)
    {

        long long sr = sqrt(x);

        return (sr * sr == x);
    }
    return false;
}
bool isPowerOfTwo(int n)
{
    if (n == 0)
        return false;

    return (ceil(log2(n)) == floor(log2(n)));
}
// void validQuadraple(int l, int r){
//     for (int i = l; i < r; i++)
//         for (int j = i + 1; j < r; j++)
//             for (int k = j + 1; k < r; k++)
//                 for (int l = k + 1; l < r; l++) {
//                     if ((i ^ j ^ k ^ l) == 0) {
//                         cout<<i<<" "<<j<<" "<<k<<" "<<l<<endl;
//                         return;
//                     }
//                 }
//     cout<<-1<<endl;
// }

bool find3Numbers(int A[], int arr_size, int sum)
{
    for (int i = 0; i < arr_size - 2; i++)
    {
        unordered_set<int> s;
        int curr_sum = sum - A[i];
        for (int j = i + 1; j < arr_size; j++)
        {
            if (s.find(curr_sum - A[j]) != s.end())
            {
                return true;
            }
            else if (s.find(curr_sum - A[j] - 10) != s.end())
            {
                return true;
            }
            else if (s.find(curr_sum - A[j] - 20) != s.end())
            {
                return true;
            }
            s.insert(A[j]);
        }
    }
    return false;
}
void countFreq(int arr[], int n)
{
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++)
        mp[arr[i]]++;
    int count = 0;
    int count_number = 0;
    for (auto x : mp)
    {
        if (x.second > 1)
        {
            count = count + x.second;
            count_number++;
        }
    }
    if (count % 2 != 0)
    {
        count_number--;
    }
    for (auto x : mp)
    {
        if (x.second == 1)
        {
            count_number++;
        }
    }
    cout << count_number << endl;
}
void computeLPSArray(string pat, int M, int lps[])
{

    int len = 0;
    int i = 1;
    lps[0] = 0;
    while (i < M)
    {
        if (pat[i] == pat[len])
        {
            len++;
            lps[i] = len;
            i++;
        }
        else if (len != 0)
        {
            len = lps[len - 1];
        }
        else
        {
            lps[i] = len;
            i++;
        }
    }
}

int KMPSearch(string pat, string txt)
{
    int M = pat.length();
    int N = txt.length();
    int lps[M];
    int j = 0;
    computeLPSArray(pat, M, lps);

    int i = 0;
    int res = 0;
    int next_i = 0;

    while (i < N)
    {
        if (pat[j] == txt[i])
        {
            j++;
            i++;
        }
        if (j == M)
        {
            j = lps[j - 1];
            res++;
        }
        else if (i < N && pat[j] != txt[i])
        {
            if (j != 0)
                j = lps[j - 1];
            else
                i = i + 1;
        }
    }
    return res;
}
// vector<vector<int>> subString(char str[], int n)
// {
//     vector<vector<int>> res;
//     for (int len = 1; len <= n; len++)
//     {
//         for (int i = 0; i <= n -len; i++)
//         {
//             int j = i + len - 1;
//             for (int k = i; k <= j; k++)
//                 res.push_back(str[k])
//         }
//     }
//     return res;
// }

bool isTripletExist(int nums[], int n, int target, int count)
{

    if (count == 3 && target == 0)
    {
        return true;
    }

    if (count == 3 && n == 0 && target != 0)
    {
        return false;
    }

    return isTripletExist(nums, n - 1, target - nums[n - 1], count + 1) ||
           isTripletExist(nums, n - 1, target, count);
}

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
