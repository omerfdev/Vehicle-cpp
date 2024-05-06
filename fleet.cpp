#include "fleet.h"
#include <iostream>

void Fleet::add_vehicle(std::string plate_number, std::string make, std::string model) {
    if (vehicles.find(plate_number) == vehicles.end()) {
        vehicles.emplace(plate_number, Vehicle(plate_number, make, model));
    }
}

void Fleet::update_vehicle_location(std::string plate_number, double latitude, double longitude) {
    if (vehicles.find(plate_number) != vehicles.end()) {
        vehicles[plate_number].update_location(latitude, longitude);
    } else {
        std::cout << "Vehicle not found in fleet." << std::endl;
    }
}
