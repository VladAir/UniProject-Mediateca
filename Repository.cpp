#include <iostream>

//int main() {
//	//proof of concept
//	int x;
//
//	x = 119 % 60;
//
//	std::cout<< x;
//
//	system(" pause");
//}

#include "Repository.h"

Repository::Repository() {
	size = 0;
	elements = new Media*[10];
}

Repository::Repository(const Repository& v) {
	size = v.size;
	elements = new Media*[v.size];
	for (int i = 0; i < v.size; i++)
		elements[i] = v.elements[i]->clone();
}

Repository::~Repository() {
	if (elements) {
		for (int i = 0; i < size; i++)
			if (elements[i]) {
				delete elements[i];
				elements[i] = NULL;
			}
		delete[] elements;
		elements = NULL;
	}
}

Repository& Repository::operator=(const Repository& v) {
	if (this != &v) {
		size = v.size;
		if (elements)
			delete[] elements;
		elements = new Media*[v.size];
		for (int i = 0; i < v.size; i++)
			elements[i] = v.elements[i]->clone();
	}
	return *this;
}

int Repository::getSize() {
	return size;
}

Media* Repository::getElem(int pos) {
	return elements[pos];
}

void Repository::addElem(Media* p) {

	elements[size++] = p->clone();
}


