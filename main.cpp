#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int zt,n,m; //zt - zestawy testowe
    cin>>zt;
    for(int i=0; i<zt; i++)
    {
        cin>>n>>m; //n - liczba zaproszonych obzartuchow, m - liczba ciastek w jednym pudelku
        float czas[n],zjedzone,suma;
        for(int j=0; j<n; j++)
        {
            cin>>czas[j];
            zjedzone=floor(86400/czas[j]);
            suma=suma+zjedzone;
        }
        cout<<ceil(suma/m)<<endl;

    }

    return 0;
}


