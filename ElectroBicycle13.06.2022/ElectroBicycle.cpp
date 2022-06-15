#include <iostream>
using namespace std;

class Transport {
public:
	Transport(int numberOfSeats, int maxVelocity, int weight)
		:numberOfSeats(numberOfSeats), maxVelocity(maxVelocity), weight(weight){}

	void setNumberOfSeats(int numberOfSeats) {
		numberOfSeats = numberOfSeats;
	}
	int getNumberOfSeats() const{
		return numberOfSeats;
	}
	void setMaxVelocity(int maxVelocity) {
		maxVelocity = maxVelocity;
	}
	int getMaxVelocity() const{
		return maxVelocity;
	}
	void setWeight(int weight) {
		weight = weight;
	}
	int getWeight() const{
		return weight;
	}
private:
	int numberOfSeats;
	int maxVelocity; // скорость на английском;
	int weight;
};

class Musscular : virtual public Transport {
public:
	Musscular(int countOfWorkers):Transport(0, 0, 0) {}

	void setCountOfWorkers(int ountOfWorkers) {
		ountOfWorkers = ountOfWorkers;
	}
	int getCountOfWorkers() const{
		return countOfWorkers;
	}
private:
	int countOfWorkers;
};

class Motor : virtual public Transport {
public:
	Motor(int horsePower):Transport(0, 0, 0){}

	void setHorsePower(int horsePower) {
		horsePower = horsePower;
	}
	int getHorsePower() const{
		return horsePower;
	}
private:
	int horsePower;
};

class Bicycle : public Musscular {
public:
	Bicycle(int numberOfPedals): Musscular(1), Transport(1, 15, 500){}

	void setNumberOfPedals(int numberOfPedals) {
		numberOfPedals = numberOfPedals;
	}
	int getNumberOfPedals() {
		return numberOfPedals;
	}
private:
	int numberOfPedals;
};

class Scate : public Musscular { //Самокаты

};

class ICE : public Motor {

};

class electricCar : public Motor {
public:
	electricCar(bool autopilot) : Motor(4), Transport(4, 150, 1000){}

	void setAutopilot(bool autopilot) {
		autopilot = autopilot;
	}
	bool getAutopilot() {
		/*autopilot ? cout << "Autopilot yes" << endl
			: cout << "No autopilot" << endl;*/
		return autopilot;
	}
private:
	bool autopilot;
};

class electricBike : public Bicycle, public electricCar{
public:
	electricBike() :Bicycle(0), electricCar(true), Transport(1, 15, 600) {}
};

int main() {

	electricBike eb;

	eb.getAutopilot();
	eb.getMaxVelocity();

	return 0;
}