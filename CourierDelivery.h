#pragma once
#include "Delivery.h"
class CourierDelivery : public Delivery
{
	public:
		CourierDelivery(const std::string& address, double weight);
		virtual ~CourierDelivery() = default;
		virtual std::string getDeliveryType() const override;
	protected:
		virtual bool validate() const override;
		virtual double calculatePrice() const override;
		virtual int getDeliveryDays() const override;
};