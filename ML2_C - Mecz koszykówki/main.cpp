#include <iostream>
#include <cmath>


using namespace std;



long long przypadki(int a)
{

    long b[3]={1,2,4};
    //int sum;
    int j=0;

    if(a==0)
    {
        return 1;
    }
    else if(a==1)
        return b[0];
    else if(a==2)
        return b[1];
    else if(a==3)
        return b[2];
    else
    {


        for(int i=4; i<=a; i++)
        {
            if(j>2)
                j=0;

            b[j]=b[0]+b[1]+b[2];

            //cout<<b[0]<<" "<<b[1]<<" "<<b[2]<<" "<<j<<endl;

            j++;

        }//cout<<b[j-1]<<endl;
        //cout<<endl;

        return b[j-1];

    }

    //cout<<b;
}

int main()
{
    int p1, p2, p3, p4, n;
    long long s,z;
    long g=1000000007;

    cin>>n;

    for(int i=0; i<n; i++)
    {

        cin>>p1;
        cin>>p2;
        cin>>p3;
        cin>>p4;

       // s = przypadki(p1);//cout<<s<<endl;
        //s *= przypadki(p2);//cout<<s<<endl;
        //s *= przypadki(p3);//cout<<s<<endl;
        //s *= przypadki(p4);//cout<<s<<endl;



        //cout<<s<<endl;


        s = 1;
        s = (s*przypadki(p1)) % g;// i = 508086243
        s = (s*przypadki(p2)) % g;    // i = 144702857
        s = (s*przypadki(p3)) % g;    // i = 798848767
        s = (s*przypadki(p4)) % g;    // i = 798848767

        cout<<s <<endl;
       // cout<<s<<endl;

    }

    return 0;
}
