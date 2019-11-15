#include<string>
#include <iostream>
using namespace std;
bool naive_maching(string text,string pattern){
        int n = text.size();
        int m = pattern.size();
        int j=0;
        for (int i = 0;i<n;i++){
            for (j = 0;j<m && i+j<n;j++)
                if(text[i+j]!= pattern[j])
                    break;
            if(j==m)    return true;
        }
        if(j!=m)    return false;
}
int main(){
    string x,y;
    getline(cin,x);
    getline(cin,y);
    cout<<"Result is :" <<naive_maching(x,y);
    return 0;
}

