#include <iostream>
#include <conio.h>
#include <fstream>
#include "Movie.h"
#include <vector>
#include <string>
#include <chrono>
using namespace std;

int main() {
	ifstream file("movies_info_fixed.txt", ios::in);
	vector<Movie> arreglo;

	std::chrono::steady_clock::time_point start;
	std::chrono::steady_clock::time_point end;
	start = std::chrono::steady_clock::now();

	int registros = 1;
	//!file.eof()
	while (!file.eof()) {
		//cout << "\n\nRegistro N: " << registros;
		Movie peli;
		peli.ReadOriginal(file);
		arreglo.push_back(peli);
		registros++;
		//peli.print();
	}
	file.close();

	end = std::chrono::steady_clock::now();
	std::chrono::duration<float> duration = end - start;

	int tiempo = duration.count();

	cout << "\n\nLa lectura duro: " << tiempo << " segundos";

	start = std::chrono::steady_clock::now();
	ofstream file2("movies_copy.bin", ios::out | ios::app | ios::binary);
	registros = 1;
	for (int i = 0; i < arreglo.size(); i++) {
		//cout << "\n\nRegistro N: " << registros;
		DelimTextBuffer delim('^', 40000);
		arreglo[i].Write(delim,file2, 5);
		registros++;
	}
	file2.close();

	end = std::chrono::steady_clock::now();
	duration = end - start;

	tiempo = duration.count();

	cout << "\n\nLa escritura duro: " << tiempo << " segundos";

	/*ofstream file2("movies_copy2.bin", ios::out | ios::app | ios::binary);
	for (int i = 0; i < arreglo.size(); i++) {
		arreglo[i].Write(file2, 0);
	}
	file2.close();*/


	/*vector<Movie> arreglo2;
	ifstream file2("movies_copy.bin", ios::in | ios::binary);
	while(!file2.eof()){
		DelimTextBuffer delim('^', 100000);

		Movie peli;
		peli.Read(delim,file2);
		arreglo2.push_back(peli);
	}
	file2.close();*/

	/*for (int i = 0; i < arreglo2.size(); i++) {
		arreglo2[i].print();
	}*/	


	/*int opcion;
	do {
		cout << "\n\n***SISTEMA DE ARCHIVOS***\n\n";
		cout << "1. Escritura de Archivos.\n"
			<< "2. Lectura de Archivos.\n"
			<< "3. Salir.\n\nSelecciona una de las opciones:";
		cin >> opcion;

		switch (opcion) {
		case 1: {
			cout << "\n\n***ESCRITURA DE ARCHIVOS***\n\n";
			string pathOrigen = " ";
			string pathDestino = " ";
			int useBuffer, repeticiones = 1;

			cout << "Ejemplo: C:/Users/admin/desktop/archivo.txt\nIngrese Path del archivo original:";
			cin >> pathOrigen;

			cout << "\n\nEjemplo: C:/Users/admin/desktop/archivo_nuevo.bin\nIngrese Path del archivo destino:";
			cin >> pathDestino;

			cout << "\n\n¿Usar Buffer? 0 = NO ---- 1 = SI:";
			cin >> useBuffer;

			cout << "\n\nIngrese el numero de veces a repetir cada registro:";
			cin >> repeticiones;

			ifstream file(pathOrigen, ios::in);

			if (!file) {
				cout << "Error al intentar abrir el archivo origen en: " << pathOrigen <<"\n\n";
				break;
			}

			vector<Movie> peliculas;

			cout << "\n\n***RECUPERACION EN PROCESO***";
			int registros = 1;

			std::chrono::steady_clock::time_point start;
			std::chrono::steady_clock::time_point end;
			start = std::chrono::steady_clock::now();

			while (registros != 4) {
				Movie peli;
				peli.ReadOriginal(file);
				peliculas.push_back(peli);
				registros++;
			}
			file.close();

			end = std::chrono::steady_clock::now();
			std::chrono::duration<float> duration = end - start;

			int tiempo = duration.count();

			cout << "\n\n***RECUPERACION FINALIZADA***\nSe recuperraron: " << registros << "  registros en total.\nEl programa tomo: " << tiempo << " en recuperar los datos.";
			
			ofstream file2(pathDestino, ios::out | ios::app | ios::binary);
			if (!file2) {
				cout << "Error al intentar abrir el archivo destino en: " << pathDestino << "\n\n";
				break;
			}

			cout << "\n\n***COPIA EN PROCESO***";
			start = std::chrono::steady_clock::now();
			if (useBuffer == 0) {
				for (int j = 0; j < peliculas.size(); j++) {
					peliculas[j].Write(file2,repeticiones);
				}
			}
			else {
				for (int j = 0; j < peliculas.size(); j++) {
					DelimTextBuffer delim('^', 100000);
					peliculas[j].Write(delim, file2, repeticiones);
				}
			}
			file2.close();

			end = std::chrono::steady_clock::now();
			duration = end - start;

			tiempo = duration.count();

			cout << "\n\n***COPIA FINALIZADA***\nSe copiaron: " << (registros*repeticiones) << "  registros en total.\nEl programa tomo: " << tiempo << " en copiar los datos.";
			break;
		}

		case 2: {
			cout << "\n\n***LECTURA DE ARCHIVOS***\n\n";
			string pathOrigen = " ";
			int useBuffer;

			cout << "Ejemplo: C:/Users/admin/desktop/archivo.binario\nIngrese Path del archivo binario:";
			cin >> pathOrigen;

			cout << "\n\n¿Usar Buffer? 0 = NO ---- 1 = SI:";
			cin >> useBuffer;

			vector<Movie> peliculas;
			ifstream file2(pathOrigen, ios::in | ios::binary);

			if (!file2) {
				cout << "Error al intentar abrir el archivo binario origen en: " << pathOrigen << "\n\n";
				break;
			}

			cout << "\n\n***LECTURA EN PROCESO***";
			int registros = 1;
			std::chrono::steady_clock::time_point start;
			std::chrono::steady_clock::time_point end;
			start = std::chrono::steady_clock::now();

			if (useBuffer == 0) {
				while (!file2.eof()) {
					Movie peli;
					peli.Read(file2);
					peliculas.push_back(peli);
					registros++;
				}
			}
			else {
				while (!file2.eof()) {
					DelimTextBuffer delim('^', 100000);

					Movie peli;
					peli.Read(delim, file2);
					peliculas.push_back(peli);
					registros++;
				}
			}
			file2.close();

			end = std::chrono::steady_clock::now();
			std::chrono::duration<float> duration = end - start;

			int tiempo = duration.count();

			cout << "\n\n***LECTURA FINALIZADA***\nSe recuperaron: " << registros << "  registros en total.\nEl programa tomo: " << tiempo << " en rescatar los datos.";
			break;
		}

		case 3:
			cout << "\n\n***Saliendo..............***";
			break;
		}

	} while (opcion != 3);*/
}