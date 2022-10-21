
#include"IStrategy.h"
class Context{
    public:
        void setStrategy(IStrategy *str);
        int doOperations(int a, int b);
    private:
        IStrategy * str;

};

void Context::setStrategy(IStrategy *str){
    this->str = str;
}
int Context::doOperations(int a, int b)
{
    return str->execute(a,b);
}