#pragma once
#include <iostream>
# include "IState.h"
using namespace std;
class Context{
    private:
        IState *_state;
        int _candyCount;
    public:
        Context(int candyCount);
        ~Context();
        void setState(IState* state);
        void insertCoin();
        void ejectCoin();
        void turnCrank();
        void releaseCandy();
        int getCandyCount();
        
};

Context::~Context(){
    if(_state == NULL)
        delete _state;
}

Context::Context(int candyCont){
    this->_candyCount = candyCont;
}

void Context::setState(IState* state){
    if (_state != NULL){
        delete _state;
    }
    _state = state;
    _state->setContext(this);
}
void Context::insertCoin(){
    _state->insertCoin();
}
void Context::ejectCoin(){
    _state->ejectCoin();
}
void Context::turnCrank(){
    _state->turnCrank();
    _state->dispense();

}
void Context::releaseCandy(){
   cout<<"Releasing Candy"<<endl;
    _candyCount -=1;
}
int Context::getCandyCount(){
    return _candyCount;
}
