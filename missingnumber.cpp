#include<iostream>
using namespace std;

int missingNumber(int a[], int N){

    int sum=0;
    int totalsum = N*(N+1)/2;
    int n=N-1;

    for(int i=0 ; i<n ;i++) sum+=a[i] ;


    return (totalsum-sum) ;
}

int main(){

    int a[]={1,2,3,5};

    cout<<missingNumber(a,5);

    

    
    return 0;
}