#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    string s;
    cin>>s;
    int count=1,c=1;
    for(int i=1;i<s.length();i++){
        if(s[i]==s[i-1]) {
            count++;
        }
        else count=1;
        c=max(c,count);
    }
    cout<<c<<endl;
}
