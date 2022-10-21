# include "IStrategy.h"

class ConcreteStrategySub: public IStrategy{
    public:
    int execute(int a, int b);
    ~ConcreteStrategySub(){}
};

int ConcreteStrategySub::execute(int a, int b){
    return (a - b);
}