#pragma once
#include <queue>

class MyStack
{
private:
	std::queue<int> data, helper;
public:
	MyStack() {}

	void push(int x) {
		helper.push(x);
		while (!data.empty()) {
			helper.push(data.front());
			data.pop();
		}
		std::swap(data, helper);
	}

	int pop() {
		int top = data.front();
		data.pop();
		return top;
	}

	int top() {
		return data.front();
	}

	bool empty() {
		return data.empty();
	}
};

