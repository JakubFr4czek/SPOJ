#include <iostream>

using namespace std;

void czy_palindrom(int a,int n)
{
    int b=0,c;

    c=a;

    while(a>0)
    {
        //cout<<a%10<<endl;

        b=b*10+a%10;

        a/=10;
    }
    //cout<<b<<endl;

    //cout<<c-b;

    if(c-b==0)
    {
        cout<<c<<" "<<n<<endl;
    }
    else
    {
        czy_palindrom(c+b, n+=1);
    }

}


int main()
{
    int a,n;

    cin>>n;

    for(int i=0; i<n; i++)
    {
            cin>>a;
        czy_palindrom(a,0);
    }


    return 0;
}
