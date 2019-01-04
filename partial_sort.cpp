#include<iostream>
#include <algorithm>
#include <vector>
int main(){
    int n,temp,till;
    bool truth=true;
    std::cin>>n;
    std::vector<int> a(n);
    for(auto& i:a){
        std::cin>>temp;
        i=temp;
    }
    std::sort(a.begin(),a.end());
    std::cout<<"enter till where do you want to sort the array";
    std::cin>>till;
    std::partial_sort(a.begin(),a.begin()+till,a.end());
    for(auto& i:a){
        std::cout<<i<<" ";
    }
}
