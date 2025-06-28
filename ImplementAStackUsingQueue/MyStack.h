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

	void pushWithoutHelper(int x) {
		data.push(x);
		for (int i = 0; i < data.size() - 1; i++) {
			data.push(data.front());
			data.pop();
		}
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

