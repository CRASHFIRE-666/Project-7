#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    cout<<"Введите числа"<<endl;
    int a,b,c;
    cin>>a>>b>>c;
    if ((a+b>c)and(a+c>b)and(c+b>a)) {
        cout<<"True"<<endl;
    }
    else {
        cout<<"False"<<endl;
        return 0;
    }
}
