#include<iostream>
#include<vector>
using namespace std;

int singleNumber(vector<int>& nums) {
       
       int x=0;

       for(int num : nums ){
           x=x^num;
       }
       return x;
    }

int main(){
    
    vector<int> a ={4,1,2,1,2};

    cout<<singleNumber(a);
}

