#include<iostream>
#include <algorithm>
#include <vector>
int main(){
    int n,temp,nth;
    bool truth=true;
    std::cin>>n;
    std::vector<int> a(n);
    for(auto& i:a){
        std::cin>>temp;
        i=temp;
    }
    std::sort(a.begin(),a.end());
    std::cout<<"enter the number u want to find whose position u want to find in a sorted array";
    std::cin>>nth;
    std::nth_element(a.begin(),a.begin()+nth,a.end());
    std::cout<<a.at(nth);

}
