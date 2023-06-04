#pragma once
#include <iostream>
using namespace std;

class ITransport{
    public:
        virtual ~ITransport(){}
        virtual void runTransport() = 0;

};

class Truck :public ITransport{
    public:
        Truck();
        virtual ~Truck();
        virtual void runTransport();

};

class Sheep :public ITransport{
    public:
        Sheep();
        virtual ~Sheep();
        virtual void runTransport();

};