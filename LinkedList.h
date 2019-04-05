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

	int find(std::string elmt) {
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

	bool isEmpty() {
		return size == 0;
	}
	void add(T elmt) {
		data[size] = elmt;
		size++;
	}
	void remove(int idx) {
		for (int i = idx; i < size; i++) {
			data[i] = data[i + 1];
		}
	}
	T get(int i) {
		return data[i];
	}
};

#endif