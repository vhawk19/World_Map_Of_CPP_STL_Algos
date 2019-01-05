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
    std::make_heap(a.begin(),a.end());
    std::sort_heap(a.begin(),a.end());

            for(auto& i: a){
                std::cout<<i<<" ";
            }
            std::cout<<'\n';
    }
