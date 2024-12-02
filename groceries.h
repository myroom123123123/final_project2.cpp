#ifndef GROCERIES
#define GROCERIES

#include "lib.h"

class Groceries {
private:
	string _name;
	string _brand;
	double _price;
	double _stock_quantity;
	string _expiration_date;
	double _weight;
public:
	// Constructors
	Groceries() {
		_name = "";
		_brand = "";
		_price = 0;
		_stock_quantity = 0;
		_expiration_date = "";
		_weight = 0;
	}
	Groceries(string name, double price, double weight) {
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

class Groceries_Manager : public Groceries {
private:
	vector<Groceries> _groceries;
public:
	// Constructors
	void add_grocery(Groceries grocery) {
		_groceries.push_back(grocery);
	}
	//Methods
	void add_grocery(string name, double price, double weight) {
		Groceries grocery(name, price, weight);
		_groceries.push_back(grocery);
	}
	void remove_grocery(string name) {
		for (int i = 0; i < _groceries.size(); i++) {
			if (_groceries[i].get_name() == name) {
				_groceries.erase(_groceries.begin() + i);
				break;
			}
		}
	}
	void print_groceries() {
		for (int i = 0; i < _groceries.size(); i++) {
			cout << "Name: " << _groceries[i].get_name() << endl;
			cout << "Brand: " << _groceries[i].get_brand() << endl;
			cout << "Price: " << _groceries[i].get_price() << endl;
			cout << "Stock Quantity: " << _groceries[i].get_stock_quantity() << endl;
			cout << "Expiration Date: " << _groceries[i].get_expiration_date() << endl;
			cout << "Weight: " << _groceries[i].get_weight() << endl;
			cout << endl;
		}
	}
};

#endif // !GROCERIES