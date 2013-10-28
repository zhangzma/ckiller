// ex12-.h
#include <string>

class Person
{
public:
	Person(const std::string name, const std::string addr)
		: m_name(name), m_addr(addr)
	{}
	
private:
	std::string m_name;
	std::string m_addr;
};
