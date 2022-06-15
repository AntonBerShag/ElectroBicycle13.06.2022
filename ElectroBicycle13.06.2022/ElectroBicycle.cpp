#include <iostream>
using namespace std;

class iNamebale {
public:
	virtual const char* getName()const = 0;
	virtual void setName(const char*) = 0;
};

// только для VS C++(лучше забыть пока не работую на майкрософт)
__interface iPrintable { 
	const char* getName()const;
	void setName(const char*);
};

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
	virtual void fule() = 0;
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
	void fule() override{
		cout << "Human power!" << endl;
	}
private:
	int numberOfPedals;
};

class Scate : public Musscular { //Самокаты
public:
	void fule() override {
		cout << "Human power!" << endl;
	}
private:

};

class ICE : public Motor {
public:
	void fule() override {
		cout << "Petrol!" << endl;
	}
private:

};

class electricCar : public Motor {
public:
	electricCar(bool autopilot) : Motor(4), Transport(4, 150, 1000){}

	void setAutopilot(bool autopilot) {
		autopilot = autopilot;
	}
	void getAutopilot() {
		//autopilot ? cout << "Autopilot yes" << endl : cout << "No autopilot" << endl;
		autopilot ? true : false;
	}
	void fule() override {
		cout << "Electicety!" << endl;
	}
private:
	bool autopilot;
};

class electricBike : public Bicycle, public electricCar{
public:
	electricBike() :Bicycle(0), electricCar(true), Transport(1, 15, 600) {}
	void fule() override {
		cout << "Electicety!" << endl;
	}
};

int main() {

	electricBike eb;

	eb.getAutopilot();
	eb.setAutopilot(true);
	if (eb.getMaxVelocity())
		cout << "Autopilot yes" << endl;
	eb.fule();

	return 0;
}