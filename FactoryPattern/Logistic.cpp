# include"ILogistic.h"

//Implement RoadTransport

RoadTransport::~RoadTransport(){
    cout<<"Releasing Road Transport\n";
}
ITransport* RoadTransport::createTransport(){
    return new Truck();
}

//Implement Water Transport

WaterTransport::~WaterTransport(){
    cout<<"Releasing water transport"<<endl;
}
ITransport* WaterTransport::createTransport(){
    return new Sheep();
}
