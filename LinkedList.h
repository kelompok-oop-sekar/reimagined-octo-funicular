#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <string>
#include <typeinfo>

template <class T>
class LinkedList {
private:
	T data[50];
	int size;
public:
	LinkedList() {
		size = 0;
	}
	int find(string elmt) {
		if (size > 0) {
			for (int i = 0; i < size; i++) {
				if (typeid(data[i]).name() == elmt) {
					return i;
				}
			}
		}
		else {
			return -1;
		}
	}
	bool isEmpty();
	void add(T elmt);
	void remove(T elmt);
	T get(int i);
};

#endif