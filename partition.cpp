#include<iterator>
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
    auto it=std::partition(a.begin(),a.end(),[](int i){return i%2==0;});
    std::copy(a.begin(),it,std::ostream_iterator<int>(std::cout," "));
    std::cout<<"*";
    std::copy(it,a.end(),std::ostream_iterator<int>(std::cout," "));
}
