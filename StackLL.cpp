#include "StackLL.h"
#include <iostream>
#include <stdexcept>//used to be able to "throw" exceptions

using namespace std;


class Stack::Node //self-referential Node class
{
	public:
	   int data = 0;
	   Node* link = nullptr;
	   //link is a data member which is a pointer 
	   //to an object of the same type (i.e. Node)
	
	};//end Node class definition (can only be seen by the List class)


Stack::~Stack()
{
    clear();
}
	
int Stack::size()
 {
    return num_elements;
 }

void Stack::push(int x)
{
	
	Node* newPtr = new Node{x};
	
	if(frontPtr == nullptr)
	{
	  frontPtr = newPtr;
	 }
	else{
		newPtr->link = frontPtr;
		frontPtr = newPtr;
	}

     num_elements++;
 }

void Stack::pop()
{
	
	Node* delPtr = new Node;
	
	if(frontPtr == nullptr){
		//stack is empty
		return;
	}
	
	else{
		
	  delPtr = frontPtr;
	  frontPtr = frontPtr->link;
	}
	
	delete delPtr;
	num_elements--;
	}
	

 int Stack::top(){
	 
	Node* tmpPtr = frontPtr;
	
	if(frontPtr == nullptr){
		//stack is empty
		cout << " Empty Stack" << endl;
		}
		return tmpPtr-> data;
	 }
 
	 
void Stack::clear(){
	while(num_elements != 0){
		pop();
		}
	}
