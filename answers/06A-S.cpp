#include <iostream>
using namespace std;

int main()
{
    int n, x, tmp;
    bool flag = false;
    cin >> n >> x;
    for (int i = 0; i < n; i++)
    {
        cin >> tmp;
        if (tmp == x)
        {
            flag = true;
            break;
        }
    }
    (flag) ? cout << "YES" : cout << "NO";
}