#include <iostream>
#include "arrayStack.h"
using namespace std;

int main(){
	ArrayStack<int> stack;

	//push 1-20 on to the stack
	for(int i = 1; i <= 20; i++){
		stack.push(i);
	}

	//print the stack top to bottom
	cout<<"printing out stack of numbers from 1-20"<<endl;
	stack.print();
	
	//lets change the values 10, and 11 to 0 and 0
	stack.changeElemAt(10, 0);
	stack.changeElemAt(9, 0);
	
	cout<<"printing out modified stack of numbers from 1-20, where 9 and 10 are replaced with 0's"<<endl;
	stack.print();

	return 0;

}
