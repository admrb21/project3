#include <iostream>
#include <cmath>

using namespace std;

class Pendulum {
private:
    double length;
    double gravity;

public:

      Pendulum(double pendulumLength, double gravityAcceleration) {
        length = pendulumLength;
        gravity = gravityAcceleration;
    }

    double calculatePeriod() {
        return 2 * M_PI * sqrt(length / gravity);
    }

    void displayInfo() {
        cout << "Pendulum Information:\n";
        cout << "Length: " << length << " meters\n";
        cout << "Gravity: " << gravity << " m/s^2\n";
        cout << "Period: " << calculatePeriod() << " seconds\n";
    }
};

int main() {
    Pendulum myPendulum(1.5, 9.8);

    myPendulum.displayInfo();

    return 0;
}
