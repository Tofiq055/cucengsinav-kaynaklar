#ifndef STUDENT_HPP
#define STUDENT_HPP
 

#include <iostream>
#include <cstring>  

namespace university{
    class Student{
        protected:
        int ID; char *Name;
        public:
        Student(char *_n, int _ID);
        Student(const Student &s);
        ~Student();
        friend void sortByName(Student s[], int sz);
        friend void sortByID(Student s[], int sz);
        virtual void getData();
    };
}

#endif