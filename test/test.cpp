// C++ program to demonstrate the
// use of a stringstream to
// convert int to string
#include <iostream>
#include <sstream>
using namespace std;

// static_cast_Operator.cpp
// compile with: /LD
class B {virtual void d(){}};

class D : public B {int y;};

void f(B* pb, D* pd) {
   D* pd2 = static_cast<D*>(pb);   // Not safe, D can have fields
    if (!pd2)
		cout << "makhedmxi\n";                               // and methods that are not in B.

   B* pb2 = static_cast 	<B*>(pd);   // Safe conversion, D always
                                   // contains all of B.
}
int main ()
{
	B a;
	D c;
	f(&a,&c);
}