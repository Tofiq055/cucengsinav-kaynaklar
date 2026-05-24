#ifndef UNDERGRADUATE_HPP
#define UNDERGRADUATE_HPP

#include <iostream>
#include <cstring> 
#include "student.hpp"

namespace university{

    class Undergraduate : public Student {
        int Year;
        public:
        Undergraduate(char *_n, int _ID, int _yr); 
        void getData();
    };

}

#endif