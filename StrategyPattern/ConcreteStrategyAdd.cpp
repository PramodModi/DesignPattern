# include "IStrategy.h"
class ConcreteStrategyAdd: public IStrategy{
    public:
        int execute(int a, int b);
        ~ConcreteStrategyAdd(){}
};

int ConcreteStrategyAdd::execute(int a, int b){
    return a + b;
}