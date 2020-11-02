#include<iostream>
using namespace std ;
#include<climits>
class StackUsingArray {
	int *data ;
	int nextIndex ;
	int capacity ;
	public :
		StackUsingArray(int totalSize){
		data = new int [totalSize];
			nextIndex = 0;
			capacity = totalSize ;
		}
		// return the number of elements 
		int size(){
			return nextIndex;
		}
		// ceccking whether  the array is empty of not
	bool isEmpty(){
		return nextIndex == 0 ;
	}
	//insert the element .
	void push (int element){
		if(nextIndex == capacity){
			cout << "Stack is Full" << endl ;
			return ;
		}
		data[nextIndex] = element ;
		nextIndex ++ ;
	}
	//delete the element from the stack
	int pop (){
		if(isEmpty()){
			cout << "Stack is empty "<< endl ;
			return INT_MIN;
		}
		nextIndex -- ;
		return data[nextIndex];
	}
	int top (){
		if(isEmpty()){
			cout << "Stack is empty "<< endl ;
			return INT_MIN;
		}
		return data[nextIndex-1];
	}
	
};
