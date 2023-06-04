Imagine that you’re creating a logistics management application. 
The first version of your app can only handle transportation by trucks, 
so the bulk of your code lives inside the Truck class.
After a while, your app becomes pretty popular. 
Each day you receive dozens of requests from sea transportation companies to incorporate 
sea logistics into the app.

Solution:
Use Factory method. Based on the logistic(Road Transport or water transport),it will create
a transport(Truck or Sheep).
Client will have same interface to check the status of transport. 
It is easy to extend further for another mode of logistic like Air transport.