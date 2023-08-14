#include "lib.hpp"
class Mathm{
    Lib lib;
    public:
        std::vector<int> factor(int num){
            return lib.factor(num);
        }
        int A(int m,int n){
            return lib.A(m,n);
        }
        int C(int m,int n){
            return lib.C(m,n);
        }
        int gcd(int a,int b){
            return lib,gcd(a,b);
        }
        int lcm(int a,int b){
            return lib.lcm(a,b);
        }
        std::vector<int> range(int end){
            return lib.range(end);
        }
        std::vector<int> range(int a,int end){
            return lib.range(a,end);
        }
        std::vector<int> range(int a,int end,int walk){
            return lib.range(a,end,walk);
        }
        double round(double n,int x=0){
            return lib.round(n,x);
        }
        double log(double a,double N){
            return lib.log(a,N);
        }
        double log(double N){
            return lib.log(N);
        }
        double pow(double a,double b){
            return lib.pow(a,b);
        }
        double root(double a,double b){
            return lib.root(a,b);
        }
};

//Test
template <class S>
void printv(std::vector<S> v);
#include <iostream>
int main(){
    Mathm M;
    printv(M.factor(30));
    printv(M.range(3,7,2));
    std::cout<<M.round(4.2561,2);
    return 0;
}

template <typename S>
void printv(std::vector<S> v){
    printf("Printv: [ ");
    for (S x : v) std::cout<<x<<' ';
    printf("] \n");
}