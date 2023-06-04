#include<iostream>
# include "Transport.cpp"
# include "Logistic.cpp"
using namespace std;

int main(){
    ILogistic *wtrLogistic = new Logistic<Sheep>();
    ITransport* tr = wtrLogistic->createTransport();
    tr->runTransport();

    ILogistic *rdLogistic = new Logistic<Truck>();
    ITransport* tr1 = rdLogistic->createTransport();
    tr1->runTransport();

    return 1;
}