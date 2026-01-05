#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    long long n;
    cin>>n;
    long long arr[n],sum=0;
    long long actualSum=(n*(n+1))/2;
    for(int i=0;i<n-1;i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    cout<<actualSum-sum;
}
 
