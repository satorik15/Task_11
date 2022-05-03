#ifndef FUNCTION_H
#define FUNCTION_H
#include <iostream>
using namespace std;
#include <string>
class Screen
{
private:
	string diagonal;
	string brightness;
	string quality;
public:
	Screen(string = "", string = "", string = "");
	virtual void print() = 0;
	~Screen();
	const string& getDiagonal()
	{
		return diagonal;
	}
	const string& getBrightness()
	{
		return brightness;
	}
	const string& getQuality()
	{
		return quality;
	}

};
class Keyboard
{
private:
	string layout;
	string type;
public:
	Keyboard(string = "", string = "");
	virtual void print() = 0;
	const string& getLayout()
	{
		return layout;
	}
	const string& getType()
	{
		return type;
	}
	~Keyboard();
};
class Laptop: public Screen,public Keyboard
{
private:
	string brand;
	string OC;
	int price;
public:
	Laptop(string = "", string = "", string = "", string = "", string = "", string = "", string = "", int = 0);
	void print();
	~Laptop();
};
class Phone : public Screen, public Keyboard
{
private:
	string brand;
	string OC;
	int price;
public:
	Phone(string = "", string = "", string = "", string = "", string = "", string = "", string = "", int = 0);
	void print();
	~Phone();

};
class PC : public Screen, public Keyboard
{
private:
	string processor;
	string videocard;
	string disktype;
	string OC;
	int price;
public:
	PC(string = "", string = "", string = "", string = "", string = "", string = "", string = "", string = "", string = "", int = 0);
	void print();
	~PC();

};
#endif // !FUNCTION_H
