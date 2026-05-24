#ifndef GRADUATE_HPP
#define GRADUATE_HPP

#include <iostream>
#include <cstring> 
#include "student.hpp"

namespace university{

    class Graduate : public Student {
        char *Degree;
        public:
        Graduate(char *_n, int _ID, char *_d);
        void getData();
    };

}

#endif