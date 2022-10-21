# include <iostream>
# include "Context.cpp"

using namespace std;

// Implementation of HasCoinState

HasCoinState::HasCoinState()
{
    //do nothing
}

void HasCoinState::insertCoin(){
    cout<<"You have already inserted a coin. Do not enter aother coin"<<endl;
}

void HasCoinState::ejectCoin(){
    cout<<"Your coin is ejecting now"<<endl;
    _context->setState(new NoCoinState());
}
void HasCoinState:: turnCrank(){
    cout<<"You have turned cranck"<<endl;
    _context->setState(new SoldState());
}
void HasCoinState:: dispense(){
    cout<<"No dispese, first turn cranck"<<endl;
}

//Implementation of NoCoinState

void NoCoinState::insertCoin(){
    cout<<"You inserted a coin"<<endl;
    _context->setState(new HasCoinState());
}

void NoCoinState::ejectCoin(){
    cout<<"You have not inserted coin yet, so cannot eject a coin"<<endl;
}
void NoCoinState:: turnCrank(){
    cout<<"You have turned cranck without inserting coin"<<endl;
}
void NoCoinState:: dispense(){
    cout<<"You need to insert coin to dispense candy"<<endl;
}

//Implementation of NoCandyState


NoCandyState::NoCandyState(){

}

void NoCandyState::insertCoin(){
    cout<<"No candy in the machine, so can not insert a coin"<<endl;
}

void NoCandyState::ejectCoin(){
    cout<<"No candy in the machine, so you can not insert and eject a coin"<<endl;
}
void NoCandyState:: turnCrank(){
    cout<<"No candy in the machine, so you can not turn crank"<<endl;
}
void NoCandyState:: dispense(){
    cout<<"No candy in the machine, so can not disoense"<<endl;
    
}

// Implementation of SoldState

SoldState::SoldState()
{
    //Do nothing
}

void SoldState::insertCoin(){
    cout<<"Do not insert an coin, relax and Wait for candy"<<endl;
}

void SoldState::ejectCoin(){
    cout<<"You have already turned cranck, so can not eject a coin"<<endl;
}
void SoldState:: turnCrank(){
    cout<<"You are turning the crank again."<<endl;
}
void SoldState:: dispense(){
    if (_context->getCandyCount() > 0){
        _context->setState(new NoCoinState());
        _context->releaseCandy();
    }
    else{
        cout<<"oops !!! No candy"<<endl;
        _context->setState(new NoCandyState());
    }
    
}