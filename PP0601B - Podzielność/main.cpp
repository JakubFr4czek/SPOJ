#include <iostream>

using namespace std;

void funkcja()
{
    int n,x,y;

    cin>>n>>x>>y;

    for(int i=1; i<n; i++)
    {
        if(i%x==0&&i%y!=0)
            cout<<i<<" ";
    }cout<<endl;

}

int main()
{
    int n;
    cin>>n;

    for(int i=0; i<n;i++)
    {
        funkcja();
    }
    return 0;
}
