#include <iostream>

using namespace std;

int main()
{
    int n,suma=0;
    cout<<"podaj n: ";
    cin>>n;
    for(int i=0;i<=n;i++)
    {
        suma+=i*i;
    }
    cout<<"suma kwadratow liczb od 0 do n = "<<suma;
    return 0;
}
