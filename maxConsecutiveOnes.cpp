#include<iostream>
using namespace std;

int maxConsecutiveOnes( int &N )
{
    int count = 0;
    
    while( N != 0 ) {
        N = N << 1;
        count++ ;
    }
    
    return count ;
}

int main(){
    
    int n = 10111001;
    
    cout<<maxConsecutiveOnes(n)<<endl;
    
    return 0;
}
