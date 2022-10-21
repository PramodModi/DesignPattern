# include <iostream>

# include "ConcreteStrategyAdd.cpp"
# include "ConcreteStrategySub.cpp"
# include "Context.cpp"



using namespace std;

int main(){
    Context * cnt = new Context();
    int a = 10;
    int b = 8;

    ConcreteStrategyAdd *addStrategy = new ConcreteStrategyAdd();
    cnt->setStrategy(addStrategy);
    cout << "Add ="<<cnt->doOperations(a,b);
    cout<<endl;
    ConcreteStrategySub *subStrategy = new ConcreteStrategySub();
    cnt->setStrategy(subStrategy);
    cout << "Sub ="<<cnt->doOperations(a,b);

    return 1;
}