#include <iostream>
#include <string>
using namespace std;

int main(int argc, const char * argv[]) {
    string S[10],S2[10],Temp[10];
    int pos,n,iW=0;
    
    while(S[iW-1]!="x"){
        getline(cin,S[iW]);
        iW++;
    };
    for(int iX=0;iX<iW-1;iX++){
        n=count(S[iX].begin(),S[iX].end(),' ');
        
        for(int i=0;i<=n;i++){
            pos=S[iX].find(' ');
            S2[i]=S[iX].substr(0,pos);
            S[iX]= S[iX].substr(pos+1);
        }
        for(int i=0;i<=n;i++){
            for(int i=0;i<=n;i++)
                Temp[i]="";
            for(int i=0;i<=n;i++){
                if(i+1<=n){
                    Temp[i+1]=S2[i];
                }else{
                    Temp[0]=S2[n];
                }
            }
            for(int i=0;i<=n;i++)
                cout<<Temp[i]<<" ";
            for(int i=0;i<=n;i++)
                S2[i]=Temp[i];
            cout<<endl;
        }
    }
    return 0;
}

