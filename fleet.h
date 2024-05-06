#ifndef FLEET_H
#define FLEET_H

#include <unordered_map>
#include "vehicle.h"

class Fleet {
private:
    std::unordered_map<std::string, Vehicle> vehicles;

public:
    void add_vehicle(std::string plate_number, std::string make, std::string model);
    void update_vehicle_location(std::string plate_number, double latitude, double longitude);
};

#endif // FLEET_H
