#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    cout<<"Введите числа"<<endl;
    float a,b,c;
    cin>>a>>b>>c;
    if ((a<b)&&(b<c)) {
        cout<<"True"<<endl;
    }
    else {
        cout<<"False"<<endl;
        return 0;
    }
}
