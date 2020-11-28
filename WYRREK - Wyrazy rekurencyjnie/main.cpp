#include <iostream>
#include <vector>

using namespace std;

vector<string> a;

void wyp(int c){

    if(c>0){
        cout<<a[c]<<endl;
        wyp(--c);
    }

}

void odw(string b,int c){

    a.push_back(b);
    if(cin>>b)
        odw(b,++c);
    else
        wyp(c);
}



int main()
{

    odw("",0);

    return 0;
}
