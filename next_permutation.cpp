/*
next_permutation is a function in c++ which rearranges the sequence to
the next element lexicogrphically, and returns true if that is possible,
else false
*/
#include<iostream>
#include <algorithm>
#include <vector>
int main(){
    int n,temp;
    bool truth=true;
    std::cin>>n;
    std::vector<int> a(n);
    for(auto& i:a){
        std::cin>>temp;
        i=temp;
    }
    while(truth){
        for(auto& i: a){
            std::cout<<i<<" ";
        }
        std::cout<<'\n';
        truth=std::next_permutation(a.begin(),a.end());
    }
}
