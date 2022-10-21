
# include <iostream>
# include <unordered_map>
# include<list>

# include "ISubject.h"
# include "IObserver.h"

using namespace std;
class ChangeManager{
    private:
        static ChangeManager* _instance;
        ChangeManager();
        ChangeManager(ChangeManager & obj);
        void operator=(const ChangeManager& obj);
        unordered_map<ISubject*, list<IObserver*> > _listener;


    public:
       static ChangeManager* getInstance();
       void subscribe(ISubject * sub, IObserver* obj);
       void unsubscribe(ISubject* sub, IObserver* obj);
       void notify(ISubject* sub);
       void deleteInstance();
};

ChangeManager* ChangeManager::_instance = NULL;

ChangeManager* ChangeManager::getInstance(){
    if (_instance == NULL){
        _instance = new ChangeManager();
    }
    return _instance;
}

ChangeManager::ChangeManager()
{
    //do nothing
}

void ChangeManager::subscribe(ISubject * sub, IObserver* obj){
    _listener[sub].push_back(obj);
}

void ChangeManager::unsubscribe(ISubject * sub, IObserver* obj){
    _listener[sub].remove(obj);
}

void ChangeManager::notify(ISubject* sub){
    list<IObserver*> objlist  = _listener[sub];
    list<IObserver*> :: iterator it = objlist.begin();
    while(it != objlist.end()){
        (*it)->update(sub);
        ++it;
    }
}
void ChangeManager::deleteInstance(){
    if (_instance != NULL){
        delete _instance;
    }
}
