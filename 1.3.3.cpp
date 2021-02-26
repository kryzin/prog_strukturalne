#include <iostream>

using namespace std;

int main()
{
    int a,b,c;
    cout<<"podaj 3 liczby: ";
    cin>>a>>b>>c;
    cout<<"najwieksza liczba to: ";
    if(a>=b && a>=c) cout<<a<<endl;
    else if(b>=a && b>=c) cout<<b<<endl;
    else cout<<c<<endl;

    return 0;
}
