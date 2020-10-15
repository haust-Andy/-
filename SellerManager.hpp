#pragma once
#pragma once
#include "Staff.hpp"
class SellerManager : public Staff
{
	static const double SALES_COMMISSION;
	static const int FIXED_SALARY;
public:
	SellerManager(const std::string& _Name)
		: Staff(_Name), sales(0){}
	~SellerManager(){}
	SellerManager& addSales(int _Sales)
	{
		sales += _Sales;
		return *this;
	}
	SellerManager& clearSales()
	{
		sales = 0;
		return *this;
	}
	int calcSalary() const
	{
		return FIXED_SALARY + sales * SALES_COMMISSION;
	}
private:
	int sales;
};
const double SellerManager::SALES_COMMISSION = 0.01;
const int SellerManager::FIXED_SALARY = 5000;
