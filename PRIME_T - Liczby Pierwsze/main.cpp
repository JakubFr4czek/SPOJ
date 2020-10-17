#include <iostream>

using namespace std;

bool czyPierwsza(long long a)
{
    if(a==1)
        return false;
    for(long long i=2; i<a; i++)
    {
        if(a%i==0)
        {
            return false;
        }
    } return true;

}

int main()
{
    long long a,n;

    cin>>n;

    bool wynik[n];

    for(long long i=0; i<n; i++)
    {
        cin>>a;
        if(czyPierwsza(a))
            cout<<"TAK\n";
        else
            cout<<"NIE\n";
    }
    return 0;
}
