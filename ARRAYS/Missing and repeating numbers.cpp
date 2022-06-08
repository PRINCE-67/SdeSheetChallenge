#include <bits/stdc++.h>

pair<int, int> missingAndRepeating(vector<int> &arr, int n)
{
    // Write your code here
    long long int  s = (n * (n + 1)) / 2;
    long long int p = (n * (n + 1) * (2 * n + 1)) / 6;
    for (int i = 0; i < n; i++) {
        s -= (long long int)arr[i];
        p -= (long long int)arr[i] * arr[i];
    }
    int m = (s + (p / s)) / 2;
    int r = m - s;
    pair<int, int>v{m, r};
    return v;
}
