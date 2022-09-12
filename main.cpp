// =================================================================
//
// File: main.cpp
// Author: Hossue E. Ceja Cartagena
// Date: 11/09/2022
//
// =================================================================
#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main(int argc, char* argv[]) {
	int n = 0, ni = 0;
	string prefix, linea, texto;
	ifstream inputFile; //Creamos nuestra variabe de tipo lectura
	ofstream outputFile; //Creamos nuestra variable de tipo escritura

	inputFile.open("entrada.txt");

	while(getline(inputFile,linea))
    {
    texto = texto + linea + "\n";
    }
    

	inputFile.open(argv[1]); //Obtenemos el numero de barcos que ha entrado al canal 

	inputFile >> n; //Asignamos el número de barcos a la variable n
	vector <int> v(n); //Creamos un vector de tipo entero llamado v con un espacio máximo de n elementos
						//Dichos espacios creados en el vector están vacíos

	//Sección del prefijo
	inputFile.open(argv[2]); //Obtengo el prefix
	inputFile>>prefix; //Guardo el prefijo en una variable



	for (int i = 0; i < n; i++){ //Recorremos el vector
		inputFile >> ni; //Guardamos los valores del inputFile en ni
		if (i == prefix){
			getline(inputFile, linea);
			cout<<linea<<endl;
		}	
	}

	return 0; //Finalizamos ejecución del programa
}