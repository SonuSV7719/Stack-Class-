#include<iostream>
#include<string>
#define MAX 100
using namespace std;

template <typename T>
class stack
{
	T stackArr[MAX];
	int top;
	public:
	stack(){
		top = -1;
	}
	bool isFull();
	bool isEmpty();
	void push(T data);
	void pop();
	int topPos();
	T operator [](int index);	
};

template <typename T>
int stack<T>::topPos()
{
	return top;
}

template <typename T>
T stack<T>::operator [](int index)
{
	return stackArr[index];
}

template <typename T>
bool stack<T>::isFull()
{
	if (top>=MAX)
		return 1;
	else
		return 0;
	
}

template <typename T>
bool stack<T>::isEmpty()
{
	if (top==-1)
		return 1;
	else
		return 0;	
}

template <typename T>
void stack<T>::push(T data)
{
	if (isFull())
		cout<<"Stack is Full"<<endl;
	else
	{
		top++;
		stackArr[top] = data;
		
	}
}

template <typename T>
void stack<T>::pop() {
   if(isEmpty())
   cout<<"Stack empty"<<endl;
   else {
      	cout<<"The popped element is "<< stackArr[top] <<endl;
    	top--;
   }
}
