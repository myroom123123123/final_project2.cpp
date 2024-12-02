#ifndef MEAT_PRODUCTS
#define MEAT_PRODUCTS

#include "lib.h"

class MeatProducts {
private:
	string _name;
	string _brand;
	double _price;
	double _stock_quantity;
	string _expiration_date;
	double _weight;
public:
	// Constructors
	MeatProducts() {
		_name = "";
		_brand = "";
		_price = 0;
		_stock_quantity = 0;
		_expiration_date = "";
		_weight = 0;
	}
	MeatProducts(string name, double price, double weight) {
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

class Meat_Products_Manager : public MeatProducts {
private:
	vector<MeatProducts> _meat_products;
public:
	// Constructors
	void add_meat_product(MeatProducts meat_product) {
		_meat_products.push_back(meat_product);
	}
	//Methods
	void add_meat_product(string name, double price, double weight) {
		MeatProducts meat_product(name, price, weight);
		_meat_products.push_back(meat_product);
	}
	void remove_meat_product(string name) {
		for (auto it = _meat_products.begin(); it != _meat_products.end(); ++it) {
			if (it->get_name() == name) {
				_meat_products.erase(it);
				break;
			}
		}
	}
	void print_meat_products() {
		for (int i = 0; i < _meat_products.size(); i++) {
			cout << "Name: " << _meat_products[i].get_name() << endl;
			cout << "Brand: " << _meat_products[i].get_brand() << endl;
			cout << "Price: " << _meat_products[i].get_price() << endl;
			cout << "Stock Quantity: " << _meat_products[i].get_stock_quantity() << endl;
			cout << "Expiration Date: " << _meat_products[i].get_expiration_date() << endl;
			cout << "Weight: " << _meat_products[i].get_weight() << endl;
			cout << endl;
		}
	}
};

#endif // !MEAT_PRODUCTS