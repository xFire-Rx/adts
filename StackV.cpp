#include "StackV.h"

int Stack::size(){
	return data.size();
}

void Stack::push(int x)
{
	data.push_back(x);
 }

void Stack::pop()
{
	data.pop_back();
}
	

 int Stack::top(){
	
	auto x = data.size()-1;//index number at the top
	return data[x];
	 }
	 
 
	 
void Stack::clear(){
	
	while(data.size() != 0){
		data.pop_back();
	}
}
