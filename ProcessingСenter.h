#pragma once
#include <string>
#include <vector>
#include <iostream>

struct Customer
{
	std::string CardNumber;
	std::string Name;
	int Balance = 0;
	std::string PinCode;
	bool Workable = true;
};

class Processing�enter
{
private:
	std::vector<Customer> _customers;

public:
	Processing�enter();
	Processing�enter(Customer customer);
	Processing�enter(std::vector<Customer> customers);

	void AddCustomer(Customer customer);
	void AddCustomers(std::vector<Customer> customers);

	Customer& GetInfo(std::string cardNumber);


};

