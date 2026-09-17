cmake_minimum_required(VERSION 3.10)

project(delivery)
set(CMAKE_CXX_STANDARD 20) 

add_executable( delivery main.cpp
	Delivery.h
	Delivery.cpp
	CourierDelivery.h
	CourierDelivery.cpp
	ParseLockerDelivery.h
	ParseLockerDelivery.cpp
	PostOfficeDelivery.h
	PostOfficeDelivery.cpp
)