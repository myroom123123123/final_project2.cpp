#ifndef VEGETABLES
#define VEGETABLES

#include "lib.h"

class Vegetables {
private:
	string _name;
	string _brand;
	double _price;
	double _stock_quantity;
	string _expiration_date;
	double _weight;
public:
	// Constructors
	Vegetables() {
		_name = "";
		_brand = "";
		_price = 0;
		_stock_quantity = 0;
		_expiration_date = "";
		_weight = 0;
	}
	Vegetables(string name, double price, double weight) {
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

class Vegetables_Manager : public Vegetables {
private:
	vector<Vegetables> _vegetables;
public:
	// Constructors
	void add_vegetable(Vegetables vegetable) {
		_vegetables.push_back(vegetable);
	}
	//Methods
	void add_vegetable(string name, double price, double weight) {
		Vegetables vegetable(name, price, weight);
		_vegetables.push_back(vegetable);
	}
	void remove_vegetable(string name) {
		for (int i = 0; i < _vegetables.size(); i++) {
			if (_vegetables[i].get_name() == name) {
				_vegetables.erase(_vegetables.begin() + i);
				break;
			}
		}
	}
	void print_vegetables() {
		for (int i = 0; i < _vegetables.size(); i++) {
			cout << "Name: " << _vegetables[i].get_name() << endl;
			cout << "Brand: " << _vegetables[i].get_brand() << endl;
			cout << "Price: " << _vegetables[i].get_price() << endl;
			cout << "Stock Quantity: " << _vegetables[i].get_stock_quantity() << endl;
			cout << "Expiration Date: " << _vegetables[i].get_expiration_date() << endl;
			cout << "Weight: " << _vegetables[i].get_weight() << endl;
			cout << endl;
		}
	}
};

#endif // !VEGETABLES
