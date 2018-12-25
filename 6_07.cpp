#include"6_07.h"
Date::Date(int y, int m, int d)
{
	year = y;
	month = m;
	day = d;
}
ostream & operator <<(ostream &out, const Date &obj)
{
	out << obj.year;
	out << "-";

	out << obj.month;
	out << "-";

	out << obj.day;
	
	out << endl;
	return out;
}
istream &operator >>(istream &in, Date & obj)
{
	cout << "Input year,month,day of the date:\n";
	in >> obj.year;
	in >> obj.month;
	in >> obj.day;
	return in;
}