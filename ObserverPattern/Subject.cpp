#pragma once
# include <iostream>
# include <list>
# include <string>
# include "ISubject.h"
using namespace std;

class Subject: public ISubject{
    public: 
        virtual ~ Subject();

        void attach(IObserver * obj);
        void dettach(IObserver * obj);
        virtual void notify();
        virtual string getStatus();
    private:
        list<IObserver*> _observerList;
};

Subject::~Subject()
{
    cout<<"Good Bye from Subject"<<endl;
}

void Subject::attach(IObserver * obj){
    _observerList.push_back(obj);
}
void Subject::dettach(IObserver * obj){
    _observerList.remove(obj);

}

void Subject::notify(){
    list< IObserver *> ::iterator it = _observerList.begin();
    while(it != _observerList.end())
    {
        (*it)->update(this);
        ++ it;
    }
}

string Subject::getStatus(){
    return string("status of Subject");
}
