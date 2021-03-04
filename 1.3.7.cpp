#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float a,b,c,delta,x1,x2;
    cout<<"Podaj wspolczynniki rownania kwadratowego: ";
    cin>>a>>b>>c;

    delta=b*b-(4*a*c);
    cout<<delta<<endl;
    if(delta<0) cout<<"brak rozwiazan"<<endl;
    else if (delta==0)
    {
        x1=-b/(2*a);
        cout<<"1 rozwiazanie: "<<x1<<endl;
    }
    else
    {
        x1=(-b-sqrt(delta))/(2*a);
        x2=(-b+sqrt(delta))/(2*a);
        cout<<"2 rozwiazania: "<<x1<<" oraz "<<x2<<endl;
    }
    return 0;
}
