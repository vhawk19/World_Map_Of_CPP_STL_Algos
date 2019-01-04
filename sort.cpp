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
    std::sort(a.begin(),a.end());
    for(auto& i:a){
        std::cout<<i<<" ";
    }
}
