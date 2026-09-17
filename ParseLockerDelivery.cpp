
#include <iostream>
#include <string>
#include "ParseLockerDelivery.h"
#include "Delivery.h"

ParseLockerDelivery::ParseLockerDelivery(
	const std::string& address,
	double weight
)
	: Delivery(address, weight)
{
}

std::string ParseLockerDelivery::getDeliveryType() const
{
	return "ParseLocker";
}

bool ParseLockerDelivery::validate() const
{
	return Delivery::validate() && getWeight() <= 20.0;
}

double ParseLockerDelivery::calculatePrice() const
{
	return 70 + getWeight() * 5;
}

int ParseLockerDelivery::getDeliveryDays() const
{
	return 2;
}
