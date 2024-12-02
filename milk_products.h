#ifndef MILK_PRODUCTS
#define MILK_PRODUCTS

#include "lib.h"

class MilkProducts {
private:
	string _name;
	string _brand;
	double _price;
	double _fat_content;
	double _stock_quantity;
	string _expiration_date;
	double _volume;
public:
	// Constructors
	MilkProducts() {
		_name = "";
		_brand = "";
		_price = 0;
		_fat_content = 0;
		_stock_quantity = 0;
		_expiration_date = "";
		_volume = 0;
	}
	MilkProducts(string name, double price, double fat_content, double volume) {
		_name = name;
		_brand = "";
		_price = price;
		_fat_content = fat_content;
		_stock_quantity = 0;
		_expiration_date = "";
		_volume = volume;
	}
	// Getters
	string get_name() const {
		return _name;
	}
	string get_brand() const {
		return _brand;
	}
	double get_price() const {
		return _price;
	}
	double get_fat_content() const {
		return _fat_content;
	}
	double get_stock_quantity() const {
		return _stock_quantity;
	}
	string get_expiration_date() const {
		return _expiration_date;
	}
	double get_volume() const {
		return _volume;
	}
};

class Milk_Products_Manager : public MilkProducts {
private:
	vector<MilkProducts> _milk_products;
public:
	// Constructors
	void add_milk_product(string name, double price, double fat_content, double volume) {
		MilkProducts milk_product(name, price, fat_content, volume);
		_milk_products.push_back(milk_product);

	}
	// Methods
	void add_milk_product(string name, double price, double fat_content, double volume) {
		MilkProducts milk_product(name, price, fat_content, volume);
		_milk_products.push_back(milk_product);
	}
	void remove_milk_product(string name) {
		for (int i = 0; i < _milk_products.size(); i++) {
			if (_milk_products[i].get_name() == name) {
				_milk_products.erase(_milk_products.begin() + i);
				break;
			}
		}
	}
	void print_milk_products() {
		for (int i = 0; i < _milk_products.size(); i++) {
			cout << "Name: " << _milk_products[i].get_name() << endl;
			cout << "Brand: " << _milk_products[i].get_brand() << endl;
			cout << "Price: " << _milk_products[i].get_price() << endl;
			cout << "Fat content: " << _milk_products[i].get_fat_content() << endl;
			cout << "Stock quantity: " << _milk_products[i].get_stock_quantity() << endl;
			cout << "Expiration date: " << _milk_products[i].get_expiration_date() << endl;
			cout << "Volume: " << _milk_products[i].get_volume() << endl;
			cout << endl;
		}
	}
};

#endif // !MILK_PRODUCTS