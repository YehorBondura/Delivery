#pragma once
#include <string>

class Delivery
{
	public:
		Delivery(const std::string& address, double weight);
		virtual ~Delivery() = default;
		void process() const;
		virtual std::string getDeliveryType() const = 0;
	protected:
		virtual bool validate() const;
		virtual double calculatePrice() const = 0;
		virtual int getDeliveryDays() const = 0;
		double getWeight() const;
	private:
		std::string address;
		double weight;
};
