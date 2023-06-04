#include<iostream>
#include "Logistic.cpp"
#include "Transport.cpp"
using namespace std;

int main(){
    ILogistic* wtr_logistic = new WaterTransport();
    ITransport *tr1 = wtr_logistic->createTransport();
    tr1->runTransport();
    delete tr1;
    delete wtr_logistic;

    ILogistic* rd_logistic = new RoadTransport();
    ITransport *tr2 = rd_logistic->createTransport();
    tr2->runTransport();
    delete tr2;
    delete rd_logistic;
}