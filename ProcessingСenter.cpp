#include "ProcessingÑenter.h"

ProcessingÑenter::ProcessingÑenter()
{
}

ProcessingÑenter::ProcessingÑenter(Customer customer)
{
	_customers.push_back(customer);
}

ProcessingÑenter::ProcessingÑenter(std::vector<Customer> customers)
{
	_customers = customers;
}

void ProcessingÑenter::AddCustomer(Customer customer)
{
	_customers.push_back(customer);
}

void ProcessingÑenter::AddCustomers(std::vector<Customer> customers)
{
	_customers.insert(_customers.end(), customers.begin(), customers.end());
}

Customer& ProcessingÑenter::GetInfo(std::string cardNumber)
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




