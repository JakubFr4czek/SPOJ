#include <iostream>
#include <cmath>

using namespace std;

struct punkty
{
    string literka;
    int x;
    int y;
    int b;
};



int funkcja(int n)
{
    punkty *pts = new punkty[n+1];

    int x,y;
    float b;
    string a;

    //cin>>n;

    for(int i=0; i<n; i++)
    {
        cin>>a;
        cin>>x;
        cin>>y;

        b=pow(abs(x),2)+pow(abs(y),2); //nie trzeba liczyc pierwiastka

        //cout<<b;

        pts[i].literka=a;
        pts[i].x=x;
        pts[i].y=y;
        pts[i].b=b;


    }


    for(int j=0; j<n; j++)
    {

        for(int i=n-1; i>0; i--)
        {


            if(pts[i-1].b>pts[i].b)
            {




                pts[n]=pts[i];



                pts[i]=pts[i-1];



                pts[i-1]=pts[n];


            }
        }
    }
        for(int i=0; i<n; i++)
        {
            cout<<pts[i].literka<<" ";
            cout<<pts[i].x<<" ";
            cout<<pts[i].y<<endl;
            //cout<<pts[i].b<<endl;
        }
            delete[] pts;
    return 0;
}

int main()
{

    int a,n;

    cin>>n;

    for(int i=0; i<n; i++)
    {
        cin>>a;
        funkcja(a);
        //cout<<endl;
    }


    return 0;
}

