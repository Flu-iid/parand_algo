#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    cout << ((a > b) ? "Yes" : "No") << endl;
}

//  if you dont feel comfortable using ternary, you can use the code below.
// they are just equal and doesnt make difference in results.

// int main()
// {
//     int a, b;
//     cin >> a >> b;
//     if (a > b)
//         cout << "Yes";
//     else
//         cout << "No";
//     return 0;
// }