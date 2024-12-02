#ifndef BAKERY
#define BAKERY

#include "lib.h"

class Bakery {
private:
	string _name;
	string _brand;
	double _price;
	double _stock_quantity;
	string _expiration_date;
	double _weight;
public:
	// Constructors
	Bakery() {
		_name = "";
		_brand = "";
		_price = 0;
		_stock_quantity = 0;
		_expiration_date = "";
		_weight = 0;
	}
	Bakery(string name, double price, double weight) {
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

class Bakery_Manager : public Bakery {
private:
	vector<Bakery> _bakery;
public:
	// Constructors
	void add_bakery(Bakery bakery) {
		_bakery.push_back(bakery);
	}
	// Methods
	void add_bakery(string name, double price, double weight) {
		Bakery bakery(name, price, weight);
		_bakery.push_back(bakery);
	}
	void remove_bakery(string name) {
		for (int i = 0; i < _bakery.size(); i++) {
			if (_bakery[i].get_name() == name) {
				_bakery.erase(_bakery.begin() + i);
				break;
			}
		}
	}
	void print_bakery() {
		for (int i = 0; i < _bakery.size(); i++) {
			cout << "Name: " << _bakery[i].get_name() << endl;
			cout << "Brand: " << _bakery[i].get_brand() << endl;
			cout << "Price: " << _bakery[i].get_price() << endl;
			cout << "Stock Quantity: " << _bakery[i].get_stock_quantity() << endl;
			cout << "Expiration Date: " << _bakery[i].get_expiration_date() << endl;
			cout << "Weight: " << _bakery[i].get_weight() << endl;
			cout << endl;
		}
	}
};

#endif // !BAKERY