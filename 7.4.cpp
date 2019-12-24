#include <iostream>
using namespace std;
int main()
{
    int x, a, b, c;
    
    cin >> x;
    
    a = x / 100;
    b = x / 10 % 10;
    c = x % 10;
    
    
    if (((c >= b) && (b >= a)) || ((a >= b) && (b >= c)))
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "false" << endl;
    }
    
    return 0;
}
