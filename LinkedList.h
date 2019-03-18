#ifndef LINKEDLIST_H
#define LINKEDLIST_H

template <class T>
class LinkedList {
private:
	T* data;
public:
	int find(T elmt);
	bool isEmpty();
	void add(T elmt);
	void remove(T elmt);
	T get(int i);
};

#endif