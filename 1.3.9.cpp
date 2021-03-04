#include <iostream>

using namespace std;

int main()
{
    float a,b;
    char znak;
    cout<<"kalkulator: podaj dwie liczby: ";
    cin>>a>>b;
    cout<<"podaj znak dzialania: ";
    cin>>znak;
    if(znak=='+') cout<<"wynik = "<<a+b<<endl;
    else if(znak=='-') cout<<"wynik = "<<a-b<<endl;
    else if(znak=='/') cout<<"wynik = "<<a/b<<endl;
    else if(znak=='*') cout<<"wynik = "<<a*b<<endl;
    else cout<<"blad dzialania"<<endl;

    return 0;
}
