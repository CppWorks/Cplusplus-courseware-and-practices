#include <iostream>
using namespace std;

class A{
	public:
		int i;
		void f();
};

void A::f(){
	cout<<"A����"<<i<<endl;
	i=20;
	cout<<"A�޸ĺ��i��"<<i<<endl;
}

struct B{
	int i=20;
};

void f(struct B*p){
	cout<<p->i<<endl;
}

int main(){
	A a;
	a.i=10;
	cout<<"a��i"<<a.i<<endl;
	a.f();
	
	B b;
	f(&b);
	
} 
