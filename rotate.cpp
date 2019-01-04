
#include<iostream>
#include <algorithm>
#include <vector>
int main(){
    int n,temp,number_to_be_rotated;
    bool truth=true;
    std::cin>>n;
    std::vector<int> a(n);
    for(auto& i:a){
        std::cin>>temp;
        i=temp;
    }
    std::cout<<"\nYou want to rotate this by?:";
    std::cin>>number_to_be_rotated;
    std::rotate(a.begin(),a.begin()+number_to_be_rotated,a.end());
    for(auto& i:a){
        std::cout<<i<<" ";
    }
}
