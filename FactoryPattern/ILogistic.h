#pragma once
#include<iostream>
# include "ITransport.h"
using namespace std;

class ILogistic{
    public:
        virtual ~ILogistic(){}
        virtual ITransport* createTransport() = 0;
};

class RoadTransport: public ILogistic{
    public:
        virtual ~RoadTransport();
        virtual ITransport* createTransport();
};
class WaterTransport: public ILogistic{
    public:
        virtual ~WaterTransport();
        virtual ITransport* createTransport();
};