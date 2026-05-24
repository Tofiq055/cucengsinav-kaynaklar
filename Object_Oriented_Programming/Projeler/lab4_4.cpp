#include <iostream >
using namespace std;
#define twoBillion 2000000000
int main()
{
    int *p;
    for(int i=0; i<twoBillion;i++) p = new int; // allocate room for an integer
    if(!p) return 1; 
    *p = 100; 
    cout << "Here is integer at p: " << *p << "\n";
    delete p; // release memory
    return 0;
}