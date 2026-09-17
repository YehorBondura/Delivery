#include "Delivery.h"
#include <iostream>

Delivery::Delivery(const std::string& address, double weight)
	: address(address),
	  weight(weight)
{
}

void Delivery::process() const
{
	std::cout << "Delivery type: " << getDeliveryType() << std::endl;

	if (!validate())
	{
		std::cout << "Invalid delivery data." << std::endl;
		return;
	}

	std::cout << "Address: " << address << std::endl;
	std::cout << "Weight: " << weight << " kg" << std::endl;
	std::cout << "Price: $" << calculatePrice() << std::endl;
	std::cout << "Estimated delivery days: " << getDeliveryDays() << std::endl;
}

bool Delivery::validate() const
{
	return !address.empty() && weight > 0;
}

double Delivery::getWeight() const
{
	return weight;
}
