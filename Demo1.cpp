#include<iostream>
/*
    ostream - cout - used for output
    istream - cin - used for input
*/

struct
int main(){
    std::cout<<"Welcome to KPIT";
    int a,b;
    std::cout<<"\n Enter the Number 1";
    std::cin>>a;
    std::cout<<"\n Enter the Number 2";
    std::cin>>b;
    if(a>b)
        std::cout<<a<<" is max";
    else
         std::cout<<b<<" is max";

    return 0;
}
