#include<iostream>
using namespace std;

struct part{
    int part_no ;
    int model_no;
    float cost;
    string part_name;

};
int main(){
    part p2 = {10,15,200,"Gear Box"};
    part p1 = {10};
    //size_t n =200;
    cout<< "Part p2 Part_no: "<<p2.part_no<<endl;
    cout<< "Part p2 cost: "<<p2.cost<<endl;
    cout<< "Part p2 model_no: "<<p2.model_no<<endl;
    cout<< "Part p2 Name: "<<p2.part_name<<endl;
   //cout<< "Size of size_t "<<sizeof(size_t)<<endl;
    return 0;
}
