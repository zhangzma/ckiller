// file eg2.cc
// my Queue

#include <iostream>

template <class Type> class CQueue
{
public:
	CQueue();

	Type &front();
	const Type &front() const;
	void push(const Type &val);
	void pop();
	bool empy() const;

private:
	// 
};
