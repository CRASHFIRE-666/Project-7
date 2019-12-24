#include <iostream>
using namespace std;
int main()
{
    int x, a, b, c, d;
    
    cin >> x;
    
    a = x / 1000;
    b = x / 100 % 10;
    c = x / 10 % 10;
    d = x % 10;
    
    if (a == d && b == c)
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "false" << endl;
    }
    
    return 0;
}
