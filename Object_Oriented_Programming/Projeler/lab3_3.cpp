#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;
class strtype{
    char *p;
    int len;
    public:
    strtype(char *ptr);
    ~strtype();
    void show();
};

strtype::strtype(char *ptr){
    len = strlen(ptr);
    p = (char *) malloc(len+1);
    if(!p) exit(1); 
    strcpy(p, ptr);
}
strtype::~strtype(){ free(p);}

void strtype::show(){cout << p;}

int main(){
    strtype s1("This is a test."), s2("I like C++.");
    strtype s3=s2;
    strtype  *ps2;
    ps2 = &s2; 
    s1.show(); cout << endl; 
    s2.show(); cout << endl; 
    s3.show(); cout << endl; 
    ps2->show(); cout << endl;
    s2 = s1;// assign s1 to s2 - - this generates an error
    s1.show(); cout << " s1 Address: "<< &s1 << endl;
    s2.show(); cout << " s2 Address: "<< &s2 << endl;
    s3.show(); cout << " s3 Address: "<< &s3 << endl;
    ps2->show(); cout << " ps2 Address: "<< ps2 << endl;
    return 0;
}