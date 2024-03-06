#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    int n,m;
    for (int i = 0; i < t; i++) {
        cin >> n>>m;
        if( n>m){
            cout<<"Yes\n";
        }
        else{
            cout<<"No\n";
        }
       
    }
    
    return 0;
}