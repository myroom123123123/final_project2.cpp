#ifndef FRUITS
#define FRUITS

#include "lib.h"

class Fruits {
private:
	string _name;
	string _brand;
	double _price;
	double _stock_quantity;
	string _expiration_date;
	double _weight;
public:
	// Constructors
	Fruits() {
		_name = "";
		_brand = "";
		_price = 0;
		_stock_quantity = 0;
		_expiration_date = "";
		_weight = 0;
	}
	Fruits(string name, double price, double weight) {
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

class Fruits_Manager : public Fruits {
private:
	vector<Fruits> _fruits;
public:
	// Constructors
	void add_fruit(Fruits fruit) {
		_fruits.push_back(fruit);
	}
	//Methods
	void add_fruit(string name, double price, double weight) {
		Fruits fruit(name, price, weight);
		_fruits.push_back(fruit);
	}
	void remove_fruit(string name) {
		for (int i = 0; i < _fruits.size(); i++) {
			if (_fruits[i].get_name() == name) {
				_fruits.erase(_fruits.begin() + i);
				break;
			}
		}
	}
	void print_fruits() {
		for (int i = 0; i < _fruits.size(); i++) {
			cout << "Name: " << _fruits[i].get_name() << endl;
			cout << "Brand: " << _fruits[i].get_brand() << endl;
			cout << "Price: " << _fruits[i].get_price() << endl;
			cout << "Stock Quantity: " << _fruits[i].get_stock_quantity() << endl;
			cout << "Expiration Date: " << _fruits[i].get_expiration_date() << endl;
			cout << "Weight: " << _fruits[i].get_weight() << endl;
			cout << endl;
		}
	}
};

#endif // !FRUITS
