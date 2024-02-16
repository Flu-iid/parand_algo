// 1
#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    if (a > 0 && a < 180 && b > 0 && b < 180 && c > 0 && c < 180 && a + b + c == 180)
        cout << "Yes";
    else
        cout << "No";

    return 0;
}