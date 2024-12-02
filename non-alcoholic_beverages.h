#ifndef NON-ALCOHOLIC_BEVERAGES
#define NON-ALCOHOLIC_BEVERAGES

#include "lib.h"

class NonAlcoholicBeverages {
private:
	string _name;
	string _brand;
	double _price;
	double _stock_quantity;
	string _expiration_date;
	double _volume;
public:
	// Constructors
	NonAlcoholicBeverages() {
		_name = "";
		_brand = "";
		_price = 0;
		_stock_quantity = 0;
		_expiration_date = "";
		_volume = 0;
	}
	NonAlcoholicBeverages(string name, double price, double volume) {
		_name = name;
		_brand = "";
		_price = price;
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

class NonAlcoholicBeverages_Manager : public NonAlcoholicBeverages {
private:
	vector<NonAlcoholicBeverages> _non_alcoholic_beverages;
public:
	// Constructors
	void add_non_alcoholic_beverage(NonAlcoholicBeverages non_alcoholic_beverage) {
		_non_alcoholic_beverages.push_back(non_alcoholic_beverage);
	}
	//Methods
	void add_non_alcoholic_beverage(string name, double price, double volume) {
		NonAlcoholicBeverages non_alcoholic_beverage(name, price, volume);
		_non_alcoholic_beverages.push_back(non_alcoholic_beverage);
	}
	void remove_non_alcoholic_beverage(string name) {
		for (int i = 0; i < _non_alcoholic_beverages.size(); i++) {
			if (_non_alcoholic_beverages[i].get_name() == name) {
				_non_alcoholic_beverages.erase(_non_alcoholic_beverages.begin() + i);
				break;
			}
		}
	}
	void print_non_alcoholic_beverages() {
		for (int i = 0; i < _non_alcoholic_beverages.size(); i++) {
			cout << "Name: " << _non_alcoholic_beverages[i].get_name() << endl;
			cout << "Brand: " << _non_alcoholic_beverages[i].get_brand() << endl;
			cout << "Price: " << _non_alcoholic_beverages[i].get_price() << endl;
			cout << "Stock Quantity: " << _non_alcoholic_beverages[i].get_stock_quantity() << endl;
			cout << "Expiration Date: " << _non_alcoholic_beverages[i].get_expiration_date() << endl;
			cout << "Volume: " << _non_alcoholic_beverages[i].get_volume() << endl;
			cout << endl;
		}
	}
};

#endif // !NON-ALCOHOLIC_BEVERAGES