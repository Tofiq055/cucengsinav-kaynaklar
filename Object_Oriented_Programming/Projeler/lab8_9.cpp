// Demonstrate insert and erase.
#include <iostream >
#include <vector >
using namespace std;

void viewVector(vector<int> &v){
    cout << "Size = " << v.size() << endl;
    cout << "Original contents:\n";
    for(int i=0; i<(int)v.size(); i++)cout<<v[i]<<" ";
    cout << endl << endl;
}

int main(){
    vector <int> v(5, 1);  
    viewVector(v);
     
    vector <int >::iterator p = v.begin();
    p += 2;  
    v.insert(p, 10, 9);
    viewVector(v);

    p = v.begin();
    p += 2; 
    v.erase(p, p+10); 
    viewVector(v);

return 0;
}