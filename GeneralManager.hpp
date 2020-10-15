#pragma once
#pragma once
#include "Staff.hpp"
class GeneralManager : public Staff
{
public:
	GeneralManager(const std::string& _Name)
		: Staff(_Name){}
	~GeneralManager(){}
private:
	static const int FIXED_SALARY;
	int calcSalary() const
	{return FIXED_SALARY;}
};
const int GeneralManager::FIXED_SALARY = 15000;
