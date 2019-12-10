#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    cout<<"Введите числа"<<endl;
    int a;
    cin>>a;
    if ((a<100)&&(a>9)&&(a%2==0)) {
        cout<<"True"<<endl;
    }
    else {
        cout<<"False"<<endl;
    }
}
