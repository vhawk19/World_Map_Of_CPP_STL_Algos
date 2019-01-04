
#include<iostream>
#include <algorithm>
#include <vector>
int main(){
    int n,temp,number_to_be_reversed;
    bool truth=true;
    std::cin>>n;
    std::vector<int> a(n);
    for(auto& i:a){
        std::cin>>temp;
        i=temp;
    }
    std::cout<<"\nYou want to reverse this till?:";
    std::cin>>number_to_be_reversed;
    std::reverse(a.begin(),a.begin()+number_to_be_reversed);
    for(auto& i:a){
        std::cout<<i<<" ";
    }
}
