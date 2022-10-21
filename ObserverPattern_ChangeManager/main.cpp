# include<iostream>
# include "Subject.cpp"
# include "Observer.cpp"

using namespace std;

int main(){
    Subject * sub1 = new Subject("Subj1");
    Subject * sub2 = new Subject("Subj2");
    Observer * obj1 = new Observer("Ob1", sub1);
    Observer *obj2 = new Observer("ob2", sub1);
    Observer *obj3 = new Observer("ob3", sub2);
    Observer *obj4 = new Observer("ob4", sub1);
    Observer *obj5 = new Observer("ob5", sub1);
    Observer *obj6 = new Observer("ob6", sub2);

    sub1->notify();
    sub2->notify();

    obj5->unsubscribe();
    sub1->notify();
    sub2->notify();

    delete obj4;

    sub1->notify();
    sub2->notify();

    return 1;
}