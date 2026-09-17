
#include <iostream>
#include <string>
#include "PostOfficeDelivery.h"
#include "Delivery.h"

PostOfficeDelivery::PostOfficeDelivery(
	const std::string& address,
	double weight
)
	: Delivery(address, weight)
{
}

std::string PostOfficeDelivery::getDeliveryType() const
{
	return "Post Office Delivery";
}

bool PostOfficeDelivery::validate() const
{
	return Delivery::validate() && getWeight() <= 100.0;
}

double PostOfficeDelivery::calculatePrice() const
{
	return 50 + getWeight() * 10;
}

int PostOfficeDelivery::getDeliveryDays() const
{
	return 3;
}
