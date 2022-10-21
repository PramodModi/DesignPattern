# pragma once

#include <iostream>

class Context;
using namespace std;
class IState{
    public:
        virtual ~IState(){}
        void setContext(Context* context)
        {
            this->_context = context;
        }
        virtual void insertCoin()=0;
        virtual void ejectCoin()=0;
        virtual void turnCrank()=0;
        virtual void dispense()=0;
    protected:
        Context* _context;
};

class NoCandyState:public IState{
    public:
        virtual ~NoCandyState(){}
        NoCandyState();
        virtual void insertCoin();
        virtual void ejectCoin();
        virtual void turnCrank();
        virtual void dispense();


};

class NoCoinState:public IState{
    public:
        virtual ~NoCoinState(){}
        virtual void insertCoin();
        virtual void ejectCoin();
        virtual void turnCrank();
        virtual void dispense();

};

class HasCoinState:public IState{
    public:
        virtual ~HasCoinState(){}
        HasCoinState();
        virtual void insertCoin();
        virtual void ejectCoin();
        virtual void turnCrank();
        virtual void dispense();

};

class SoldState:public IState{
    public:
        virtual ~SoldState(){}
        SoldState();
        virtual void insertCoin();
        virtual void ejectCoin();
        virtual void turnCrank();
        virtual void dispense();

};
