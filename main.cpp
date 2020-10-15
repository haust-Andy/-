#include <iostream>
#include "GeneralManager.hpp"
#include "PartTimeStaff.hpp"
#include "SellerManager.hpp"
#include "Seller.hpp"


void showSalary(const Staff* staff)
{
	std::cout << "name : " << staff->getName() << ", "
		<< "salary : " << staff->calcSalary() << std::endl;
}

int main(int argc, char const* argv[])
{
	GeneralManager* generalManager = new GeneralManager("Andy");
	PartTimeStaff* partTimeStaff = new PartTimeStaff("kiven");
	SellerManager* sellerManager = new SellerManager("zzy");
	Seller* seller = new Seller("lucy");

	partTimeStaff->addHours(10);
	sellerManager->addSales(80000);
	seller->addSales(90000);

	showSalary(generalManager);
	showSalary(partTimeStaff);
	showSalary(sellerManager);
	showSalary(seller);

	partTimeStaff->clearHours();
	sellerManager->clearSales();
	seller->clearSales();


	// 


	
	return 0;
}
