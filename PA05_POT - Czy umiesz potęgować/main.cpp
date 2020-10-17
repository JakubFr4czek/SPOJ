#include <iostream>

using namespace std;


int fun()
{
    long a,b;

    cin>>a;
    cin>>b;

        a=a%10;

        //cout<<a<<endl;

        if(b==0)
        {
            cout<<"1"<<endl;
            return 0;
        }

        //cout<<(b%4)<<endl;

        switch(b%4)
        {
            case 1:
            a=a;
            break;

            case 2:
            a*=a;
            break;

            case 3:
            a*=a*a;
            break;

            case 0:
            a*=a*a*a;
            break;


        }


        cout<<a%10<<endl;
        return 0;

}

int main()
{
   int n;

   cin>>n;

   for(int i=0; i<n; i++)
   {
        fun();
   }





    /*1 - 1
    2 - 2 4 6 8
    3 - 3 9 7 1
    4 - 4 6
    5 - 5
    6 - 6
    7 - 7 9 3 1
    8 - 8 4 2 6
    9 - 1 9
    10 - 0
*/

    return 0;
}
