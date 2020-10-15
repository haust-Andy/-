#pragma once
#pragma once
#include "Staff.hpp"

class PartTimeStaff : public Staff
{
public:
	PartTimeStaff(const std::string& _Name)
		: Staff(_Name), workHours(0){}
	~PartTimeStaff()
	{}
	int calcSalary() const
	{
		return HOURLY_SALARY * workHours;
	}
	PartTimeStaff& addHours(int _Hours)
	{
		workHours += _Hours;
		return *this;
	}
	PartTimeStaff& clearHours()
	{
		workHours = 0;
		return *this;
	}
private:
	static const int HOURLY_SALARY;
	int workHours;
};
const int PartTimeStaff::HOURLY_SALARY = 180;
