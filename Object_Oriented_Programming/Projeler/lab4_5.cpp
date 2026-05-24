#include <iostream >
using namespace std;
class samp{
    int i, j, ID;
    public:
    samp(int _ID){ ID = _ID;}
    ~samp(){cout<<"Destroying object "<< ID <<endl; }
    void set_i(int a, int b) { i=a; j=b; }
    int get_product() { return i*j; }
    
};

int main(){
    samp *p1, *p2;
    p1 = new samp[4]{1,2,3,4}; // allocate object
    p2 = new samp[4]{-1,-2,-3,-4};
    if(!p1 || !p2) return 1;

    for(int i=0; i<4; i++)  p1[i].set_i(1+i, 2*i);  
    for(int i=0; i<4; i++)  (p2+i)->set_i(1+i, 2*i);

    for(int i=0; i<4; i++) {
        cout << "P1 Series Product: " << p1[i].get_product(); 
        cout << "  P2 Series Product-> " << (p2+i)->get_product() << endl; 
    }
 
    delete[] p1;
    delete[]  p2; 
    cout << " --Undefined Behaviour--  P2 Series Product-> " << p2->get_product() << endl; 
    p2 =nullptr;
     cout << " No access to memory with an null pointer : " << p2->get_product() << endl; 
    return 0;
}