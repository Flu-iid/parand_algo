#include <iostream>
using namespace std;

int main()
{
    int n, x, tmp;
    cin >> n >> x;
    for (int i = 0; i < n; i++)
    {
        cin >> tmp;
        if (tmp == x)
        {
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
    return 0;
}

// saeid_ahmadi
