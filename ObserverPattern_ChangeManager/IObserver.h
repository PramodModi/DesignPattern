#pragma once

# include <string>
using namespace std;
class ISubject;
class IObserver{
    public:
        virtual ~IObserver(){}
        virtual void update(ISubject *subject) = 0;
};