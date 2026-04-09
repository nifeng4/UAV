#include "flight_controller.h"

int main() {
    FlightController controller;
    controller.initialize();
    controller.start();
    return 0;
}