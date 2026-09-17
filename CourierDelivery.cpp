
#include <iostream>
#include <string>
#include "CourierDelivery.h"
#include "Delivery.h"

CourierDelivery::CourierDelivery(
	const std::string& address,
	double weight
)
	: Delivery(address, weight)
{
}

std::string CourierDelivery::getDeliveryType() const
{
	return "Courier Delivery";
}

bool CourierDelivery::validate() const
{
	return Delivery::validate() && getWeight() <= 30.0;
}

double CourierDelivery::calculatePrice() const
{
	return 100 + getWeight() * 20;
}

int CourierDelivery::getDeliveryDays() const
{
	return 1;
}
