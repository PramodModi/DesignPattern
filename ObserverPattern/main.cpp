# include<iostream>
# include "Subject.cpp"
# include "Observer.cpp"

using namespace std;

int main(){
    Subject * sub = new Subject();
    Observer * obj1 = new Observer("Ob1", sub);
    Observer *obj2 = new Observer("ob2", sub);
    Observer *obj3 = new Observer("ob3", sub);
    Observer *obj4 = new Observer("ob4", sub);
    Observer *obj5 = new Observer("ob5", sub);

    sub->notify();

    obj5->unsubscribe();
    sub->notify();

    delete obj4;

    sub->notify();

    return 1;
}