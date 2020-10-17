 #include <iostream>
 #include <cstring>

 using namespace std;

 #define T_SIZE 1001

 char* string_merge(char *, char *);

 char* c;

 int main()
 {
    int t,n;
    char S1[T_SIZE], S2[T_SIZE], *S;
    cin >> t; /* wczytaj liczbê testów */
    cin.getline(S1,T_SIZE);

    while(t)
        {
            cin.getline(S1,T_SIZE,' ');
            cin.getline(S2,T_SIZE);
            S=string_merge(S1,S2);
            cout << S << endl;

            delete[] S,c;
            //delete[] c;
            t--;
        }

    return 0; }

    char* string_merge(char *a, char *b)
 {
     int j=0,len=0;

     if(strlen(a)>=strlen(b))
     {
         len = strlen(b);
     }
     else if(strlen(a)<strlen(b))
     {
         len = strlen(a);
     }

     c = new char;

     for(int i=0; i<len; i++)
     {
        c[j]=a[i];
        c[j+1]=b[i];
        c[j+2]='\0';
        j+=2;

     }


     return c;
        //cout<<c;


 }
