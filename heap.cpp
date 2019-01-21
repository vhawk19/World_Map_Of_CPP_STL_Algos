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
    a.pop_back();
    a.push_heap(50);
    auto _is_heap=std::is_heap(a.begin(),a.end());
    std::cout<<_is_heap<<std::endl;
            for(auto& i: a){
                std::cout<<i<<" ";
            }
            std::cout<<'\n';
    }
