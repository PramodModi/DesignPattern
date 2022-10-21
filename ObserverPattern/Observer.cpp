# pragma once
# include <iostream>
# include <string>
# include "IObserver.h"
using namespace std;

class Observer: public IObserver{
    public:
        virtual ~Observer();
        Observer(string str, ISubject * sub);
        virtual void update(ISubject *subject);
        void unsubscribe();
    private:
        ISubject * _sub;
        string obName;
};

Observer::~Observer(){
    cout << "Good Bye from Observer : "<<obName<<endl;
    _sub->dettach(this);
}

Observer::Observer(string str, ISubject * sub){
    _sub = sub;
    _sub->attach(this);
    obName = str;
}

void Observer::unsubscribe(){
    cout<<"unsubscribing now from Object : "<<obName<<endl;
    _sub->dettach(this);
}
void Observer::update(ISubject* subject){
    if (_sub == subject){
        cout<<"Message received in Observer = "<<obName <<" : " <<_sub->getStatus()<<endl;
    }
}