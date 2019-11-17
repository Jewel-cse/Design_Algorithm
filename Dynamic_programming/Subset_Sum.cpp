#include<iostream>
using namespace std;
bool subsetsum_DP(int a[],int n, int sum){
        bool dp[n+1][sum+1];
        int i,j;
        // create the subset table
        for(i=0;i<=n;i++)   // n--> column
            dp[i][0]=true;  // o'th column are all element is true

        for(j=1;j<=sum;j++)  // sum -->row
            dp[0][j]=false;  // o'th row are all element are false

        for(j=1;j<=sum;j++){
            for(i=1;i<=n;i++){
                if (j < a[i]){               // we cannot use A[i]
                dp[i][j] = dp[i-1][j];
                }
                else {                       // we can use A[i]
                dp[i][j] = dp[i-1][j-1] || dp[i-1][j-a[i]];
                }
            }
        }
        // Display the table
        cout << "\n\n\n";
        cout << "Print table :\n\n";

        for (int i=0; i<=n; i++) {
            for (int j=0; j<=sum; j++) {
                cout << dp[i][j] << "\t";
            }
            cout << "\n";
        }
        cout << "\n\n\n";

        //find the element of subset
        cout<<"The subset is : ";
        for(i = n;i>0;i--){
            if(dp[i-1][sum]==true){
                continue;
            }
            else{
                cout<<a[i]<<"\t";
                sum=sum-a[i];
            }
        }
}
int main()
{
    int i, n, sum;
    cout << "Enter the number of elements in the set" << endl;
    cin >> n;
    int a[n+1];
    cout << "Enter the values" << endl;
    a[0]=0;
    for(i=1;i<=n;i++)
      cin>>a[i];
    cout << "Enter the value of sum" << endl;
    cin >> sum;
    subsetsum_DP(a, n, sum);
    return 0;
}



