#include "Processing�enter.h"

Processing�enter::Processing�enter()
{
}

Processing�enter::Processing�enter(Customer customer)
{
	_customers.push_back(customer);
}

Processing�enter::Processing�enter(std::vector<Customer> customers)
{
	_customers = customers;
}

void Processing�enter::AddCustomer(Customer customer)
{
	_customers.push_back(customer);
}

void Processing�enter::AddCustomers(std::vector<Customer> customers)
{
	_customers.insert(_customers.end(), customers.begin(), customers.end());
}

Customer& Processing�enter::GetInfo(std::string cardNumber)
{
	for (int i = 0; i < _customers.size(); i++)
	{
		if (_customers[i].CardNumber == cardNumber)
		{
			return _customers[i];
		}
	}

	std::cout << "Customer not found" << std::endl;
	Customer customer;
	return customer;
}




