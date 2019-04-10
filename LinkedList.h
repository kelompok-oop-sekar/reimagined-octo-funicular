#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <string>
#include <typeinfo>
#include <list>
#include <algorithm>

using namespace std;

template <class T>
class LinkedList {
private:
	list <T> data;
public:

	int find(T elmt) {
		return 0;
	}

	bool isEmpty() {
		return data.size() == 0;
	}
	void add(T elmt) {
		data.push_back(elmt);
	}
	void remove(int idx) {
		typename list<T>::iterator it = data.begin();
		advance(it, idx);
		data.erase(it);
	}
	T get(int i) {
		typename list<T>::iterator it = data.begin();
		advance(it, i);
		return *it;
	}

	int getSize() {
		return data.size();
	}
};

#endif