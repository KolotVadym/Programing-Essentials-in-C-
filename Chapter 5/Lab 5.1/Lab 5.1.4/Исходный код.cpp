#include <string>
#include <iostream>
using namespace std;
class ShopItemOrder
{
	string name;
	int unit_price;
	int number_of_items;
public:
	string get_name()
	{
		return this->name;
	}
	void set_name(string name)
	{
		this->name = name;
	}
	int get_number_of_items()
	{
		return this->number_of_items;
	}
	void set_number_of_items(int number_of_items)
	{
		this->number_of_items = number_of_items;
	}
	int get_unit_price()
	{
		return this->unit_price;
	}
	void set_unit_price(int unit_price)
	{
		this->unit_price = unit_price;
	}

	void TotalPrice()
	{
		cout << "TOTAL PRISE IS:" << this->number_of_items*this->unit_price << endl;
	}

	void Print()
	{
		cout << "NAME:" << get_name() << '\n' << "UNIT PRICE:" << get_unit_price() << '\n' << "NUMBER OF ITEMS:" << get_number_of_items() << endl;
	}
};

int main()
{
	ShopItemOrder order;
	order.set_name("Samsung");
	order.set_unit_price(5);
	order.set_number_of_items(15);
	order.Print();
	order.TotalPrice();
	return 0;
}