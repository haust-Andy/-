#pragma once
#include <string>
class Staff
{
public:
	explicit Staff(const std::string& _Name): name(_Name){}
	virtual ~Staff(){}
	virtual int calcSalary() const = 0;
	std::string getName() const
	{return name;}
private:
	std::string name;
};
