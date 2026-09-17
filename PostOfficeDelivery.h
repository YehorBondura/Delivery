#pragma once
#include "Delivery.h"
class PostOfficeDelivery : public Delivery
{
	public:
		PostOfficeDelivery(const std::string& address, double weight);
		virtual ~PostOfficeDelivery() = default;
		virtual std::string getDeliveryType() const override;
	protected:
		virtual bool validate() const override;
		virtual double calculatePrice() const override;
		virtual int getDeliveryDays() const override;
};

