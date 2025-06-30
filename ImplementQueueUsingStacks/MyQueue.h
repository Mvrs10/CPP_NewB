#pragma once
#include <stack>

class MyQueue {
private:
	std::stack<int> data, helper;
	void reverseHelper() {
		if (data.empty()) {
			while (!helper.empty()) {
				data.push(helper.top());
				helper.pop();
			}			
		}
	}
public:
	MyQueue() {}

	void push(int x) {
		helper.push(x);
	}	

	int pop() {
		reverseHelper();
		int front = data.top();
		data.pop();
		return front;
	}

	int peek() {
		reverseHelper();
		return data.top();
	}

	bool empty() {
		return data.empty() && helper.empty();
	}
};