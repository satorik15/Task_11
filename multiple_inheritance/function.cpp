#include "function.h"

Screen::Screen(string diagonal, string brightness, string quality)
{
	this->diagonal = diagonal;
	this->brightness = brightness;
	this->quality = quality;
}

Screen::~Screen()
{

}

Keyboard::Keyboard(string layout, string type)
{
	this->layout = layout;
	this->type = type;
}

Keyboard::~Keyboard()
{

}

Laptop::Laptop(string diagonal, string brightness, string quality, string layout, string type, string brand, string OC, int price):Screen(diagonal,brightness,quality), Keyboard(layout,type)
{
	this->brand = brand;
	this->OC = OC;
	this->price = price;
}

void Laptop::print()
{
	cout << getDiagonal() << " " << getBrightness() << " " << getQuality() << " "
		<< getLayout() << " " << getType() << " " << brand << " "
		<< OC << " " << price << endl;
}

Laptop::~Laptop()
{

}

Phone::Phone(string diagonal, string brightness, string quality, string layout, string type, string brand, string OC, int price) :Screen(diagonal, brightness, quality), Keyboard(layout, type)
{
	this->brand = brand;
	this->OC = OC;
	this->price = price;
}

void Phone::print()
{
	cout << getDiagonal() << " " << getBrightness() << " " << getQuality() << " "
		<< getLayout() << " " << getType() << " " << brand << " "
		<< OC << " " << price << endl;
}

Phone::~Phone()
{

}

PC::PC(string diagonal, string brightness, string quality, string layout, string type, string processor, string videocard, string disktype, string OC, int price) :Screen(diagonal, brightness, quality), Keyboard(layout, type)
{
	this->processor = processor;
	this->videocard = videocard;
	this->disktype = disktype;
	this->OC = OC;
	this->price = price;

}

void PC::print()
{
	cout << getDiagonal() << " " << getBrightness() << " " << getQuality() << " "
		<< getLayout() << " " << getType() << " " << processor<<" "<<videocard<<" "<<disktype<<" "
		<< OC << " " << price << endl;
}

PC::~PC()
{

}
