#ifndef PETS_FOODS
#define PETS_FOODS

#include "lib.h"

class PetsFoods {
private:
	string _name;
	string _brand;
	double _price;
	double _stock_quantity;
	string _expiration_date;
	double _weight;
public:
	// Constructors
	PetsFoods() {
		_name = "";
		_brand = "";
		_price = 0;
		_stock_quantity = 0;
		_expiration_date = "";
		_weight = 0;
	}
	PetsFoods(string name, double price, double weight) {
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

class PetsFoods_Manager : public PetsFoods {
private:
	vector<PetsFoods> _pets_foods;
public:
	// Constructors
	void add_pet_food(PetsFoods pet_food) {
		_pets_foods.push_back(pet_food);
	}
	//Methods
	void add_pet_food(string name, double price, double weight) {
		PetsFoods pet_food(name, price, weight);
		_pets_foods.push_back(pet_food);
	}
	void remove_pet_food(string name) {
		for (int i = 0; i < _pets_foods.size(); i++) {
			if (_pets_foods[i].get_name() == name) {
				_pets_foods.erase(_pets_foods.begin() + i);
				break;
			}
		}
	}
	void print() {
		for (int i = 0; i < _pets_foods.size(); i++) {
			cout << "Name: " << _pets_foods[i].get_name() << endl;
			cout << "Brand: " << _pets_foods[i].get_brand() << endl;
			cout << "Price: " << _pets_foods[i].get_price() << endl;
			cout << "Stock Quantity: " << _pets_foods[i].get_stock_quantity() << endl;
			cout << "Expiration Date: " << _pets_foods[i].get_expiration_date() << endl;
			cout << "Weight: " << _pets_foods[i].get_weight() << endl;
			cout << endl;
		}
	}
};

#endif // !PET_FOODS