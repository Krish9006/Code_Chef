#include<bits/stdc++.h>
using namespace std;
int maze(int sr,int sc,int er,int ec){
    if(sr>er||sc>ec) return 0;
    if(sr==er&&sc==ec) return 1;
    int rightways=maze(sr,sc+1,er,ec);
    int downways=maze(sr+1,sc,er,ec);
    return rightways+downways;
}
int maze2(int row,int column){
     if(row<1||column<1) return 0;
    if(row==1 && column==1) return 1;
    int rightways=maze2(row,column-1);
    int downways=maze2(row-1,column);
    return rightways+downways;
}
void printPath(int sr,int sc,int er,int ec,string s){
    if(sr>er||sc>ec) return;
    if(sr==er&&sc==ec){
        cout<<s<<endl;
        return;
    }
    printPath(sr,sc+1,er,ec,s+'R');//right
    printPath(sr+1,sc,er,ec,s+'D');//down

}
int main(){
    cout<<maze2(3,3);
}