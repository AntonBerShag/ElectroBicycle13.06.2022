#include <iostream>
using namespace std;

class Transport {
public:
	void setNumberOfSeats(int numberOfSeats) {
		numberOfSeats = numberOfSeats;
	}
	int getNumberOfSeats() {
		return numberOfSeats;
	}
	void setMaxVelocity(int maxVelocity) {
		maxVelocity = maxVelocity;
	}
	int getMaxVelocity() {
		return maxVelocity;
	}
	void setWeight(int weight) {
		weight = weight;
	}
	int getWeight() {
		return weight;
	}
private:
	int numberOfSeats;
	int maxVelocity; // скорость на английском;
	int weight;
};

class Musscular : virtual public Transport {
public:

private:
	int countOfWorkers;
};

class Motor : virtual public Transport {
public:

private:
	int power;
};

class Bicycle : public Musscular {

};

class Scate : public Musscular { //Самокаты

};

class DVS : public Motor {

};

class electricCar : public Motor {

};

class electricBike {

};

int main() {

	return 0;
}