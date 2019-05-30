#pragma once

//#pragma once
//#include <vector>
//
//using namespace std;
//
//template <class T>
//class Repository {
//private:
//	vector<T> Vect;
//public:
//	void AddElem(T Cont);
//	vector<T> getAll();
//
//	Repo();
//	~Repo();
//};
//
//template <class T>
//void Reposiotry<T>::AddElem(T Elem)
//{
//	Vect.push_back(Elem);
//}
//
//
//template <class T>
//Repository<T> Repository<T>::getAll() {
//	return this->Vect;
//}
//
//template <class T>
//Repository<T>::Repository()
//{
//	this->Vect;
//}
//
//template <class T>
//Repository<T>::~Repository()
//{
//}

class Media { 
public:
	Media* clone() {
		
			return nullptr;
		
	};
};

//--------------------------------------------- ** ----------------------------------------

#ifndef REPOSITORY_H
#define REPOSITORY_H

//#include "Media.h"

class Repository {
private:
	int size;
	Media* * elements;
public:
	Repository();
	Repository(const Repository&);
	~Repository();
	Repository& operator=(const Repository&);
	int getSize();
	Media* getElem(int);
	void addElem(Media*);

};
#endif