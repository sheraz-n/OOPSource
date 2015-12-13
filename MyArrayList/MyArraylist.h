#ifndef MyArrayList_H
#define MyArrayList_H
template<class T>
class MyArrayList {
    private:
         //Data fields-------------------//
        T *container;
        int listsize;           //Actual Size of The List
        int capacity;       //total capacity of the list
        void initToZero();
    public:
        //Constructors------------------//
        MyArrayList();
        MyArrayList(int theSize);
        MyArrayList (const MyArrayList &);
        //Methods-----------------------//
        //Operations
        bool addElement(const T & );
        void toString();
        bool removeElement (T& dataout,int index);
        T getLargest();
        T getSmallest();
        int getSize();
        ~MyArrayList();
};
#endif // MyArrayList_H


