#pragma once
#include "Delivery.h"
class ParseLockerDelivery : public Delivery
{
	public:
		ParseLockerDelivery(const std::string& address, double weight);
		virtual ~ParseLockerDelivery() = default;
		virtual std::string getDeliveryType() const override;
	protected:
		virtual bool validate() const override;
		virtual double calculatePrice() const override;
		virtual int getDeliveryDays() const override;
};

