#include <iostream>

using namespace std;

int silnia()
{
   int n;
   long long a=1;
   cin>>n;

   if(n>9)
   {
       cout<<"0 0"<<endl;
       return 0;
   }
   else{
       for(int i=1; i<=n; i++)
            a*=i;

        cout<<a%100/10<<" "<<a%10<<endl;
        return 0;
   }
}


int main()
{

   int n;

   cin>>n;

   for(int i=0; i<n; i++)
   {
        silnia();
   }


    return 0;
}
