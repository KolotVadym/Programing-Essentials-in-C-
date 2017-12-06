#include <iostream>
#include <string>
using namespace std;



class Wheel
{
	string wheel;
public:
	Wheel()
	{
		this->wheel = "";
	}
	Wheel(int wheel)
	{
		this->wheel = "Wheel: " + to_string(wheel);
	}
	void Print()
	{
		cout << this->wheel << endl;
	}
};

class Light
{
	string light;
public:
	Light()
	{
		this->light = "";
	}
	Light(string light)
	{
		this->light = "Light: " + light;
	}
	void Print()
	{
		cout << this->light << endl;
	}
};

class Chassi
{
	string chassi;
public:
	Chassi()
	{
		this->chassi = "";
	}
	Chassi(string chassi)
	{
		this->chassi = "Chassi: " + chassi;
	}
	void Print()
	{
		cout << this->chassi << endl;
	}
};

class Body
{
	string body;
public:
	Body()
	{
		this->body = "";
	}
	Body(string body)
	{
		this->body = "Body: " + body;
	}
	void Print()
	{
		cout << this->body << endl;
	}
};

class Engine
{
	string engine;
public:
	Engine()
	{
		this->engine = "";
	}
	Engine(int version)
	{
		this->engine = "Engine: " + to_string(version);
	}
	void Print()
	{
		cout << this->engine << endl;
	}
};
class Car
{
	Engine engine;
	Wheel *wheel;
	Light *lights;
	Chassi chassi;
	Body body;

public:
	Car()
	{
		this->engine = Engine();
		this->body = Body();
		this->chassi = Chassi();
		this->lights = new Light[10];
		this->wheel = new Wheel[4];
	}
	Car(Engine engine, Wheel *whell, Light *light, Chassi chassi, Body body)
	{
		this->engine = engine;
		this->wheel = whell;
		this->lights = light;
		this->chassi = chassi;
		this->body = body;

	}
	void Print()
	{
		this->engine.Print();
		for (int i = 0; i < 4; i++)
			this->wheel[i].Print();
		for (int i = 0; i < 10; i++)
			this->lights[i].Print();
		this->chassi.Print();
		this->body.Print();
	}
};

int main()
{
	Car *newCar = new Car(Engine(1.0), new Wheel[4]{ Wheel(16), Wheel(16), Wheel(16), Wheel(16) }, new Light[10]{ Light("Type 1"), Light("Type 1"), Light("Type 2"), Light("Type 2"),
		Light("Type 3"), Light("Type 3"), Light("Type 4"), Light("Type 4"), Light("Type 5"), Light("Type 5") }, Chassi("Normal"),
		Body("Black"));
	newCar->Print();
	return 0;
}