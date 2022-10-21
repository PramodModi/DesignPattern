# include "Beverage.cpp"

class Coffee:public Beverage{
    public:
        virtual ~Coffee(){}
        Coffee();
    protected:
        virtual void brewCaffein();
        virtual void addCondiments();

};
Coffee::Coffee(){
    cout<<"Started Coffee preparation"<<endl;
}
void Coffee::brewCaffein(){
    cout<<"Coffee ia being added"<<endl;
}
void Coffee::addCondiments(){
    cout<<"Added Milk "<<endl;
}
