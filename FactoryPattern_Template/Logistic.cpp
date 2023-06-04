# include "ILogistic.h"
template<class transport>
ITransport* Logistic<transport>::createTransport(){
    return new transport();
}