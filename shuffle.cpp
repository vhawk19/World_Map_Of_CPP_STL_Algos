
#include<iostream>
#include <algorithm>
#include <vector>
#include <random>
#include <chrono>

int main(){
    int n,temp;
    bool truth=true;
    std::cin>>n;
    std::vector<int> a(n);
    for(auto& i:a){
        std::cin>>temp;
        i=temp;
    }
    std::random_device rd;
    std::mt19937 psdrg(rd());
    shuffle(a.begin(),a.end(),psdrg);
    for(auto& i:a){
        std::cout<<i<<" ";
    }
}
