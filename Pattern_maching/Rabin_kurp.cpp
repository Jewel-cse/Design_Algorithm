#include<bits/stdc++.h>
using namespace std;
void rabin_kurp(string text,string pat){
    int n,m,i,j;
    int maxchar = 256,ht=0,hp=0,h=1;
    int prime = 101;
    m = pat.length();
    n = text.length();
    for(i =0;i<m;i++){
      h = (h*maxchar)% prime;
    }
    for(i =0;i<m;i++){
      ht =(maxchar*ht+text[i])%prime;
      hp =(maxchar*hp+pat[i])%prime;
    }
    cout<<ht<<"   "<<hp;
    for(i = 0;i<=(n-m);i++){
        if(ht == hp){
            for(j=0;j<m;j++){
                if(pat[j]!=text[i+j])
                    break;
            }
            if(j==m)    cout<<"Pattern matched with index :"<<i;
        }
        if(i<(n-m)){
            ht = (maxchar*(ht-text[i]*h)+text[i+m])%prime;
        }
        if(ht<0){
            ht =ht+prime;
        }
    }
}
int main(){
    string text,pat;
    getline(cin,text);
    getline(cin,pat);

    rabin_kurp(text,pat);

    return 0 ;
}
