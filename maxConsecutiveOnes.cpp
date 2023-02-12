#include<iostream>
using namespace std;

int maxConsecutiveOnes( int &N )
{
    int count = 0;
    
    while( N != 0 ) {
        N = N & (N << 1);
        count++ ;
    }
    
    return count ;
}

int main(){
    
    int n = 7;
    
    cout<<maxConsecutiveOnes(n)<<endl;
    
    return 0;
}

// binary rep of 7 = 111
// count = 3
