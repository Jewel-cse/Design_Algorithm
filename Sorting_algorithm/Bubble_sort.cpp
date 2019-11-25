#include<bits/stdc++.h>
#define sz 50
int a[sz];
using namespace std;
//implementation of bubble sort algorithm
void bubble_sort(int a[],int n){
    int r,c,temp;
    for(r=0;r<n;r++){
        for(c=1;c<n-r;c++){
            if(a[c]<a[c-1]){
                temp = a[c];
                a[c] = a[c-1];
                a[c-1] = temp;
            }
        }
    }
}
//print the sorted array
void display(int n){
    int j;
    for(j =0;j<n;j++)
        cout << a[j] << ' ';
}
//driver code
int main(){
    int i,n;
    cout<<"enter the number of element :";
    cin>> n;
    //give input element of arry
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    bubble_sort(a,n);
    display(n);

    return 0;
}
