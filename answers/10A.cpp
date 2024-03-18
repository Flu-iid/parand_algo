// // string way
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    cin >> s;
    for (char c : s)
    {
        int n = c - '0';
        cout << c << ": " << string(n, c) << endl;
    }
}

// numeric way
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n, length = 0, length_tmp = 0, out_tmp;
    cin >> n;
    length_tmp = n;
    while (length_tmp > 0)
    {
        length++;
        length_tmp /= 10;
    }
    for (int i = length - 1; i >= 0; i--)
    {
        int p = pow(10, i);
        out_tmp = n / p;
        n %= p;
        cout << out_tmp << ": ";
        for (int j = 0; j < out_tmp; j++)
            cout << out_tmp;
        cout << endl;
    }
}

// fateme_darvishi @M_darvishi_f