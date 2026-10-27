# Delivery System

An educational C++ project demonstrating object-oriented programming through a delivery service model.

## Features

- Three delivery methods: courier, post office, and parcel locker
- Inheritance and polymorphism
- Abstract classes and virtual methods
- Method overriding
- Template Method design pattern

## Technologies

- C++20
- CMake

## Project Structure

- `Delivery.h` / `Delivery.cpp` — base delivery functionality
- `CourierDelivery.h` / `CourierDelivery.cpp` — courier delivery
- `PostOfficeDelivery.h` / `PostOfficeDelivery.cpp` — post office delivery
- `ParseLockerDelivery.h` / `ParseLockerDelivery.cpp` — parcel locker delivery
- `main.cpp` — program entry point

## Build

Make sure you have a C++ compiler and CMake 3.10 or later installed.

Run the following commands from the project root directory:

```bash
cmake -S . -B build
cmake --build build
```

## Run

On Windows, the executable is typically located at:

```bash
build/Debug/delivery.exe
```

or, depending on the generator and build configuration:

```bash
build/delivery.exe
```

On Linux:

```bash
./build/delivery
```

## Purpose

This project demonstrates how object-oriented programming principles and the Template Method design pattern can be used to organize a system supporting multiple delivery methods.
