#pragma once
#pragma once
#include "Staff.hpp"
class Seller : public Staff
{
	static const double SALES_COMMISSION;
public:
	Seller(const std::string& _Name)
		: Staff(_Name), sales(0){}
	~Seller(){}
	Seller& addSales(int _Sales)
	{
		sales += _Sales;
		return *this;
	}
	Seller& clearSales()
	{
		sales = 0;
		return *this;
	}

	int calcSalary() const
	{
		return sales * SALES_COMMISSION;
	}
private:
	int sales;
};

const double Seller::SALES_COMMISSION = 0.06;
