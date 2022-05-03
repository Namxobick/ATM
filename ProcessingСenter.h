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

class ProcessingÑenter
{
private:
	std::vector<Customer> _customers;

public:
	ProcessingÑenter();
	ProcessingÑenter(Customer customer);
	ProcessingÑenter(std::vector<Customer> customers);

	void AddCustomer(Customer customer);
	void AddCustomers(std::vector<Customer> customers);

	Customer& GetInfo(std::string cardNumber);


};

