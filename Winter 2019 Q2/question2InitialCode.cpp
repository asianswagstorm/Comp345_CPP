#include <iostream>
using namespace std;

class G {
public:
	G() { cout << "in G::G()\n"; }
	G(int i) { cout << "in G::G(int)\n"; }
};

class F : public G {
public:
	F() { cout << "in F::F()\n"; }
	F(int i) : G(i){ cout << "in F::F(int)\n"; }
};

class E : public G {
public:
	E() { cout << "in E::E()\n"; }
	E(int i) : G(i){ cout << "in E::E(int)\n"; }

};

class D : public E, F {
public:
	D() { cout << "in D::D()\n"; }
	D(int i) : E(i), F(i) { cout << "in D::D(int)\n"; }
};

class C : public D {
public:
	C() { cout << "in C::C()\n"; };
	C(int i) : D(i) { cout << "in C::C(int)\n"; }
};

class B : public D {
public:
	B(){ cout << "in B::B()\n"; };
	B(int i) : D(i) { cout << "in B::B(int)\n"; }
};

class A : public B, C {
public:
	A(){ cout << "in A::A()\n"; };
	A(int i) : B(i), C(i) { cout << "in A::A(int)\n"; }
};

/*
int main()
{
	A e1(2);
	A e2;
	int i; cin >> i;
	return 0;
}*/