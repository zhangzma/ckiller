// ex12-3.h
// ´Ó
#include <string>

class Person
{
public:
	Person(const std::string name, const std::string addr)
		: m_name(name), m_addr(addr)
	{}

	std::string GetName() const
	{
		return m_name;
	}

	std::string GetAddress() const
	{
		return m_addr;
	}
	
private:
	std::string m_name;
	std::string m_addr;
};
