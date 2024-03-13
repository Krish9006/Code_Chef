#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t,x,y;
	cin>>t;
	for(int i=0;i<t;i++){
	    cin>>x>>y;
	    if(x<50) cout<<"z\n";
	    else if(y<50) cout<<"F\n";
	    else cout<<"A\n";
	}

}