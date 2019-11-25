#include<bits/stdc++.h>
#define sz 50
using namespace std;
int main(){
    int a[sz],i,j,n,key;
    cout<<"enter the number of element :";
    cin>> n;
    //give input element of arry
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    //insertion sort implemented
    for(i =1;i<n;i++){
        key = a[i];
        j=i;
        while(j>0 && a[j]<a[j-1]){
            a[j]=a[j-1];
            a[j-1] = key;
            j--;
        }
    }
    //now array displayed
    for(i=0;i<n;i++){
        cout <<a[i] <<" ";
    }
    return 0;
}
