#include "vehicle.h"

Vehicle::Vehicle(std::string plate, std::string car_make, std::string car_model)
    : plate_number(plate), make(car_make), model(car_model), location(std::make_pair(0.0, 0.0)) {}

void Vehicle::update_location(double latitude, double longitude) {
    location = std::make_pair(latitude, longitude);
}

std::pair<double, double> Vehicle::get_location() {
    return location;
}
