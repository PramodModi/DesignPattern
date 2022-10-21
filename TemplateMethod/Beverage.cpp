#pragma once
# include <iostream>

using namespace std;

class Beverage{
    public:
        virtual ~Beverage(){}
        //This is a template method
        void beverageRecipe();
    protected:
        void boilWater();
        virtual void brewCaffein() = 0;
        void pourInCup();
        virtual void addCondiments()=0;
        //This is a hook method, default implementation is here, 
        //but can be overriden by subclass

        virtual void hook();
};
void Beverage::beverageRecipe(){
    boilWater();
    brewCaffein();
    pourInCup();
    addCondiments();

}

void Beverage::boilWater(){
    cout<<"Boiling water"<<endl;
}
void Beverage::pourInCup(){
    cout<<"Pouring beverage in cup"<<endl;
    hook();
    
}
void Beverage::hook()
{
    cout<<"Adding Your favourite condiments"<<endl; 
}

     
