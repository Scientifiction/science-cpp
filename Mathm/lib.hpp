#include <vector>
#include <cmath>
class Lib{
    public:
        std::vector<int> factor(int num);
        int A(int m,int n);
        int C(int m,int n);
        int gcd(int a,int b);
        int lcm(int a,int b);
        std::vector<int> range(int end);
        std::vector<int> range(int a,int end);
        std::vector<int> range(int a,int end,int walk);
        //std::vector<int> findprimes(int n);
        double round(double n,int x=0);
        double log(double a,double N);
        double log(double N);
        double pow(double a,double b);
        double root(double a,double b);
};

std::vector<int> Lib::factor(int num){
    if(num==0){
        std::vector<int> res {0};
        return res;
    }
    std::vector<int> v=Lib::range(2,num+1);
    std::vector<int> res {1};
    for(int x:v){
        if(num%x==0) res.push_back(x);
    }
    return res;
}

int Lib::A(int m,int n){
    if(m==1){
        return n;
    }else{
        return n*Lib::A(m-1,n-1);
    }
}

int Lib::C(int m,int n){
    return Lib::A(m,n)/Lib::A(m,m);
}

int Lib::gcd(int a,int b){
    return b?Lib::gcd(b,a%b):a;
}

int Lib::lcm(int a,int b){
    return a*b/Lib::gcd(a,b);
}

std::vector<int> Lib::range(int end){
    std::vector<int> res {0};
    for(int x=1;x<end;x++){
        res.push_back(x);
    }
    return res;
}

std::vector<int> Lib::range(int a,int end){
    std::vector<int> res {a};
    for(int x=a+1;x<end;x++){
        res.push_back(x);
    }
    return res;
}

std::vector<int> Lib::range(int a,int end,int walk){
    std::vector<int> res {a};
    for(int x=a+walk;x<end;x+=walk){
        res.push_back(x);
    }
    return res;
}

double Lib::round(double n,int x){
    int y=n*std::pow(10,x)+0.5;
    return y/std::pow(10,x);
}

double Lib::log(double a,double N){
    return std::log(N)/std::log(a);
}

double Lib::log(double N){
    return std::log(N);
}

double Lib::pow(double a,double b){
    return std::pow(a,b);
}

double Lib::root(double a,double b){
    return std::pow(a,1/b);
}

/*
//Test
template <class S>
void printv(std::vector<S> v);
#include <iostream>
int main(){
    Lib lib;
    printv(lib.factor(30));
    printv(lib.range(3,7,2));
    std::cout<<lib.round(4.2561,2);
    return 0;
}

template <class S>
void printv(std::vector<S> v){
    printf("Printv: [ ");
    for (S x : v) std::cout<<x<<' ';
    printf("] \n");
}*/