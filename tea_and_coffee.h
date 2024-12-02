#ifndef TEA_AND_COFFEE
#define TEA_AND_COFFEE

#include "lib.h"

class TeaAndCoffee {
private:
	string _name;
	string _brand;
	double _price;
	double _stock_quantity;
	string _expiration_date;
	double _weight;
public:
	// Constructors
	TeaAndCoffee() {
		_name = "";
		_brand = "";
		_price = 0;
		_stock_quantity = 0;
		_expiration_date = "";
		_weight = 0;
	}
	TeaAndCoffee(string name, double price, double weight) {
		_name = name;
		_brand = "";
		_price = price;
		_stock_quantity = 0;
		_expiration_date = "";
		_weight = weight;
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
	double get_stock_quantity() const {
		return _stock_quantity;
	}
	string get_expiration_date() const {
		return _expiration_date;
	}
	double get_weight() const {
		return _weight;
	}
};

class TeaAndCoffee_Manager : public TeaAndCoffee {
private:
	vector<TeaAndCoffee> _tea_and_coffee;
public:
	// Constructors
	void add_tea_and_coffee(TeaAndCoffee tea_and_coffee) {
		_tea_and_coffee.push_back(tea_and_coffee);
	}
	//Methods
	void add_tea_and_coffee(string name, double price, double weight) {
		TeaAndCoffee tea_and_coffee(name, price, weight);
		_tea_and_coffee.push_back(tea_and_coffee);
	}
	void remove_tea_and_coffee(string name) {
		for (int i = 0; i < _tea_and_coffee.size(); i++) {
			if (_tea_and_coffee[i].get_name() == name) {
				_tea_and_coffee.erase(_tea_and_coffee.begin() + i);
				break;
			}
		}
	}
	void print_tea_and_coffee() {
		for (int i = 0; i < _tea_and_coffee.size(); i++) {
			cout << "Name: " << _tea_and_coffee[i].get_name() << endl;
			cout << "Brand: " << _tea_and_coffee[i].get_brand() << endl;
			cout << "Price: " << _tea_and_coffee[i].get_price() << endl;
			cout << "Stock Quantity: " << _tea_and_coffee[i].get_stock_quantity() << endl;
			cout << "Expiration Date: " << _tea_and_coffee[i].get_expiration_date() << endl;
			cout << "Weight: " << _tea_and_coffee[i].get_weight() << endl;
			cout << endl;
		}
	}
};

#endif // !TEA_AND_COFFEE