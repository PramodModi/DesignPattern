#pragma once
# include <iostream>
# include <list>
# include <string>
# include "ISubject.h"
# include "ChangeManager.cpp"

using namespace std;

class Subject: public ISubject{
    public: 
        virtual ~ Subject();

        virtual void attach(IObserver * obj);
        virtual void dettach(IObserver * obj);
        virtual void notify();
        virtual string getStatus();
        Subject(string str);
        
    private:
        ChangeManager * mgr;
        string name;
        
        
};

Subject::~Subject()
{
    cout<<"Good Bye from Subject : "<<name<<endl;
}

Subject::Subject(string str){
    mgr = ChangeManager::getInstance();
    name = str;
}

void Subject::attach(IObserver * obj){
    mgr->subscribe(this, obj);
}
void Subject::dettach(IObserver * obj){
    mgr->unsubscribe(this, obj);

}

void Subject::notify(){
    mgr->notify(this);
}

string Subject::getStatus(){
    return string("status of Subject from : " + name);
}
