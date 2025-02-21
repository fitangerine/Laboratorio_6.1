#include <iostream>
#include <string>

using namespace std;

class Pedido {
private:
	int id; //Codigo del pedido
	string nombre; //Nombre del cliente
	double total; //Total del pedido en quetzales

public:
	//Constructor
	Pedido(int id, string nombre, double total)
		: id(id), nombre(nombre), total(total){ }
	int getId() const { return id; }
	std::string getNombre() const { return nombre; }
	double getTotal() const { return total; }

	//Metodo Mostrar la informacion 
	void MostrarInfo()const {
		std::cout << "ID del pedido: " << id << '\n';
		std::cout << "Nombre del Cliente: " << nombre << '\n';
		std::cout << "Total del pedido: Q" << total << '\n';
	}

	//Metodo mostrar solo total y codigo
	void mostrarTotal()const {
		std::cout << "El pedido " << id << " vale un total de Q" << total << '\n';
	}
};

int main() {
	Pedido p1(001, "Carmen Lopez", 200.00);
	p1.MostrarInfo();
	p1.mostrarTotal();

	Pedido p2(002, "Jose Perez", 150.00);
	p2.MostrarInfo();
	p2.mostrarTotal();

	return 0;
}

