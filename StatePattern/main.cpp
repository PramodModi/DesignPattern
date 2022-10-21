#include<iostream>

#include"Context.cpp"
# include "State.cpp"

using namespace std;

int main()
{
    
    NoCoinState* initialState = new NoCoinState();
    Context * cnt = new Context(10);
    cnt->setState(initialState);
    cnt->turnCrank();
    cnt->ejectCoin();
    cnt->insertCoin();
    cnt->turnCrank();
    return 1;
}