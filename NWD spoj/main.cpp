#include <iostream>

using namespace std;

int NWD(int a, int b)
{
   int c;

   if(a<b)
   {
       c=a;
       for(int i=c; i>0; i--)
       {
           //cout<<c;
           if(b%i==0 && a%i==0)
           {
               cout<<i<<endl;
               return 0;
           }
       }
   }
   else if(b<a)
   {
        c=b;
       for(int i=c; i>0; i--)
       {
           //cout<<c;
           if(b%i==0 && a%i==0)
           {
               cout<<i<<endl;
               return 0;
           }
       }
   }
   else if(b=a)
   {
       cout<<a<<endl;
       return 0;
   }
}

int main()
{
    int a,b,n;

    cin>>n;

    for(int i=0; i<n; i++)
    {
    cin>>a;
    cin>>b;

    NWD(a,b);

    }



    return 0;
}
