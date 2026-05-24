#include "student.hpp"
using namespace std;

namespace university{

      Student::Student(char *_n, int _ID=0){
            ID = _ID; 
            Name = new char[strlen(_n)+1];
            if(Name!=nullptr)strcpy(Name,_n);
            else exit(1);
        }

        Student::Student(const Student &s){//copy constructor
            ID = s.ID; 
            Name = new char[strlen(s.Name)+1];
            if(Name!=nullptr)strcpy(Name,s.Name);
            else exit(1);
        }

        Student::~Student(){delete [] Name;} 

        void  Student::getData(){
            cout<<"ID:"<<ID<<"-"<<"Name:"<<Name<<endl;
        }
     
}