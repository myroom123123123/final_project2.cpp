#ifndef PRODUCTSMANAGMENT
#define PRODUCTSMANAGMENT

#include "lib.h"
#include "domain.h"

class ProductsManagment {
private:
	vector<Groceries> _groceries;
	vector<Bakery> _bakery;
	vector<MilkProducts> _milk_products;
	vector<AlcoholicBeverages> _alcoholic_beverages;
	vector<NonAlcoholicBeverages> _non_alcoholic_beverages;
	vector<FrozenFoods> _frozen_foods;
	vector<TeaAndCoffee> _tea_and_coffee;
	vector<Fruits> _fruits;
	vector<Vegetables> _vegetables;
	vector<FishProducts> _fish_products;
	vector<MeatProducts> _meat_products;
	vector<PetsFoods> _pets_foods;
public:
	// Constructors
	void add_grocery(Groceries grocery) {
		_groceries.push_back(grocery);
	}
	void add_bakery(Bakery bakery) {
		_bakery.push_back(bakery);
	}
	void add_milk_product(MilkProducts milk_product) {
		_milk_products.push_back(milk_product);
	}
	void add_alcoholic_beverage(AlcoholicBeverages alcoholic_beverage) {
		_alcoholic_beverages.push_back(alcoholic_beverage);
	}
	void add_non_alcoholic_beverage(NonAlcoholicBeverages non_alcoholic_beverage) {
		_non_alcoholic_beverages.push_back(non_alcoholic_beverage);
	}
	void add_frozen_food(FrozenFoods frozen_food) {
		_frozen_foods.push_back(frozen_food);
	}
	void add_tea_and_coffee(TeaAndCoffee tea_and_coffee) {
		_tea_and_coffee.push_back(tea_and_coffee);
	}
	void add_fruit(Fruits fruit) {
		_fruits.push_back(fruit);
	}
	void add_vegetable(Vegetables vegetable) {
		_vegetables.push_back(vegetable);
	}
	void add_fish_product(FishProducts fish_product) {
		_fish_products.push_back(fish_product);
	}
	void add_meat_product(MeatProducts meat_product) {
		_meat_products.push_back(meat_product);
	}
	void add_pet_food(PetsFoods pet_food) {
		_pets_foods.push_back(pet_food);
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
			cout << "Price: " << _groceries[i].get_price() << endl;
			cout << "Weight: " << _groceries[i].get_weight() << endl;
			cout << "--------------------------------" << endl;
		}
	}
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
			cout << "Price: " << _bakery[i].get_price() << endl;
			cout << "Weight: " << _bakery[i].get_weight() << endl;
			cout << "--------------------------------" << endl;
		}
	}
	void add_milk_product(string name, double price, double fat_content, double volume) {
		MilkProducts milk_product(name, price, fat_content, volume);
		_milk_products.push_back(milk_product);
	}
	void remove_milk_product(string name) {
		for (int i = 0; i < _milk_products.size(); i++) {
			if (_milk_products[i].get_name() == name) {
				_milk_products.erase(_milk_products.begin() + i);
				break;
			}
		}
	}
	void print_milk_products() {
		for (int i = 0; i < _milk_products.size(); i++) {
			cout << "Name: " << _milk_products[i].get_name() << endl;
			cout << "Price: " << _milk_products[i].get_price() << endl;
			cout << "Fat content: " << _milk_products[i].get_fat_content() << endl;
			cout << "Volume: " << _milk_products[i].get_volume() << endl;
			cout << "--------------------------------" << endl;
		}
	}
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
			cout << "Price: " << _alcoholic_beverages[i].get_price() << endl;
			cout << "Volume: " << _alcoholic_beverages[i].get_volume() << endl;
			cout << "Alcohol content: " << _alcoholic_beverages[i].get_alcohol_content() << endl;
			cout << "--------------------------------" << endl;
		}
	}
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
			cout << "Price: " << _non_alcoholic_beverages[i].get_price() << endl;
			cout << "Volume: " << _non_alcoholic_beverages[i].get_volume() << endl;
			cout << "--------------------------------" << endl;
		}
	}
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
			cout << "Price: " << _frozen_foods[i].get_price() << endl;
			cout << "Weight: " << _frozen_foods[i].get_weight() << endl;
			cout << "--------------------------------" << endl;
		}
	}
	void add_tea_and_coffee(string name, double price, double weight) {
		TeaAndCoffee tea_and_coffee(name, price, weight);
		_tea_and_coffee.push_back(tea_and_coffee);
	}
	void remove_tea_and_coffee(string name) {
		for (int i = 0; i < _tea_and_coffee.size(); i++) {
			if (_tea_and_coffee[i].get_name() == name) {
				_tea_and_coffee.erase(_tea_and_coffee.begin() + i);
				break;
			}
		}
	}
	void print_tea_and_coffee() {
		for (int i = 0; i < _tea_and_coffee.size(); i++) {
			cout << "Name: " << _tea_and_coffee[i].get_name() << endl;
			cout << "Price: " << _tea_and_coffee[i].get_price() << endl;
			cout << "Weight: " << _tea_and_coffee[i].get_weight() << endl;
			cout << "--------------------------------" << endl;
		}
	}
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
			cout << "Price: " << _fruits[i].get_price() << endl;
			cout << "Weight: " << _fruits[i].get_weight() << endl;
			cout << "--------------------------------" << endl;
		}
	}
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
			cout << "Price: " << _vegetables[i].get_price() << endl;
			cout << "Weight: " << _vegetables[i].get_weight() << endl;
			cout << "--------------------------------" << endl;
		}
	}
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
			cout << "Price: " << _fish_products[i].get_price() << endl;
			cout << "Weight: " << _fish_products[i].get_weight() << endl;
			cout << "--------------------------------" << endl;
		}
	}
	void add_meat_product(string name, double price, double weight) {
		MeatProducts meat_product(name, price, weight);
		_meat_products.push_back(meat_product);
	}
	void remove_meat_product(string name) {
		for (int i = 0; i < _meat_products.size(); i++) {
			if (_meat_products[i].get_name() == name) {
				_meat_products.erase(_meat_products.begin() + i);
				break;
			}
		}
	}
	void print_meat_products() {
		for (int i = 0; i < _meat_products.size(); i++) {
			cout << "Name: " << _meat_products[i].get_name() << endl;
			cout << "Price: " << _meat_products[i].get_price() << endl;
			cout << "Weight: " << _meat_products[i].get_weight() << endl;
			cout << "--------------------------------" << endl;
		}
	}
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
	void print_pet_foods() {
		for (int i = 0; i < _pets_foods.size(); i++) {
			cout << "Name: " << _pets_foods[i].get_name() << endl;
			cout << "Price: " << _pets_foods[i].get_price() << endl;
			cout << "Weight: " << _pets_foods[i].get_weight() << endl;
			cout << "--------------------------------" << endl;
		}
	}

	//function for printing menu
	void print_menu() {
		cout << "1. Groceries" << endl;
		cout << "2. Bakery" << endl;
		cout << "3. Milk products" << endl;
		cout << "4. Alcoholic beverages" << endl;
		cout << "5. Non-alcoholic beverages" << endl;
		cout << "6. Frozen foods" << endl;
		cout << "7. Tea and coffee" << endl;
		cout << "8. Fruits" << endl;
		cout << "9. Vegetables" << endl;
		cout << "10. Fish products" << endl;
		cout << "11. Meat products" << endl;
		cout << "12. Pets foods" << endl;
		cout << "13. Exit" << endl;
	}

	//function for choosing sub menu
	int chooseMenu() {
		int choice;
		cout << "Choose a menu item: ";
		cin >> choice;
		return choice;
	}

	//function for printing sub menu
	void print_sub_menu() {
		cout << "1. Add product" << endl;
		cout << "2. Remove product" << endl;
		cout << "3. Print products" << endl;
		cout << "4. Exit" << endl;
	}
};

#endif // !PRODUCTSMANAGMENT