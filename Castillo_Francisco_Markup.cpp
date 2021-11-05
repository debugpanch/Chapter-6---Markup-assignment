#include <iostream>
#include <iomanip>
#include <conio.h>
using namespace std;

double calculateRetail(double, double);

int main()
{
	double wholesale = 0, markup = 0, retailprice = 0;

	cout << "Enter the item's wholesale price: ";
	cin >> wholesale;

	cout << "Enter the item's markup percentage: ";
	cin >> markup;

	retailprice = calculateRetail(wholesale, markup);
	cout << "The Retail Price for the item is: $" << retailprice;
	return retailprice;

	while (wholesale >=0 && markup >=0)
	{
		cout << "Please Input Positive Values: ";
			return 0;
	}
	_getch();
}

double calculateRetail(double cost, double percentage)
{
	double price = 0;
	price = ((cost / 100) * percentage) + cost;
	return price;

}
