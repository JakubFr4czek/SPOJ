#include <iostream>

using namespace std;

int funkcja()
{
    int tablica[100], s, t;

    for(int i=0; i<100; i++)
    {
        cin>>tablica[i];
        if(getchar()=='\n')
        {
            t=i+1;
            break;
        }
    }
    for(int i=0; i<t/2; i++)
    {
        s=tablica[i];
        tablica[i]=tablica[t-1-i];
        tablica[t-1-i]=s;
    }
    for(int i=0; i<t; i++) //blad w spoju t-1
    {
        cout<<tablica[i]<<" ";
    }
    cout<<endl;
    return 0;

}

int main()
{

    int n;

    cin>>n;


    for(int i=0; i<n; i++)
    {
        funkcja();
    }



    return 0;
}
