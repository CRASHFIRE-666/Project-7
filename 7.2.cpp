#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    
    cin >> a >> b >> c;
    
    if (c > b && b > a)
    {
        cout << "true" << endl;
        
    }
    else
    {
        cout << "false" << endl;
    }
    return 0;
}
