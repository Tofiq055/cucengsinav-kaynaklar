#include <iostream >
using namespace std;
class myclass{
	int a;
	public:
	myclass();
	myclass(int x); //constructor with parameter
	void show();
};
myclass::myclass(){
	cout << "In constructor\n";
	a = 10;
}
myclass::myclass( int x){
	cout << "In constructor\n";
	a = x;
}
void myclass::show(){
	cout << a << endl;
}
int main(){
	myclass ob1, ob2(3);
	ob1.show();
	ob2.show();
	return 0;
}