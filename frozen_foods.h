#ifndef FROZEN_FOODS
#define FROZEN_FOODS

#include "lib.h"

class FrozenFoods {
private:
	string _name;
	string _brand;
	double _price;
	double _stock_quantity;
	string _expiration_date;
	double _weight;
public:
	// Constructors
	FrozenFoods() {
		_name = "";
		_brand = "";
		_price = 0;
		_stock_quantity = 0;
		_expiration_date = "";
		_weight = 0;
	}
	FrozenFoods(string name, double price, double weight) {
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

class FrozenFoods_Manager : public FrozenFoods {
private:
	vector<FrozenFoods> _frozen_foods;
public:
	// Constructors
	void add_frozen_food(FrozenFoods frozen_food) {
		_frozen_foods.push_back(frozen_food);
	}
	//Methods
	void add_frozen_food(string name, double price, double weight) {
		FrozenFoods frozen_food(name, price, weight);
		_frozen_foods.push_back(frozen_food);
	}
	void remove_frozen_food(string name) {
		for (int i = 0; i < _frozen_foods.size(); i++) {
			if (_frozen_foods[i].get_name() == name) {
				_frozen_foods.erase(_frozen_foods.begin() + i);
				break;
			}
		}
	}
	void print_frozen_foods() {
		for (int i = 0; i < _frozen_foods.size(); i++) {
			cout << "Name: " << _frozen_foods[i].get_name() << endl;
			cout << "Brand: " << _frozen_foods[i].get_brand() << endl;
			cout << "Price: " << _frozen_foods[i].get_price() << endl;
			cout << "Stock Quantity: " << _frozen_foods[i].get_stock_quantity() << endl;
			cout << "Expiration Date: " << _frozen_foods[i].get_expiration_date() << endl;
			cout << "Weight: " << _frozen_foods[i].get_weight() << endl;
			cout << endl;
		}
	}
};


#endif // !FROZEN_FOODS