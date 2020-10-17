#include <iostream>

using namespace std;

void Skarbfinder()
{
    int a,b,c,d[4]={0,0,0,0}; //a - liczba par, b - kierunek, c - liczba kroków, d - wynik

    /*
        0 - pó³noc
        1 - po³udnie
        2 - zachód
        3 - wschód
    */

    cin>>a;

    for(int i=0; i<a; i++)
    {
        cin>>b;
        cin>>c;

        d[b]+=c;

    }

    if(d[0]>=d[1])
    {
        d[0]-=d[1];
        d[1]=0;
    }

    else
    {
        d[1]-=d[0];
        d[0]=0;
    }


    if(d[2]>=d[3])
    {
        d[2]-=d[3];
        d[3]=0;
    }
    else
    {
        d[3]-=d[2];
        d[2]=0;
    }


    //cout<<"0 "<<d[0]<<endl;
    //cout<<"1 "<<d[1]<<endl;
    //cout<<"2 "<<d[2]<<endl;
    //cout<<"3 "<<d[3]<<endl;

    int kontrolka=0;
    for(int i=0; i<4; i++)
    {
        if(d[i]!=0)
        {
            cout<<i<<" "<<d[i]<<endl;
            kontrolka++;
        }
    }
    if(kontrolka==0)
    {
        cout<<"studnia"<<endl;
    }

}


int main()
{
    int n;

    cin>>n;

    for(int i=0; i<n; i++)
    {
        Skarbfinder();
    }



    return 0;
}
