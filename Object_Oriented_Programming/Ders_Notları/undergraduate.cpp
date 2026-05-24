#include "undergraduate.hpp"
using namespace std;

namespace university{
 
    Undergraduate::Undergraduate(char *_n, int _ID, int _yr)
        :Student(_n, _ID) { Year = _yr;}  

    void Undergraduate::getData(){
        cout<<"ID:"<<ID<<"-"<<"Name:"<<Name;
        cout<< "-"<<"Year:"<<Year<<endl;
    } 
  
}