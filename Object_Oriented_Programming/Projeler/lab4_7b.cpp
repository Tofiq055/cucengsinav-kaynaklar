#include <iostream >
#include <cstdlib >
using namespace std;
    class myarray{
    int size;
    char *p;
    public:
    myarray(int num);
    ~myarray() { delete [] p; }
    char &put(int i);
    char get(int i);
};

myarray::myarray(int num){
    p = new char [num];
    if(!p) exit(1); 
    size = num;
}

char &myarray::put(int i){
    if(i<0 || i>=size){ cout<< "Bounds error..."<<endl; exit(1);}
    return p[i]; // return reference to p[i]
}

char myarray::get(int i){
    if(i<0 || i>=size){ cout<< "Bounds error..."<<endl; exit(1);}
    return p[i];
}

int main(){
    myarray a(10);
    a.put(3) = 'X';
    a.put(2) = 'R';
    cout << a.get(3) << a.get(2) <<endl;
    a.put(11) = '!'; // now generate run-time boundary error
    return 0;
}