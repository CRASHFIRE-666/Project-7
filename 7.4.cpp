#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    cout<<"Введите число"<<endl;
    int a1,a2,a3,a;
    cin>>a;
    a1=a/100;
    a2=(a%100)/10;
    a3=a%10;
    if ( ((a1>a2)&&(a2>a3)) or ((a1<a2)&&(a2<a3)) ) {
        cout<<"True"<<endl;
    }
    else {
        cout<<"False"<<endl;
        return 0;
    }
}
