//
// How to define a template member function of a template class
// https://stackoverflow.com/questions/11394832/how-to-define-a-template-member-function-of-a-template-class
//

#include <iostream>
#include <string>
using namespace std;

template <class T>
class cData
{
public:
	cData() {}
	virtual ~cData() {}

	template <class Type>
	void Print(Type t);

public:
	T m_data;
};

template <class T>
template <class Type>
void cData<T>::Print(Type t) {
	cout << t << endl;
	cout << m_data << endl;
}

int main()
{
	cData<float> data;
	data.m_data = 100.f;
	cout << data.m_data << endl;

	data.Print<string>("string test");
}
