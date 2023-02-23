#include<iostream>
using namespace std;

int setbit(int n){

    int count=0;

    while(n != 0 ){
        if(n&1 == 1) count++;
        n = n>>1;
    }
    return count;
}

int main(){
    int l,r,ans=0;
    cin>>l>>r;

    for(int i=l ; i<=r ; i++){
        if(setbit(i)==3)  ans++;
    }
    cout<<ans;

    
    
    return 0;
}