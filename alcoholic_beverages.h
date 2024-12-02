#ifndef ALCOHOLIC_BEVERAGES
#define ALCOHOLIC_BEVERAGES

#include "lib.h"

class AlcoholicBeverages {
private:
	string _name;
	string _brand;
	double _price;
	double _stock_quantity;
	string _expiration_date;
	double _volume;
	double _alcohol_content;
public:
	// Constructors
	AlcoholicBeverages() {
		_name = "";
		_brand = "";
		_price = 0;
		_stock_quantity = 0;
		_expiration_date = "";
		_volume = 0;
		_alcohol_content = 0;
	}
	AlcoholicBeverages(string name, double price, double volume, double alcohol_content) {
		_name = name;
		_brand = "";
		_price = price;
		_stock_quantity = 0;
		_expiration_date = "";
		_volume = volume;
		_alcohol_content = alcohol_content;
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
	double get_alcohol_content() const {
		return _alcohol_content;
	}
};

class AlcoholicBeverages_Manager : public AlcoholicBeverages {
private:
	vector<AlcoholicBeverages> _alcoholic_beverages;
public:
	// Constructors
	void add_alcoholic_beverage(AlcoholicBeverages alcoholic_beverage) {
		_alcoholic_beverages.push_back(alcoholic_beverage);
	}
	//Methods
	void add_alcoholic_beverage(string name, double price, double volume, double alcohol_content) {
		AlcoholicBeverages alcoholic_beverage(name, price, volume, alcohol_content);
		_alcoholic_beverages.push_back(alcoholic_beverage);
	}
	void remove_alcoholic_beverage(string name) {
		for (int i = 0; i < _alcoholic_beverages.size(); i++) {
			if (_alcoholic_beverages[i].get_name() == name) {
				_alcoholic_beverages.erase(_alcoholic_beverages.begin() + i);
				break;
			}
		}
	}
	void print_alcoholic_beverages() {
		for (int i = 0; i < _alcoholic_beverages.size(); i++) {
			cout << "Name: " << _alcoholic_beverages[i].get_name() << endl;
			cout << "Brand: " << _alcoholic_beverages[i].get_brand() << endl;
			cout << "Price: " << _alcoholic_beverages[i].get_price() << endl;
			cout << "Stock Quantity: " << _alcoholic_beverages[i].get_stock_quantity() << endl;
			cout << "Expiration Date: " << _alcoholic_beverages[i].get_expiration_date() << endl;
			cout << "Volume: " << _alcoholic_beverages[i].get_volume() << endl;
			cout << "Alcohol Content: " << _alcoholic_beverages[i].get_alcohol_content() << endl;
			cout << endl;
		}
	}
};

#endif // !ALCOHOLIC_BEVERAGES