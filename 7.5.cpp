#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    cout<<"Введите число"<<endl;
    int a1,a2,a;
    cin>>a;
    a1=a/100;
    a2=a%100;
    a2=(a2%10)*10+a2/10;
    if (a1==a2) {
        cout<<"True"<<endl;
    }
    else {
        cout<<"False"<<endl;
        return 0;
    }
}
