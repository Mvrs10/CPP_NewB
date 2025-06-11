#include "ClassWork_COMP217_Week6_MKP.h";
#include <vector>
#include <array>
#include <list>
#include <deque>
#include <map>
#include <set>
#include<unordered_map>
#include<unordered_set>
#include <iostream>
#include <iterator>
#include <algorithm>
#include <numeric>

using namespace std;
int ClassWork_COMP217_Week6_MKP() {
	// TODO
	// Containers
	std::list<int> lint = { 1, 2, 3, 4, 5 };
	std::list<int> lint2;
	lint2 = lint;
	std::list<int> lint3 = std::move(lint);

	std::map<int, std::string> mis;
	mis[2] = "Two";
	mis[0] = "Zero";
	mis[1] = "One";
	mis[3] = "Three";

	cout << "Order map std::map." << endl;
	for (auto kv : mis) {
		cout << "MIS key: " << kv.first << " - MIS value: " << kv.second << endl;
	}
	cout << endl;

	std::unordered_map<int, std::string> umis;
	umis[-1] = "Minus One";
	umis[1] = "One";
	umis[0] = "Zero";
	umis[3] = "Three";
	umis[2] = "Two";
	umis[1] = "One RE_assigned";

	cout << "Unordered map std::unordered_map" << endl;
	for (auto kv : umis) {
		cout << "UMIS key: " << kv.first << " - UMIS value: " << kv.second << endl;
	}
	cout << endl;

	// Iterators
	vector<int> samples{ 1,2,3,4,5,6,7,8,9 };
	// Iterator in a loop
	for (std::vector<int>::iterator it = samples.begin(); it < samples.end(); it++) {
		cout << *it << " | ";
	}
	cout << endl;
	// Reverse iterator in a loop
	for (std::vector<int>::reverse_iterator rit = samples.rbegin(); rit < samples.rend(); rit++) {
		cout << *rit << " | ";
	}
	// Const iterator
	for (std::vector<int>::const_iterator cit = samples.begin(); cit < samples.end(); cit++) {
		//*cit = 10; // Compiler error - cannot modify
		break;
	}
	cout << endl;
	// Map iterator
	for (std::unordered_map<int, std::string>::iterator mit = umis.begin(); mit != umis.end(); mit++) {
		cout << "Key: " << mit->first << " | Value: " << mit->second << endl;
	}
	// Using std::copy
	cout <<  endl << endl << "Using std::copy" << endl;
	vector<int> integers{ samples.cbegin(), samples.cend() };
	std::ostream_iterator<int> outputItr{ cout, " " };
	cout << "Vector integers has: ";
	std::copy(integers.cbegin(), integers.cend(), outputItr);
	integers[0] = 11;
	integers.at(1) = 12;
	integers.insert(integers.cbegin() + 2, 13);
	cout << endl << "First element: " << integers.front() << "- Last element: " << integers.back() << endl;
	cout << "Modified integers has: ";
	std::copy(integers.cbegin(), integers.cend(), outputItr);
	cout << endl;
	// Algorithms
	// Sorting
	cout << endl << "<algorithm> header" << endl;
	cout << endl << "Sorted integers: ";
	std::sort(integers.begin(), integers.end());
	std::copy(integers.cbegin(), integers.cend(), outputItr);
	cout << endl;
	// Find first occurence of a value
	std::vector<int>::iterator findItr = std::find(integers.begin(), integers.end(), 13);
	if (findItr != integers.end()) cout << "Found: " << *findItr << " in integers." << endl;
	else cout << "Not Found." << endl;
	// Erase - Remove
	cout << "Remove 4: ";
	integers.erase(std::remove(integers.begin(), integers.end(), 4), integers.end());
	std::copy(integers.cbegin(), integers.cend(), outputItr);
	cout << endl;
	// Accumulate
	int total = std::accumulate(integers.begin(), integers.end(), 0);
	cout << "Total of integers: " << total << endl;
	// Lambda expression
	const size_t SIZE{ 4 };
	array<int, SIZE> values{ 1,2,3,4 };
	cout << "My values: ";
	std::copy(values.cbegin(), values.cend(), outputItr);
	cout << endl << "Double each element: ";
	for_each(values.cbegin(), values.cend(), [](auto i) {cout << i * 2 << " "; });
	int sum = 0;
	for_each(values.cbegin(), values.cend(), [&sum](auto i) {sum += i; });
	cout << endl << "Sum of values: " << sum << endl;

	// List - Doubly Linked List
	cout << "Doubly Linked List" << endl;
	std::list<char> msg = { 'e','l','l','o',' ','W','o','r','l' };
	msg.push_back('d');
	msg.push_front('H');
	msg.insert(msg.cend(),'!');
	for (char c : msg) {
		cout << c;
	}
	cout << endl;
	std::list<char>::iterator msgItr = msg.begin();
	advance(msgItr, (msg.size() / 2) - 1);
	msg.erase(msgItr);
	for (char c : msg) {
		cout << c;
	}
	cout << endl;
	// Deque - Double-ended queue
	cout << endl << "Playing with Deque" << endl;
	std::deque<double> dq = { 1.1, 4.4444, 2.22 };
	dq.push_back(5.55555);     // Add to end
	dq.push_front(0.999999);    // Add to front
	dq.insert(dq.begin() + 2, 3.3333); // Insert at position 2

	for (double x : dq)
		cout << x << " ";
	cout << endl;
	// set and unordered_set
	cout << endl << "Playing with set and unordered_set" << endl;
	std::set<int> uniqueSet{ 3,2,1 };
	uniqueSet.insert(1); // Won't be added due to uniqueness
	uniqueSet.insert(-10);
	cout << "Auto-sorted elements: ";
	for (int i : uniqueSet)
		cout << i << " ";
	cout << endl;
	std::unordered_set<int> uniqueUnorderedSet{ 3,2,-1,-2,0 };
	uniqueUnorderedSet.insert(0); // Won't be added due to uniqueness
	uniqueUnorderedSet.insert(1);
	cout << "Elements in unordered_set: ";
	for (int i : uniqueUnorderedSet)
		cout << i << " ";
	return 0;
}

