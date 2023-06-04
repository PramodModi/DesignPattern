#pragma once
#include<iostream>
# include "ITransport.h"
using namespace std;

class ILogistic{
    public:
        virtual ~ILogistic(){}
        virtual ITransport* createTransport() = 0;
};

template<class trasport>
class Logistic: public ILogistic{
    public:
        virtual ~Logistic(){};
        virtual ITransport* createTransport();
};
