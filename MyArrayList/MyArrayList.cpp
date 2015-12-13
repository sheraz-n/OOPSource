#include <iostream>
#include "MyArraylist.h"
using namespace std;
template <typename T> class MyArrayList;

template <class T>
MyArrayList<T>:: MyArrayList(){
    capacity = 10;
    listsize = 0;
    container = new T[capacity];
    initToZero();
}

template <class T>
MyArrayList<T>:: MyArrayList(int theSize){
    capacity = theSize;
    listsize = 0;
    container = new T[capacity];
    initToZero();
}
//Copy Constructor
template <class T>
MyArrayList<T> :: MyArrayList (const MyArrayList &alist){
    capacity = alist.capacity;
    listsize=0;
    container = new T[capacity];
    for (int i=0; i< alist.listsize; i++){
        container[i]= alist.container[i];
        listsize++;
    }
}

template <class T>
void MyArrayList<T>::initToZero(){
    for (int i=0; i< capacity; i++) container[i]=0;
}
/*
template <class T>
bool MyArrayList::addElement(T element){
    if (listsize == capacity) return false;
    container[listsize] = element;
    listsize++;
}
*/
template <class T>
bool MyArrayList <T> :: addElement ( const T& dataIn){
	bool success = false;
	if ( listsize == capacity ){ // if list needs to be expanded
        int newSize = capacity + (capacity * .5);
		T* tempArray = new T[newSize];

		for ( int count = 0; count < listsize; count++ )
			tempArray[count] = container[count];

		delete [] container;
		container = tempArray;
		capacity = newSize;
	}
	container[listsize] = dataIn; // places most recent value in the rear of the list
	listsize++;
    success = true;
	return success;
}
template <class T>
bool MyArrayList<T>::removeElement(T &dataOut, int index){
	bool success = false;
	if ( index >= 0 && index < listsize){ // if the index is valid
			dataOut = container[index];
	}
	for ( int count = index; count < listsize; count++)	{
		//container[count] = *(container + (count + 1) ); // Fille the emptied index
		container[count] = container[count+1];
	}
	listsize--;
	success = true;
	return success;
}

template <class T>
T MyArrayList<T>:: getLargest(){

    T maxi= container[0];
    for (int i=0; i<listsize-1; i++)
    if ( container[i+1] > container[i]) maxi= container[i+1];
    return maxi;
}
template <class T>
T MyArrayList <T> :: getSmallest(){
	T lowest = container[0];
	for ( int count = 1; count < listsize; count++)	{
		if ( container[count] < lowest )
			lowest = container[count];
	}
	return lowest;
}

template <class T>
MyArrayList<T>:: ~MyArrayList(){
	delete [] container; // only one that's required
	capacity = 0;
	listsize = 0;
	container = NULL;
}

template <class T>
void MyArrayList<T>:: toString() {
	cout << "Current values in list:\n";
	for (int i = 0; i < listsize; i++)	{
		//cout << *(container + count) << "\t"; //
		cout<<container[i] << "\t";
	}
}
template <typename T>
int MyArrayList<T> :: getSize () {return capacity;}

//For instantiating the required templates
template class MyArrayList<float>;
template class MyArrayList<int>;
template class MyArrayList<double>;
template class MyArrayList<long>;

//*/
