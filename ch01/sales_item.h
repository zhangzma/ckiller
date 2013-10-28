// 定义一个CSalesItem类
#ifndef _SALES_ITEM_H_
#define _SALES_ITEM_H_

#include <iostream>
#include <string>

class CSalesItem
{
public:
    CSalesItem(std::string isbn, int count = 0, double price = 0.0)
		: m_isbn(isbn), m_count(count), m_price(price)
	{

	}
	CSalesItem(std::istream &is)
	{
		is >> *this;
	}
    virtual ~CSalesItem()
	{}

	friend std::istream& operator>>(const std::istream &in, CSalesItem &si);
	friend std::ostream& operator<<(const std::ostream &ou, const CSalesItem &si);

	CSalesItem& operator+(const CSalesItem& rhs);
	double      avg_price() const;
	bool        same_isbn(const CSalesItem& rhs) const
	{
		return m_isbn == rhs.isbn;
	}

private:
friend bool operator==(const CSalesItem &lhs, const CSalesItem &rhs);

private:
	std::string m_isbn;			// 
	int         m_count;		// 
	double      m_price;		//
	double      m_avg;
	double      m_total;
};

inline bool operator==(const CSalesItem &lhs, const CSalesItem &rhs)
{
	return lhs.m_count == rhs.m_count &&
		lhs.m_price == rhs.m_price &&
		lhs.same_isbn(rhs);
}

using std::istream;
using std::ostream;

inline CSalesItem& CSalesItem::operator+=(const CSalesItem &rhs)
{
	m_count += rhs.m_count;
	
	return *this;
}

inline CSalesItem operator+(const CSalesItem &lhs, const CSalesItem &rhs)
{
	CSalesItem ret(lhs);
	ret += rhs;
	return ret;
}	


inline istream& operator>>(std::istream& in, CSalesItem& s)
{
	in >> s.m_isbn >> s.m_count >> s.m_price;
	if (in)
	{
		s.m_total = s.m_count + s.m_price;
	}
	else
	{
		s = CSalesItem();
	}
	return in;
}

inline ostram& operator<<(std::ostream &ou, CSalesItem &s)
{
	ou << s.m_isbn << "\t"
	   << s.m_count << "\t"
	   << s.m_total << "\t"
	   << s.avg_price() << std::endl;
	return ou;
}


#endif /* _SALES_ITEM_H_ */
