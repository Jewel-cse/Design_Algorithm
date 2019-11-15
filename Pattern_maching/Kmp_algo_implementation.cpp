#include<iostream>
#include<string>
using namespace std;
void kmp(string text, string  pattern){
    // find lps array
    int l = pattern.size();
    int lps[l];
    int index = 0,i;
    for (i =1; i<l;i++){
        if(pattern[index] == pattern[i]){
            lps[i] = index+1;
            index++;
        }
        else{
            if(index!=0){
                index = lps[index-1];
            }
            else{
                lps[i] = 0 ;
            }
        }
    }
    index= 0;
    i =0 ;
    while(i<text.length()){
        if(text[i] == pattern[index]){
            index++;
            i++;
            if(index==l){
            cout<<"Index are "<< i-l<<endl;
            }
        }
        else{
            if(index!=0)  index = lps[index-1];
            else i++;
        }
    }
}
int main(){
    string x,y;
    getline(cin,x);
    getline(cin,y);

    kmp(x,y);

    return 0 ;
}
