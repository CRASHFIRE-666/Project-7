
#include <iostream>
using namespace std;
#include <cmath>
int main()
{
    int a, b, c, A, B, C;
    
    cin >> a >> b >> c;
    
    A = sqrt(c * c + b * b);
    B = sqrt(a * a + c * c);
    C = sqrt(a * a + b * b);
    
    if (a == A || b == B || c == C)
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "false" << endl;
    }
    
    return 0;
}
