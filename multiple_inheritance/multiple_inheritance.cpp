#include "function.h"
int main()
{
	Laptop laptop("16:9", "5000k", "3840 * 2160", "RU", "built-in", "MSI", "Linux", 100000);
	Phone phone("16:9", "2000k", "1920 * 1080", "RU", "built-in", "Samsung", "android", 80000);
	PC pc("16:9", "7000k", "2560 * 1440", "RU", "wireless", "Intel core i9","nvidia geforce rtx 3090","ssd", "Windows", 400000);
	laptop.print();
	phone.print();
	pc.print();
}