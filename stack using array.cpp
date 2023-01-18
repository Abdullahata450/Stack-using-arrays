#include<iostream>
using namespace std;

class Stack{
	public:
		
	int size;
	int top;
	int *arr;
	
	Stack(int data){
		this->size=data;
		arr=new int [size];
		top=-1;
	}
	
	void push( int data){
		if(size>top){
			arr[++top]=data;
		}
		else{
			cout<<"No space in Stack "<<endl;
		}
	}
	void pop(){
		 if(top>=0){
		 	top--;
		 }
		 else{
		 	cout<<"Stack is empty nothing to pop "<<endl;
		 }
	}
	bool Is_empty()
	{
		if(top==-1){
			return true;
		}
		else{
			return false;
		}
	}
	int peek(){
		if(top>=0){
			return arr[top];
		}
		else{
			cout<<"Stack is Empty"<<endl;
			return -1;
		}
	}
};


int main(){
	Stack st(5);
	st.push(10);
	st.push(15);
	st.push(20); 
	
	cout<<"Top element in stack is  "<<st.peek()<<endl;
	st.pop();
	cout<<"After pop "<<endl;

	cout<<"Top element in stack is  "<<st.peek()<<endl;
	
	if(st.Is_empty()){
		cout<<"Stack is empty"<<endl;
	}
	else{
		cout<<"Stack is not empty"<<endl;
	}
}