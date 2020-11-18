#include <iostream>
#include <vector>

using namespace std;

void funkcja(){

    vector <int> dane;
    int n,tmp;

    cin>>n;

    for(int i=0; i<n; i++){

        cin>>tmp;
        dane.push_back(tmp);
    }

    tmp=dane[0];

    for(int i=0; i<dane.size()-1; i++){

        dane[i]=dane[i+1];
    }

    dane[dane.size()-1]=tmp;


    for(int i=0; i<dane.size(); i++){

        cout<<dane[i]<<" ";
    }

    cout<<endl;
    dane.clear();

}

int main()
{
    int n;

    cin>>n;

    for(int i=0; i<n; i++){

        funkcja();

    }

    return 0;
}
