#include <iostream>
#include <string>
using namespace std;

// Superclase Libro
class Libro {
protected:
    string titulo;
    string autor;
    int anioPublicacion;

public:
    Libro(const string& titulo, const string& autor, int anioPublicacion)
        : titulo(titulo), autor(autor), anioPublicacion(anioPublicacion) {
    }

    virtual void mostrarInformacion() const {
        cout << "Titulo: " << titulo << endl;
        cout << "Autor: " << autor << endl;
        cout << "Anio de publicacion: " << anioPublicacion << endl;
    }
};

// Subclase Novela
class Novela : public Libro {
private:
    int numeroPaginas;

public:
    Novela(const string& titulo, const string& autor, int anioPublicacion, int numeroPaginas)
        : Libro(titulo, autor, anioPublicacion), numeroPaginas(numeroPaginas) {
    }

    void mostrarInformacion() const override {
        Libro::mostrarInformacion();
        cout << "Numero de paginas: " << numeroPaginas << endl;
    }
};

// Subclase Poesia
class Poesia : public Libro {
private:
    string estilo;

public:
    Poesia(const string& titulo, const string& autor, int anioPublicacion, const string& estilo)
        : Libro(titulo, autor, anioPublicacion), estilo(estilo) {
    }

    void mostrarInformacion() const override {
        Libro::mostrarInformacion();
        cout << "Estilo: " << estilo << endl;
    }
};

// Subclase Ensayo
class Ensayo : public Libro {
private:
    string tema;

public:
    Ensayo(const string& titulo, const string& autor, int anioPublicacion, const string& tema)
        : Libro(titulo, autor, anioPublicacion), tema(tema) {
    }

    void mostrarInformacion() const override {
        Libro::mostrarInformacion();
        cout << "Tema: " << tema << endl;
    }
};

int main() {
    // Crear objetos de cada subclase
    Novela novela("La sombra del viento", "Carlos Ruiz Zafon", 2001, 416);
    Poesia poesia("Cantos de amor y de muerte", "Pablo Neruda", 1954, "Romantico");
    Ensayo ensayo("El origen de las especies", "Charles Darwin", 1859, "Biologia evolutiva");

    // Mostrar informacion de cada objeto
    cout << "Novela:" << endl;
    novela.mostrarInformacion();
    cout << endl;

    cout << "Poesia:" << endl;
    poesia.mostrarInformacion();
    cout << endl;

    cout << "Ensayo:" << endl;
    ensayo.mostrarInformacion();
    cout << endl;

    return 0;
}