#include<iostream>

using namespace std;

int main(){

    int v[5];
    int n=5;

    for(int i=0 ; i<n ; i++){
        cin>>v[i];
    }

    for(int i=0 ; i<n-1; i++) {
        for(int j=i+1 ; j<n ; j++){
            if(v[i]==v[j])
            cout<<v[i];
        }
    }

    return 0;
}