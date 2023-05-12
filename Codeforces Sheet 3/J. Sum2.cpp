#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t,ans;
	cin>>t;
	string s;
	while(t--){
	    cin>>s;
	    ans=0;
	    for(char ch:s){
	        ans += (ch-'0');
	    }
	    cout<<ans<<endl;
	}
	return 0;
}
