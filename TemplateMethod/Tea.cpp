# include "Beverage.cpp"

class Tea:public Beverage{
    public:
        virtual ~Tea(){}
        Tea();
    protected:
        virtual void brewCaffein();
        virtual void addCondiments();
        virtual void hook();

};

Tea::Tea(){
    cout<<"Started Tea preparation"<<endl;
}
void Tea::brewCaffein(){
    cout<<"Tea ia being added"<<endl;
}
void Tea::addCondiments(){
    cout<<"Added lemon "<<endl;
}
void Tea::hook(){
    cout<<"Adding Condiments for Tea."<<endl;
}