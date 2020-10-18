#include <iostream>

using namespace std;

int main()
{
    int a,mem[3]={42,42,0};
    bool c=false;

    while(cin>>a)
    {
        cout<<a<<endl;
        mem[0]=mem[1];
        mem[1]=a;
        if(mem[0]!=42&&mem[1]==42)
            mem[2]+=1;
        if(mem[2]==3)
            break;

        c=!c;

        //cout<<mem[0]<<" "<<mem[1]<<" "<<mem[2]<<endl;

    }

    return 0;
}
