#include <bits/stdc++.h>
using namespace std;
int main(){
    map<int,int> mp;

    int sum=0;
    mp[1]=3;
    mp[2]=3;
    mp[3]=5;
    mp[4]=4;
    mp[5]=4;
    mp[6]=3;
    mp[7]=5;
    mp[8]=5;
    mp[9]=4;
    mp[10]=3;
    mp[20]=6;
    mp[30]=6;
    mp[40]=6;
    mp[50]=5;
    mp[60]=5;
    mp[70]=9;
    mp[80]=6;
    mp[90]=7;
    mp[100]=7;
    sum+=(3+11);
    for(int i=2;i<=999;i++){
        if(mp[i])
        sum+=mp[i];
    }
    cout<<sum<<endl;

}