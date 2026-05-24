#include <iostream>
using namespace std;
class samp{
    int i, ID;
    public:
    samp(int n, int _ID) { i = n; ID=_ID;}
    ~samp();
    void set_i(int n) { i = n; }
    int get_i() { return i; }
}; 

samp::~samp(){cout<<"Destroying objectID:"<<ID<< endl;}

void sqr_it(samp o){
    o.set_i(o.get_i() * o.get_i());
    cout << "Copy of a(" << &o <<")::i value changed to " << o.get_i()<<endl;
}

void sqr_it(samp *o){
     o->set_i(o->get_i() * o->get_i());
    cout << "Pointer changed a("<< o <<")::i value to " << o->get_i()<<endl;
}

int main(){
    samp a(10,1); cout<<"Created object a with the memomry address:"<<&a<<endl;
    sqr_it(a); cout<<"But,  a("<< &a <<")::i  is unchanged in main: "<<a.get_i()<<endl;
    sqr_it(&a); cout<<"And  a("<< &a <<")::i  changed in main: "<<a.get_i()<<endl; // displays 10
    return 0;
}