#include <iostream>
#include <string.h>
#include <bits/stdc++.h>
using namespace std;

bool accept(string s, int n)
{
    string guide = "meow";
    string check;
    for (auto &x : s)
    {
        x = tolower(x);
    } // lowering all char from s
    for (int i = 0; i < n; i++)
    {
        if (i == 0 or s[i - 1] != s[i])
            check += s[i];
    }
    return (guide == check);
}

int main()
{
    int t; // test variable
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        string s; // given string
        int n;    // given length of string
        cin >> n >> s;
        accept(s, n) ? cout << "YES\n" : cout << "NO\n";
    }
}
