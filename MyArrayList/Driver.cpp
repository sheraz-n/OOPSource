#include <iostream>
#include "MyArraylist.h"

using namespace std;

int main (){
///*
    MyArrayList<int> alist;
    for (int i=0; i<alist.getSize(); i++ )
        alist.addElement(10+(i*3));
    alist.toString();
    int removed = 0;
    alist.removeElement(removed, 4);
    alist.toString();
    cout<<"\n\nRemoved Element: "<<removed;
    cout<<"\nLargest Number: "<<alist.getLargest();
    cout<<"\nSmallest Number: "<<alist.getSmallest()<<endl<<"\n";
//*/
    MyArrayList<float> flist;
    for (int i=0; i<flist.getSize(); i++ )
        flist.addElement(3.25+(i*3));
    flist.toString();
    float fremoved = 0;
    flist.removeElement(fremoved, 4);
    flist.toString();
    cout<<"\n\nRemoved Element: "<<fremoved;
    cout<<"\nLargest Number: "<<flist.getLargest();
    cout<<"\nSmallest Number: "<<flist.getSmallest();

    cout<<"\n\n Copy Constructor\n";
    MyArrayList<float> nflist =flist ;
    nflist.toString();
return 0;
}
