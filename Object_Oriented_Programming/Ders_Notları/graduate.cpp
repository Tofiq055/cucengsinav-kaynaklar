#include "graduate.hpp"
using namespace std;

namespace university{

    Graduate::Graduate(char *_n, int _ID, char *_d):Student(_n, _ID) { 
        Degree = new char[strlen(_d)+1];
        if(Degree!=nullptr)strcpy(Degree,_d);    
        else exit(1);
    }

    void Graduate::getData(){
        cout<<"ID:"<<ID<<"-"<<"Name:"<<Name;
        cout<<"-"<<"Degree:"<<Degree<<endl;
    } 

}