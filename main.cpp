#include <iostream>
#include "fleet.h"

int main() {
    Fleet fleet;
    fleet.add_vehicle("ABC123", "Toyota", "Camry");
    fleet.update_vehicle_location("ABC123", 37.7749, -122.4194);

    // Örnek olarak araç konumunu yazdıralım
    std::pair<double, double> location = fleet.get_vehicle_location("ABC123");
    std::cout << "Vehicle location: " << location.first << ", " << location.second << std::endl;

    return 0;
}
