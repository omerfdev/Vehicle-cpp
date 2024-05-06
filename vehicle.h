#ifndef VEHICLE_H
#define VEHICLE_H

#include <string>

class Vehicle {
private:
    std::string plate_number;
    std::string make;
    std::string model;
    std::pair<double, double> location;

public:
    Vehicle(std::string plate, std::string car_make, std::string car_model);
    void update_location(double latitude, double longitude);
    std::pair<double, double> get_location();
};

#endif // VEHICLE_H
