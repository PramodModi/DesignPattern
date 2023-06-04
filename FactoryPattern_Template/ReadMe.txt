In Factory method, you need to create as many creator class as many Product.
E.g. in earlier Factory method, There are two products: Truck and Sheep.
So, we had to create two concrete creator classes, waterLogistic and RoadLogisitc.

To avoid creating many creator classes, we can use Template.
Concrete creator class will have template placeholder for product.
You pass the Product class name while creating the concrete creator object.
Look at the code for more details.