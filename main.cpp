
#include <iostream>
#include <string>
#include <vector>
#include "Delivery.h"
#include "CourierDelivery.h"
#include "ParseLockerDelivery.h"
#include "PostOfficeDelivery.h"

int main()
{
    CourierDelivery courier(
		"123 Main St, Anytown, USA", 5.0
    );

	PostOfficeDelivery postOffice(
		"456 Elm St, Othertown, USA", 10.0
	);

	ParseLockerDelivery parseLocker(
		"789 Oak St, Sometown, USA", 2.5
	);

	CourierDelivery invalidCourier(
		"Invalid Address", 50.0
	);

	std::vector<Delivery*> deliveries{
		&courier,
		& postOffice,
		& parseLocker,
		& invalidCourier
	};

	for (const Delivery* delivery : deliveries)
	{
		delivery->process();
	}
	return 0;
}
