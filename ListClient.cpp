#include <iostream>
#include "List.h"

using namespace std;

int main()
{

 List L1, L2;
 
 L1.insert(10,1);
 L1.insert(0,2);
 L1.insert(1,3);
 L2.insert(156,1);
 L2.insert(100,2);
 L2.insert(130,3);
 L1.size();
 L1.display();
 L2.display();
 L1.remove(1);
 L1.getAt(2);
 L1.display();
 
 

 //Do some stuff with L1, L2, ...
 // ...

}
