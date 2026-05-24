#include <iostream>
#include <cstring>
#include "student.hpp" 
#include "graduate.hpp"
#include "undergraduate.hpp"

using namespace std;
using namespace university;

int main(){

    Student newStudents[]={
        Undergraduate("Linus Torvalds", 12, 2),
        Graduate("Bjarne Stroustrup", 7,"PhD"),
        Graduate("Andrew Tanenbaum",11,"PhD"),
        Undergraduate("Dennis Ritchie", 4,4),
        Graduate("Ken Thompson", 8,"Masters")
    };

    for(int i=0; i<5; i++){
        Student *s=&newStudents[i];
        s->getData();
    }

    return 0;
}