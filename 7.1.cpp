#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    cout<<"Введите числа"<<endl;
    float a,b;
    cin>>a>>b;
    if ((a>3)&&(b<=3)) {
        cout<<"True"<<endl;
    }
    else {
        cout<<"False"<<endl;
        return 0;
    }
}
