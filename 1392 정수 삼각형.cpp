#include<iostream>
using namespace std;
 
int dp[501][501];
int n=0;
int k=0;
int Max=0;
 
int max(int a,int b) {
    return (a > b) ? a : b;
}
 
int main() { 
    dp[0][1] = 0;
    cin >> n; 
    for (int i = 1; i < n+1; i++) {
        for (int j = 1; j <= i; j++) {          
            cin >> k;
            dp[i][j] = k;      
            if (j == 1) {    
                dp[i][j] += dp[i-1][j];       
            } else if (j == i) {         
                dp[i][j] += dp[i-1][j-1];
            } else {        
                dp[i][j] = max(dp[i][j] + dp[i-1][j-1], dp[i][j] + dp[i-1][j]);             
            }           
            if (Max < dp[i][j]) {
                Max = dp[i][j];
            }
        }
    }
    cout << Max;
    return 0;
}
