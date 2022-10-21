# pragma once
# include "IObserver.h"
# include<string>
class ISubject{
    public:
        virtual ~ISubject() {}
        virtual void attach(IObserver * obj) = 0;
        virtual void dettach(IObserver * obj) = 0;
        virtual void notify() = 0;
        virtual string getStatus() = 0;
};

