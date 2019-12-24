#include <iostream>
using namespace std;
int main()
{
    int x;
    
    cin >> x;
    
    if ((x / 10 > 0) && (x / 10 < 11) && (x % 2 == 0))
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "false" << endl;
    }
    return 0;
}
