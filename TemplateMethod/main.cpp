# include<iostream>
#include "Tea.cpp"
# include "Coffy.cpp"

int main(){
    Coffee *c = new Coffee();
    c->beverageRecipe();
    cout<<"Coffee served !!!"<<endl;

    Tea *t = new Tea();
    t->beverageRecipe();
    cout<<"Tea served !!!"<<endl;
    return 1;
}