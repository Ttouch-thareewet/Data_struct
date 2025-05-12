#ifndef __STUDENT_H_
#define __STUDENT_H_

#include "stack.h"

template <typename T>
void CP::stack<T>::pop() {
	// modify method here
	if(empty()){
		return; 
	}
	if(stack_a.empty()){
		std::stack<T> tmp = stack_b;
		while(!stack_b.empty()){
			tmp.push(stack_b.top());
			stack_b.pop();
		}
		tmp.pop();
		stack_b = tmp;
		return;
	}
	stack_a.pop();
}

template <typename T>
const T& CP::stack<T>::top() {
	// modify method here
	if(empty()){
		return *this;
	}

	int * res = 0;
	if(stack_a.empty()){//return buttom b;
		std::stack<T> tmp = stack_b;
		while(!stack_b.empty()){
			tmp.push(stack_b.top());
			stack_b.pop();
		}
		res = tmp.top();
		while(!tmp.empty()){
			stack_b.push(tmp.top());
			tmp.pop();
		}
		return res;
	}
	return stack_a.top();
}

template <typename T>
const T& CP::stack<T>::bottom() {
	write your code here
	if(empty()){
		return *this;
	}
	int * res = 0;
	if(stack_b.empty()){//return buttom a;
		std::stack<T> tmp = stack_a;
		while(!stack_a.empty()){
			tmp.push(stack_a.top());
			stack_a.pop();
		}
		res = tmp.top();
		while(!tmp.empty()){
			stack_a.push(tmp.top());
			tmp.pop();
		}
		return res;
	}
	return stack_b.top();
}

template <typename T>
void CP::stack<T>::push_bottom(const T& element) {
	// write your code here
	
	stack_b.push(element);
}

template <typename T>
void CP::stack<T>::pop_bottom() {
	// write your code here
	if(empty()){
		return;
	}
	if(stack_b.empty()){
		std::stack<T> tmp=stack_a;
		while(!stack_a.empty()){
			tmp.push(stack_a.top());
			stack_a.pop();
		}
		tmp.pop();
		stack_a = tmp;
		return;
	}
	stack_b.pop();
}
#endif
