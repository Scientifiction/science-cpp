#include "lib.hpp"
namespace Mathm{
    std::vector<int> factor(int num){
        return Lib::factor(num);
    }
    int A(int m,int n){
        return Lib::A(m,n);
    }
    int C(int m,int n){
        return Lib::C(m,n);
    }
    int gcd(int a,int b){
        return Lib::gcd(a,b);
    }
    int lcm(int a,int b){
        return Lib::lcm(a,b);
    }
    std::vector<int> range(int end){
        return Lib::range(end);
    }
    std::vector<int> range(int a,int end){
        return Lib::range(a,end);
    }
    std::vector<int> range(int a,int end,int walk){
        return Lib::range(a,end,walk);
    }
    double round(double n,int x=0){
        return Lib::round(n,x);
    }
    double log(double a,double N){
        return Lib::log(a,N);
    }
    double log(double N){
        return Lib::log(N);
    }
    double pow(double a,double b){
        return Lib::pow(a,b);
    }
    double root(double a,double b){
        return Lib::root(a,b);
    }
};

//Test
template <class S>
void printv(std::vector<S> v);
#include <iostream>
int main(){
    printv(Mathm::factor(30));
    printv(Mathm::range(3,7,2));
    std::cout<<Mathm::round(4.2561,2);
    return 0;
}

template <typename S>
void printv(std::vector<S> v){
    printf("Printv: [ ");
    for (S x : v) std::cout<<x<<' ';
    printf("] \n");
}