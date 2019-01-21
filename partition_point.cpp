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
    auto is_even=[](int i){return i%2;};
    auto point=std::partition_point(a.begin(),a.end(),is_even);
    std::copy(a.begin(),point,std::ostream_iterator<int>(std::cout," "));
    std::cout<<"*";
    std::copy(point,a.end(),std::ostream_iterator<int>(std::cout," "));
}
