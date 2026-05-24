#include <iostream >
using namespace std;

class myclass{
    int a;
    public:
    void set_a(int x){ a = x; }; //inline function
    int get_a(); //inline function
};

inline int myclass::get_a(){ 
    return a; 
}; //inline function

int main(){
    myclass o1, o2;
    myclass *po1;
    o1.set_a(10);  
    o2 = o1; // assign o1 to o2
    po1=&o1;
    cout << "Ob1:"<<o1.get_a()<<" Ob2:" << o2.get_a() <<endl;
    po1->set_a(15);
    cout << "Ob1 Address: "<<&o1<<" Ob1::a =" << o1.get_a() <<endl;
    cout << "Ob2 Address: "<<&o2<<" Ob2::a =" << o2.get_a() <<endl;
    return 0;
}