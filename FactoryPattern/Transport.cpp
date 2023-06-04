# include "ITransport.h"
//Implement Truck class
Truck::Truck(){
    cout<<"Truck is getting created\n";
}
Truck:: ~Truck(){
    cout<<"Releasing Truck"<<endl;
}
void Truck::runTransport(){
    cout<<"Truck is running\n";
}

//Implement Sheep class
Sheep::Sheep(){
    cout<<"Sheep is getting created\n";
}
Sheep:: ~Sheep(){
    cout<<"Releasing Sheep"<<endl;
}
void Sheep::runTransport(){
    cout<<"Sheep is running\n";
}