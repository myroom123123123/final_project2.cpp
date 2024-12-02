#ifndef FISH_PRODUCTS
#define FISH_PRODUCTS

#include "lib.h"

class FishProducts {
private:
	string _name;
	string _brand;
	double _price;
	double _stock_quantity;
	string _expiration_date;
	double _weight;
public:
	// Constructors
	FishProducts() {
		_name = "";
		_brand = "";
		_price = 0;
		_stock_quantity = 0;
		_expiration_date = "";
		_weight = 0;
	}
	FishProducts(string name, double price, double weight) {
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

class Fish_Products_Manager : public FishProducts {
private:
	vector<FishProducts> _fish_products;
public:
	// Constructors
	void add_fish_product(FishProducts fish_product) {
		_fish_products.push_back(fish_product);
	}

	//Methods
	void add_fish_product(string name, double price, double weight) {
		FishProducts fish_product(name, price, weight);
		_fish_products.push_back(fish_product);
	}
	void remove_fish_product(string name) {
		for (int i = 0; i < _fish_products.size(); i++) {
			if (_fish_products[i].get_name() == name) {
				_fish_products.erase(_fish_products.begin() + i);
				break;
			}
		}
	}
	void print_fish_products() {
		for (int i = 0; i < _fish_products.size(); i++) {
			cout << "Name: " << _fish_products[i].get_name() << endl;
			cout << "Brand: " << _fish_products[i].get_brand() << endl;
			cout << "Price: " << _fish_products[i].get_price() << endl;
			cout << "Stock Quantity: " << _fish_products[i].get_stock_quantity() << endl;
			cout << "Expiration Date: " << _fish_products[i].get_expiration_date() << endl;
			cout << "Weight: " << _fish_products[i].get_weight() << endl;
			cout << endl;
		}
	}
};

#endif // !FISH_PRODUCTS
