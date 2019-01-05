#include<iostream>
#include <algorithm>
#include <vector>
int main(){
    int n,temp,middle_element;
    bool truth=true;
    std::cin>>n;
    std::vector<int> a(n);
    for(auto& i:a){
        std::cin>>temp;
        i=temp;
    }
    std::cin>>middle_element;
    std::inplace_merge(a.begin(),a.begin()+middle_element,a.end());

        for(auto& i: a){
            std::cout<<i<<" ";
        }
        std::cout<<'\n';
}
