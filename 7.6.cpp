#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    cout<<"Введите число"<<endl;
    int a,b,c;
    cin>>a>>b>>c;
    a*=a;
    b*=b;
    c*=c;
    if ((a+b==c)or(a+c==b)or(c+b==a)) {
        cout<<"True"<<endl;
    }
    else {
        cout<<"False"<<endl;
        return 0;
    }
}
