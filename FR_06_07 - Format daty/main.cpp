#include <iostream>
#include <cmath>

using namespace std;

int wypiszDate(int dzien, int miesiac, int rok){

    if(miesiac==1&&dzien<=31){
        cout<<dzien<<" stycznia "<<rok<<endl;
    }
    else if(miesiac==2&&dzien<=29){
        cout<<dzien<<" lutego "<<rok<<endl;
    }
    else if(miesiac==3&&dzien<=31){
        cout<<dzien<<" marca "<<rok<<endl;
    }
    else if(miesiac==4&&dzien<=30){
        cout<<dzien<<" kwietnia "<<rok<<endl;
    }
    else if(miesiac==5&&dzien<=31){
        cout<<dzien<<" maja "<<rok<<endl;
    }
    else if(miesiac==6&&dzien<=30){
        cout<<dzien<<" czerwca "<<rok<<endl;
    }
    else if(miesiac==7&&dzien<=31){
        cout<<dzien<<" lipca "<<rok<<endl;
    }
    else if(miesiac==8&&dzien<=31){
        cout<<dzien<<" sierpnia "<<rok<<endl;
    }
    else if(miesiac==9&&dzien<=30){
        cout<<dzien<<" wrzesnia "<<rok<<endl;
    }
    else if(miesiac==10&&dzien<=31){
        cout<<dzien<<" pazdziernika "<<rok<<endl;
    }
    else if(miesiac==11&&dzien<=30){
        cout<<dzien<<" listopada "<<rok<<endl;
    }
    else if(miesiac==12&&dzien<=31){
        cout<<dzien<<" grudnia "<<rok<<endl;
    }
    else{
        cout<<"niepoprawny format daty\n";
    }
    return 0;
}

int poprawnoscDaty(){

    int dzien=0,miesiac=0,rok=0;
    string data;
    cin>>data;

    if(data.length()!=8){
        cout<<"niepoprawny format daty\n";
        return 0;
    }

    dzien+=(data[0]-'0')*10;
    dzien+=(data[1]-'0');

    miesiac+=(data[2]-'0')*10;
    miesiac+=data[3]-'0';

    rok+=(data[4]-'0')*1000;
    rok+=(data[5]-'0')*100;
    rok+=(data[6]-'0')*10;
    rok+=data[7]-'0';

    if(rok<1000||rok>2200){
        cout<<"niepoprawny format daty\n";
        return 0;
    }

    if(miesiac<1||miesiac>12){
        cout<<"niepoprawny format daty\n";
        return 0;
    }

    if(dzien<1){
        cout<<"niepoprawny format daty\n";
        return 0;
    }

    if(miesiac==2&&dzien==29){

        if(rok%4==0){
            if((rok%100==0&&rok%400!=0)){
        cout<<"niepoprawny format daty\n";
        return 0;
            }
        }
        else{
            cout<<"niepoprawny format daty\n";
            return 0;
        }
    }

    wypiszDate(dzien,miesiac,rok);
    return 0;
}



int main()
{

    int n;
    cin>>n;

    for(int i=0; i<n; i++){
        poprawnoscDaty();
    }



    return 0;
}
