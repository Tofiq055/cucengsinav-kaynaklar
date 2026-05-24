#include <iostream>
#include <vector>
using namespace std;

void viewVector(vector<int> &v){
    cout <<"Size: "<<(int)v.size();
    cout << " - Current contents: ";
    for(int i=0; i<(int)v.size(); i++)cout<<v[i]<<" ";
    cout << endl;
}

int main(){
    vector <int> v;   
    cout <<"Size: "<<v.size()<<endl; 
    for(int i=0; i<10; i++)v.push_back(i); 
    viewVector(v); 
    for(int i=0; i<10; i++)v.push_back(i+10); 
    viewVector(v); 
    for(int i=0; i<(int)v.size(); i++)v[i] = v[i] + v[i]; 
    viewVector(v);
    return 0;
}