// Modulus for (-)ve or (+)ve number
#include<iostream>
using namespace std;
int main(){
    int n,m,x,i,cnt=0;
  do{
    cout << "enter the number :"<<endl;
    cin >> n ;
    cout << "enter the modiulo:" << endl;
    cin >> m ;

    x = n;
    //if n is negative
    if(n<0){
        i = 1;
        do{
            x = n+(i*m);
            i++;
        }while(x<1);

    }
    //cout << x << endl;
    x = x%m;
    cout << "The modiulo is : "<<x;
    cout <<"\n\n";
  }while(++cnt<5); // for 5 test ;
}
