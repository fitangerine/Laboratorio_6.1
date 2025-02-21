#include <iostream>
#include <string>
using namespace std;

// Superclase Vehiculo
class Vehiculo {
protected:
    string marca;
    string modelo;
    int anio;
    string color;
    string placa;

public:
    Vehiculo(const string& marca, const string& modelo, int anio, const string& color, const string& placa)
        : marca(marca), modelo(modelo), anio(anio), color(color), placa(placa) {
    }

    virtual void mostrarInformacion() const {
        cout << "Marca: " << marca << endl;
        cout << "Modelo: " << modelo << endl;
        cout << "Anio: " << anio << endl;
        cout << "Color: " << color << endl;
        cout << "Placa: " << placa << endl;
    }
};

// Subclase Automovil
class Automovil : public Vehiculo {
private:
    int numeroPuertas;

public:
    Automovil(const string& marca, const string& modelo, int anio, const string& color, const string& placa, int numeroPuertas)
        : Vehiculo(marca, modelo, anio, color, placa), numeroPuertas(numeroPuertas) {
    }

    void mostrarInformacion() const override {
        Vehiculo::mostrarInformacion();
        cout << "Numero de puertas: " << numeroPuertas << endl;
    }
};

// Subclase Camion
class Camion : public Vehiculo {
private:
    int capacidadCarga;

public:
    Camion(const string& marca, const string& modelo, int anio, const string& color, const string& placa, int capacidadCarga)
        : Vehiculo(marca, modelo, anio, color, placa), capacidadCarga(capacidadCarga) {
    }

    void mostrarInformacion() const override {
        Vehiculo::mostrarInformacion();
        cout << "Capacidad de carga: " << capacidadCarga << " toneladas" << endl;
    }
};

// Subclase Motocicleta
class Motocicleta : public Vehiculo {
private:
    int cilindrada;

public:
    Motocicleta(const string& marca, const string& modelo, int anio, const string& color, const string& placa, int cilindrada)
        : Vehiculo(marca, modelo, anio, color, placa), cilindrada(cilindrada) {
    }

    void mostrarInformacion() const override {
        Vehiculo::mostrarInformacion();
        cout << "Cilindrada: " << cilindrada << " cc" << endl;
    }
};

int main() {
    // Crear objetos de cada subclase
    Automovil automovil("Toyota", "Corolla", 2015, "Blanco", "ABC123", 4);
    Camion camion("Ford", "F-150", 2010, "Negro", "DEF456", 2);
    Motocicleta motocicleta("Honda", "CBR500R", 2018, "Rojo", "GHI789", 500);

    // Mostrar informacion de cada objeto
    cout << "Automovil:" << endl;
    automovil.mostrarInformacion();
    cout << endl;

    cout << "Camion:" << endl;
    camion.mostrarInformacion();
    cout << endl;

    cout << "Motocicleta:" << endl;
    motocicleta.mostrarInformacion();
    cout << endl;

    return 0;
}
