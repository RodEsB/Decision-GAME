#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <conio.h>
#include <string.h>
using namespace std;

void libro_tres()
{
	ifstream lectur;
	string texto;
	
	lectur.open("libt.txt",ios::in);	//Abriendo el archivo en modo lectura
	
	if (lectur.fail())	//Si se encuentra un problema al buscar el archivo muestra lo siguiente...
	{
		
		cout<<"No se pudo abrir el archivo, verifique que el archivo se encuentre en la misma carpeta del programa...";
		exit(1);	//Termina programa si no se encuentra el archivo
	}
	while (!lectur.eof())	//mientras no sea el final del archivo
	{
		getline(lectur,texto);
		cout<<texto<<endl;
	}
	
	lectur.close();	//cerramos el archivo
}

void libro_dos()
{
	ifstream lectur;
	string texto;
	
	lectur.open("libd.txt",ios::in);	//Abriendo el archivo en modo lectura
	
	if (lectur.fail())	//Si se encuentra un problema al buscar el archivo muestra lo siguiente...
	{
		
		cout<<"No se pudo abrir el archivo, verifique que el archivo se encuentre en la misma carpeta del programa...";
		exit(1);	//Termina programa si no se encuentra el archivo
	}
	while (!lectur.eof())	//mientras no sea el final del archivo
	{
		getline(lectur,texto);
		cout<<texto<<endl;
	}
	
	lectur.close();	//cerramos el archivo
}

void libro_uno()
{
	ifstream lectur;
	string texto;
	
	lectur.open("libu.txt",ios::in);	//Abriendo el archivo en modo lectura
	
	if (lectur.fail())	//Si se encuentra un problema al buscar el archivo muestra lo siguiente...
	{
		
		cout<<"No se pudo abrir el archivo, verifique que el archivo se encuentre en la misma carpeta del programa...";
		exit(1);	//Termina programa si no se encuentra el archivo
	}
	while (!lectur.eof())	//mientras no sea el final del archivo
	{
		getline(lectur,texto);
		cout<<texto<<endl;
	}
	
	lectur.close();	//cerramos el archivo
}
void opcion_derecha_b_b()
{
	ifstream lectur;
	string texto;
	
	lectur.open("derebb.txt",ios::in);	//Abriendo el archivo en modo lectura
	
	if (lectur.fail())	//Si se encuentra un problema al buscar el archivo muestra lo siguiente...
	{
		
		cout<<"No se pudo abrir el archivo, verifique que el archivo se encuentre en la misma carpeta del programa...";
		exit(1);	//Termina programa si no se encuentra el archivo
	}
	while (!lectur.eof())	//mientras no sea el final del archivo
	{
		getline(lectur,texto);
		cout<<texto<<endl;
	}
	
	lectur.close();	//cerramos el archivo
}

void opcion_derecha_b_a()
{
	ifstream lectur;
	string texto;
	
	lectur.open("dereba.txt",ios::in);	//Abriendo el archivo en modo lectura
	
	if (lectur.fail())	//Si se encuentra un problema al buscar el archivo muestra lo siguiente...
	{
		
		cout<<"No se pudo abrir el archivo, verifique que el archivo se encuentre en la misma carpeta del programa...";
		exit(1);	//Termina programa si no se encuentra el archivo
	}
	while (!lectur.eof())	//mientras no sea el final del archivo
	{
		getline(lectur,texto);
		cout<<texto<<endl;
	}
	
	lectur.close();	//cerramos el archivo
}

void opcion_derecha_a_b()
{
	ifstream lectur;
	string texto;
	
	lectur.open("dereab.txt",ios::in);	//Abriendo el archivo en modo lectura
	
	if (lectur.fail())	//Si se encuentra un problema al buscar el archivo muestra lo siguiente...
	{
		
		cout<<"No se pudo abrir el archivo, verifique que el archivo se encuentre en la misma carpeta del programa...";
		exit(1);	//Termina programa si no se encuentra el archivo
	}
	while (!lectur.eof())	//mientras no sea el final del archivo
	{
		getline(lectur,texto);
		cout<<texto<<endl;
	}
	
	lectur.close();	//cerramos el archivo
}
void opcion_derecha_a_a()
{
	ifstream lectur;
	string texto;
	
	lectur.open("dereaa.txt",ios::in);	//Abriendo el archivo en modo lectura
	
	if (lectur.fail())	//Si se encuentra un problema al buscar el archivo muestra lo siguiente...
	{
		
		cout<<"No se pudo abrir el archivo, verifique que el archivo se encuentre en la misma carpeta del programa...";
		exit(1);	//Termina programa si no se encuentra el archivo
	}
	while (!lectur.eof())	//mientras no sea el final del archivo
	{
		getline(lectur,texto);
		cout<<texto<<endl;
	}
	
	lectur.close();	//cerramos el archivo
}
void opcion_derecha_b()
{
	ifstream lectur;
	string texto;
	
	lectur.open("dereb.txt",ios::in);	//Abriendo el archivo en modo lectura
	
	if (lectur.fail())	//Si se encuentra un problema al buscar el archivo muestra lo siguiente...
	{
		
		cout<<"No se pudo abrir el archivo, verifique que el archivo se encuentre en la misma carpeta del programa...";
		exit(1);	//Termina programa si no se encuentra el archivo
	}
	while (!lectur.eof())	//mientras no sea el final del archivo
	{
		getline(lectur,texto);
		cout<<texto<<endl;
	}
	
	lectur.close();	//cerramos el archivo
}

void opcion_derecha_a()
{
	ifstream lectur;
	string texto;
	
	lectur.open("derea.txt",ios::in);	//Abriendo el archivo en modo lectura
	
	if (lectur.fail())	//Si se encuentra un problema al buscar el archivo muestra lo siguiente...
	{
		
		cout<<"No se pudo abrir el archivo, verifique que el archivo se encuentre en la misma carpeta del programa...";
		exit(1);	//Termina programa si no se encuentra el archivo
	}
	while (!lectur.eof())	//mientras no sea el final del archivo
	{
		getline(lectur,texto);
		cout<<texto<<endl;
	}
	
	lectur.close();	//cerramos el archivo
}

void opcion_izquierda_b_a_b_1()
{
	ifstream lectur;
	string texto;
	
	lectur.open("izqbab1.txt",ios::in);	//Abriendo el archivo en modo lectura
	
	if (lectur.fail())	//Si se encuentra un problema al buscar el archivo muestra lo siguiente...
	{
		
		cout<<"No se pudo abrir el archivo, verifique que el archivo se encuentre en la misma carpeta del programa...";
		exit(1);	//Termina programa si no se encuentra el archivo
	}
	while (!lectur.eof())	//mientras no sea el final del archivo
	{
		getline(lectur,texto);
		cout<<texto<<endl;
	}
	
	lectur.close();	//cerramos el archivo
}
void opcion_izquierda_b_a_a_1()
{
	ifstream lectur;
	string texto;
	
	lectur.open("izqbaa1.txt",ios::in);	//Abriendo el archivo en modo lectura
	
	if (lectur.fail())	//Si se encuentra un problema al buscar el archivo muestra lo siguiente...
	{
		
		cout<<"No se pudo abrir el archivo, verifique que el archivo se encuentre en la misma carpeta del programa...";
		exit(1);	//Termina programa si no se encuentra el archivo
	}
	while (!lectur.eof())	//mientras no sea el final del archivo
	{
		getline(lectur,texto);
		cout<<texto<<endl;
	}
	
	lectur.close();	//cerramos el archivo
}
void opcion_izquierda_b_a_1()
{
	ifstream lectur;
	string texto;
	
	lectur.open("izqba1.txt",ios::in);	//Abriendo el archivo en modo lectura
	
	if (lectur.fail())	//Si se encuentra un problema al buscar el archivo muestra lo siguiente...
	{
		
		cout<<"No se pudo abrir el archivo, verifique que el archivo se encuentre en la misma carpeta del programa...";
		exit(1);	//Termina programa si no se encuentra el archivo
	}
	while (!lectur.eof())	//mientras no sea el final del archivo
	{
		getline(lectur,texto);
		cout<<texto<<endl;
	}
	
	lectur.close();	//cerramos el archivo
}
void opcion_izquierda_b_a_b()
{
	ifstream lectur;
	string texto;
	
	lectur.open("izqbab.txt",ios::in);	//Abriendo el archivo en modo lectura
	
	if (lectur.fail())	//Si se encuentra un problema al buscar el archivo muestra lo siguiente...
	{
		
		cout<<"No se pudo abrir el archivo, verifique que el archivo se encuentre en la misma carpeta del programa...";
		exit(1);	//Termina programa si no se encuentra el archivo
	}
	while (!lectur.eof())	//mientras no sea el final del archivo
	{
		getline(lectur,texto);
		cout<<texto<<endl;
	}
	
	lectur.close();	//cerramos el archivo
}
void opcion_izquierda_b_a_a()
{
	ifstream lectur;
	string texto;
	
	lectur.open("izqbaa.txt",ios::in);	//Abriendo el archivo en modo lectura
	
	if (lectur.fail())	//Si se encuentra un problema al buscar el archivo muestra lo siguiente...
	{
		
		cout<<"No se pudo abrir el archivo, verifique que el archivo se encuentre en la misma carpeta del programa...";
		exit(1);	//Termina programa si no se encuentra el archivo
	}
	while (!lectur.eof())	//mientras no sea el final del archivo
	{
		getline(lectur,texto);
		cout<<texto<<endl;
	}
	
	lectur.close();	//cerramos el archivo
}
void opcion_izquierda_b_a()
{
	ifstream lectur;
	string texto;
	
	lectur.open("izqba.txt",ios::in);	//Abriendo el archivo en modo lectura
	
	if (lectur.fail())	//Si se encuentra un problema al buscar el archivo muestra lo siguiente...
	{
		
		cout<<"No se pudo abrir el archivo, verifique que el archivo se encuentre en la misma carpeta del programa...";
		exit(1);	//Termina programa si no se encuentra el archivo
	}
	while (!lectur.eof())	//mientras no sea el final del archivo
	{
		getline(lectur,texto);
		cout<<texto<<endl;
	}
	
	lectur.close();	//cerramos el archivo
}
void opcion_izquierda_b()
{
	ifstream lectur;
	string texto;
	
	lectur.open("izqb.txt",ios::in);	//Abriendo el archivo en modo lectura
	
	if (lectur.fail())	//Si se encuentra un problema al buscar el archivo muestra lo siguiente...
	{
		
		cout<<"No se pudo abrir el archivo, verifique que el archivo se encuentre en la misma carpeta del programa...";
		exit(1);	//Termina programa si no se encuentra el archivo
	}
	while (!lectur.eof())	//mientras no sea el final del archivo
	{
		getline(lectur,texto);
		cout<<texto<<endl;
	}
	
	lectur.close();	//cerramos el archivo
}
void opcion_izquierda_b_b_b()
{
	ifstream lectur;
	string texto;
	
	lectur.open("izqbbb.txt",ios::in);	//Abriendo el archivo en modo lectura
	
	if (lectur.fail())	//Si se encuentra un problema al buscar el archivo muestra lo siguiente...
	{
		
		cout<<"No se pudo abrir el archivo, verifique que el archivo se encuentre en la misma carpeta del programa...";
		exit(1);	//Termina programa si no se encuentra el archivo
	}
	while (!lectur.eof())	//mientras no sea el final del archivo
	{
		getline(lectur,texto);
		cout<<texto<<endl;
	}
	
	lectur.close();	//cerramos el archivo
}
void opcion_izquierda_a_a_a()
{
	ifstream lectur;
	string texto;
	
	lectur.open("izqaaa.txt",ios::in);	//Abriendo el archivo en modo lectura
	
	if (lectur.fail())	//Si se encuentra un problema al buscar el archivo muestra lo siguiente...
	{
		
		cout<<"No se pudo abrir el archivo, verifique que el archivo se encuentre en la misma carpeta del programa...";
		exit(1);	//Termina programa si no se encuentra el archivo
	}
	while (!lectur.eof())	//mientras no sea el final del archivo
	{
		getline(lectur,texto);
		cout<<texto<<endl;
	}
	
	lectur.close();	//cerramos el archivo
}
void opcion_izquierda_b_b()
{
	ifstream lectur;
	string texto;
	
	lectur.open("izqbb.txt",ios::in);	//Abriendo el archivo en modo lectura
	
	if (lectur.fail())	//Si se encuentra un problema al buscar el archivo muestra lo siguiente...
	{
		
		cout<<"No se pudo abrir el archivo, verifique que el archivo se encuentre en la misma carpeta del programa...";
		exit(1);	//Termina programa si no se encuentra el archivo
	}
	while (!lectur.eof())	//mientras no sea el final del archivo
	{
		getline(lectur,texto);
		cout<<texto<<endl;
	}
	
	lectur.close();	//cerramos el archivo
}
void opcion_izquierda_a_a()
{
	ifstream lectur;
	string texto;
	
	lectur.open("izqaa.txt",ios::in);	//Abriendo el archivo en modo lectura
	
	if (lectur.fail())	//Si se encuentra un problema al buscar el archivo muestra lo siguiente...
	{
		
		cout<<"No se pudo abrir el archivo, verifique que el archivo se encuentre en la misma carpeta del programa...";
		exit(1);	//Termina programa si no se encuentra el archivo
	}
	while (!lectur.eof())	//mientras no sea el final del archivo
	{
		getline(lectur,texto);
		cout<<texto<<endl;
	}
	
	lectur.close();	//cerramos el archivo
}

void opcion_izquierda_a()
{
	ifstream lectur;
	string texto;
	
	lectur.open("izqa.txt",ios::in);	//Abriendo el archivo en modo lectura
	
	if (lectur.fail())	//Si se encuentra un problema al buscar el archivo muestra lo siguiente...
	{
		
		cout<<"No se pudo abrir el archivo, verifique que el archivo se encuentre en la misma carpeta del programa...";
		exit(1);	//Termina programa si no se encuentra el archivo
	}
	while (!lectur.eof())	//mientras no sea el final del archivo
	{
		getline(lectur,texto);
		cout<<texto<<endl;
	}
	
	lectur.close();	//cerramos el archivo
}


void opcion_derecha()
{
	ifstream lectur;
	string texto;
	
	lectur.open("der.txt",ios::in);	//Abriendo el archivo en modo lectura
	
	if (lectur.fail())	//Si se encuentra un problema al buscar el archivo muestra lo siguiente...
	{
		
		cout<<"No se pudo abrir el archivo, verifique que el archivo se encuentre en la misma carpeta del programa...";
		exit(1);	//Termina programa si no se encuentra el archivo
	}
	while (!lectur.eof())	//mientras no sea el final del archivo
	{
		getline(lectur,texto);
		cout<<texto<<endl;
	}
	
	lectur.close();	//cerramos el archivo
}

void opcion_centro_b_a_a()
{
	ifstream lectur;
	string texto;
	
	lectur.open("centbaa.txt",ios::in);	//Abriendo el archivo en modo lectura
	
	if (lectur.fail())	//Si se encuentra un problema al buscar el archivo muestra lo siguiente...
	{
		
		cout<<"No se pudo abrir el archivo, verifique que el archivo se encuentre en la misma carpeta del programa...";
		exit(1);	//Termina programa si no se encuentra el archivo
	}
	while (!lectur.eof())	//mientras no sea el final del archivo
	{
		getline(lectur,texto);
		cout<<texto<<endl;
	}
	
	lectur.close();	//cerramos el archivo
}

void opcion_centro_b_a_b()
{
	ifstream lectur;
	string texto;
	
	lectur.open("centbab.txt",ios::in);	//Abriendo el archivo en modo lectura
	
	if (lectur.fail())	//Si se encuentra un problema al buscar el archivo muestra lo siguiente...
	{
		
		cout<<"No se pudo abrir el archivo, verifique que el archivo se encuentre en la misma carpeta del programa...";
		exit(1);	//Termina programa si no se encuentra el archivo
	}
	while (!lectur.eof())	//mientras no sea el final del archivo
	{
		getline(lectur,texto);
		cout<<texto<<endl;
	}
	
	lectur.close();	//cerramos el archivo
}
void opcion_centro_b_b()
{
	ifstream lectur;
	string texto;
	
	lectur.open("centbb.txt",ios::in);	//Abriendo el archivo en modo lectura
	
	if (lectur.fail())	//Si se encuentra un problema al buscar el archivo muestra lo siguiente...
	{
		
		cout<<"No se pudo abrir el archivo, verifique que el archivo se encuentre en la misma carpeta del programa...";
		exit(1);	//Termina programa si no se encuentra el archivo
	}
	while (!lectur.eof())	//mientras no sea el final del archivo
	{
		getline(lectur,texto);
		cout<<texto<<endl;
	}
	
	lectur.close();	//cerramos el archivo
}


void opcion_centro_b_a()
{
	ifstream lectur;
	string texto;
	
	lectur.open("centba.txt",ios::in);	//Abriendo el archivo en modo lectura
	
	if (lectur.fail())	//Si se encuentra un problema al buscar el archivo muestra lo siguiente...
	{
		
		cout<<"No se pudo abrir el archivo, verifique que el archivo se encuentre en la misma carpeta del programa...";
		exit(1);	//Termina programa si no se encuentra el archivo
	}
	while (!lectur.eof())	//mientras no sea el final del archivo
	{
		getline(lectur,texto);
		cout<<texto<<endl;
	}
	
	lectur.close();	//cerramos el archivo
}


void opcion_centro_a_b()
{
	ifstream lectur;
	string texto;
	
	lectur.open("centab.txt",ios::in);	//Abriendo el archivo en modo lectura
	
	if (lectur.fail())	//Si se encuentra un problema al buscar el archivo muestra lo siguiente...
	{
		
		cout<<"No se pudo abrir el archivo, verifique que el archivo se encuentre en la misma carpeta del programa...";
		exit(1);	//Termina programa si no se encuentra el archivo
	}
	while (!lectur.eof())	//mientras no sea el final del archivo
	{
		getline(lectur,texto);
		cout<<texto<<endl;
	}
	
	lectur.close();	//cerramos el archivo
}

void opcion_centro_a_a()
{
	ifstream lectur;
	string texto;
	
	lectur.open("centaa.txt",ios::in);	//Abriendo el archivo en modo lectura
	
	if (lectur.fail())	//Si se encuentra un problema al buscar el archivo muestra lo siguiente...
	{
		
		cout<<"No se pudo abrir el archivo, verifique que el archivo se encuentre en la misma carpeta del programa...";
		exit(1);	//Termina programa si no se encuentra el archivo
	}
	while (!lectur.eof())	//mientras no sea el final del archivo
	{
		getline(lectur,texto);
		cout<<texto<<endl;
	}
	
	lectur.close();	//cerramos el archivo
}
void opcion_centro_b()
{
	ifstream lectur;
	string texto;
	
	lectur.open("centb.txt",ios::in);	//Abriendo el archivo en modo lectura
	
	if (lectur.fail())	//Si se encuentra un problema al buscar el archivo muestra lo siguiente...
	{
		
		cout<<"No se pudo abrir el archivo, verifique que el archivo se encuentre en la misma carpeta del programa...";
		exit(1);	//Termina programa si no se encuentra el archivo
	}
	while (!lectur.eof())	//mientras no sea el final del archivo
	{
		getline(lectur,texto);
		cout<<texto<<endl;
	}
	
	lectur.close();	//cerramos el archivo
}


void opcion_centro_a()
{
	ifstream lectur;
	string texto;
	
	lectur.open("centa.txt",ios::in);	//Abriendo el archivo en modo lectura
	
	if (lectur.fail())	//Si se encuentra un problema al buscar el archivo muestra lo siguiente...
	{
		
		cout<<"No se pudo abrir el archivo, verifique que el archivo se encuentre en la misma carpeta del programa...";
		exit(1);	//Termina programa si no se encuentra el archivo
	}
	while (!lectur.eof())	//mientras no sea el final del archivo
	{
		getline(lectur,texto);
		cout<<texto<<endl;
	}
	
	lectur.close();	//cerramos el archivo
}


void opcion_centro()
{
	ifstream lectur;
	string texto;
	
	lectur.open("cent.txt",ios::in);	//Abriendo el archivo en modo lectura
	
	if (lectur.fail())	//Si se encuentra un problema al buscar el archivo muestra lo siguiente...
	{
		
		cout<<"No se pudo abrir el archivo, verifique que el archivo se encuentre en la misma carpeta del programa...";
		exit(1);	//Termina programa si no se encuentra el archivo
	}
	while (!lectur.eof())	//mientras no sea el final del archivo
	{
		getline(lectur,texto);
		cout<<texto<<endl;
	}
	
	lectur.close();	//cerramos el archivo
}

void opcion_izquierda()
{
	ifstream lectur;
	string texto;
	
	lectur.open("izq.txt",ios::in);	//Abriendo el archivo en modo lectura
	
	if (lectur.fail())	//Si se encuentra un problema al buscar el archivo muestra lo siguiente...
	{
		
		cout<<"No se pudo abrir el archivo, verifique que el archivo se encuentre en la misma carpeta del programa...";
		exit(1);	//Termina programa si no se encuentra el archivo
	}
	while (!lectur.eof())	//mientras no sea el final del archivo
	{
		getline(lectur,texto);
		cout<<texto<<endl;
	}
	
	lectur.close();	//cerramos el archivo
}

void menu_opciones()
{
	ifstream lectur;
	string texto;
	
	lectur.open("inicio.txt",ios::in);	//Abriendo el archivo en modo lectura
		
		if (lectur.fail())	//Si se encuentra un problema al buscar el archivo muestra lo siguiente...
		{
		
			cout<<"No se pudo abrir el archivo, verifique que el archivo se encuentre en la misma carpeta del programa...";
			exit(1);	//Termina programa si no se encuentra el archivo
	}
		while (!lectur.eof())	//mientras no sea el final del archivo
		{
			getline(lectur,texto);
			cout<<texto<<endl;
		}
		
		lectur.close();	//cerramos el archivo
}

void bienvenida()
{
	cout<<"\t!!BIENVENIDO, NOS DA GUSTO QUE ESTES AQUI!!\n\n";
		
	cout<<"                      *********\n";
	cout<<"                    **          **\n";
	cout<<"      *****       **              **\n";
	cout<<"     *     *    **     **    **     **\n";
	cout<<"     *     *   **      **    **       **\n";
	cout<<"     *    *  **        **    **        **\n";
	cout<<"      *   *   *                         **\n";
	cout<<"    ************                        **\n";
	cout<<"   *            * **             **     **\n";
	cout<<"  **            *  **            **     **\n";
	cout<<" **   ***********    **        **       **\n";
	cout<<" *               *     *******         **\n";
	cout<<" **              *                    **\n";
	cout<<"  *   ************                   **\n";
	cout<<"  **           *  **                **\n";
	cout<<"   ************     **            **\n";
	cout<<"                       ***********\n";
	
	system("color 0E");
	
}
int main() {
	
	bienvenida();	//Funcion para dar la bienvenida al usuario

	
	int menu;	//Variable para guardar la accion que desea el usuario en el menu de opciones
	int libros;	//Variable para guardar la accion que desea el usuario en el menu de opciones de libros
	string nombre;	//Variable para guardar el nombre del usuario 'Una experiencia mas personalizada'
	char desicion, pregunta, salida;//Variables con funcion de eleccion del usuario de MENU
	char izquierda, izquierda_a, izquierda_b, izquierda_b_b, izquierda_b_a, izquierda_b_b_b; //Variables de eleccion para el inciso a)
	char centro, centro_a, centro_b, centro_b_a;	//Variables de eleccion para el inciso b)
	char derecha, derecha_a, derecha_b;	//Variables de eleccion para el inciso c)
	
	
	cout<<"\n\tPara INICIAR con esta aventura...";
	cout<<"\n\nIngresa tu nombre: ";	//Se le pide al usuario que ingrese su nombre, usando variable tipo cadena (string)
	cin>>nombre;
	cout<<"\n\n\t\tHola "<<nombre<<" ¿Como estas?\n";	//Se saluda al usuario
	
	do{	//Ciclo usuado para la opcion 3 del menu, si dice que no desea salir se le muestra nuevamente el menu
	do{	//Ciclo de cada que termina el juego se le pregunta al usuario si desea seguir jugando o desea salir del programa	
	cout<<"\n\tEscribe el numero que deseas realizar: \n";
	
	cout<<"\n\n1) Iniciar juego de cuentos...";
	cout<<"\n2) Leer el cuento completo...";
	cout<<"\n3) Salir...\t";
	cin>>menu;		//Opciones del menu, se le muestra al usuario las 3 opciones y la variable d funciona para guardar lo que se haya elegido
	
	if (menu != 1 and menu != 2 and menu != 3)	//Si el usuario ingresa un valor que no es solicitado se le muestra la siguiente leyenda
	{
		cout<<"\n\nError, introduce un valor ya sea (1, 2 o 3)";
	}
	if (menu == 1)	//Si el usuario desea iniciar el juego, se muestra el archivo de "Inicio"
	{
		cout<<"\n\n";
		menu_opciones();	//Se le muestra el archivo de "Inicio", y el usuario ingresa la opcion que mas prefiera
		cin>>desicion;
		
		if (desicion == 'a' or desicion == 'A')	//Si el usuario desea el inciso a) se muestra lo siguiente
		{
			cout<<"\n\n";
			opcion_izquierda();	//Te dirige a la funcion con el archivo correspondiente
			cin>>izquierda;	//Guarda la eleccion del usuario y dependiendo la eleccion tomada muestra las diferentes opciones
			
			if (izquierda == 'a' or izquierda == 'A')
			{
				cout<<"\n\n";
				opcion_izquierda_a();	//Te dirige a la funcion con el archivo correspondiente
				cin>>izquierda_a;	//Guarda la eleccion del usuario y dependiendo la eleccion tomada muestra las diferentes opciones
				
				
				if (izquierda_a == 'a' or izquierda_a == 'A')
				{
					cout<<"\n\n";
					opcion_izquierda_a_a();	//Te dirige a la funcion con el archivo correspondiente
					
				}
				if (izquierda_a == 'b' or izquierda_a == 'B')
				{
					cout<<"\n\n";
					opcion_izquierda_b_b();	//Te dirige a la funcion con el archivo correspondiente
					cin>>izquierda_b;	//Guarda la eleccion del usuario y dependiendo la eleccion tomada muestra las diferentes opciones
					
					if (izquierda_b == 'a' or izquierda_b == 'A')
					{
						cout<<"\n\n";
						opcion_izquierda_a_a_a();	//Te dirige a la funcion con el archivo correspondiente y te indica si ganaste o perdiste
						
					}
					if (izquierda_b == 'b' or izquierda_b == 'B')
					{
						cout<<"\n\n";
						opcion_izquierda_b_b_b();	//Te dirige a la funcion con el archivo correspondiente y te indica si ganaste o perdiste
					}
					
				}
			}
			if (izquierda == 'b' or izquierda == 'B')	
			{
				cout<<"\n\n";
				opcion_izquierda_b();	//Te dirige a la funcion con el archivo correspondiente
				cin>>izquierda_b_b;	//Guarda la eleccion del usuario y dependiendo la eleccion tomada muestra las diferentes opciones
				
				if (izquierda_b_b == 'a' or izquierda_b_b == 'A')
				{
					cout<<"\n\n";
					opcion_izquierda_b_a();	//Te dirige a la funcion con el archivo correspondiente
					cin>>izquierda_b_a;	//Guarda la eleccion del usuario y dependiendo la eleccion tomada muestra las diferentes opciones
					
					if (izquierda_b_a == 'a' or izquierda_b_a == 'A')
					{
						cout<<"\n\n";
						opcion_izquierda_b_a_a();	//Te dirige a la funcion con el archivo correspondiente y te indica si ganaste o perdiste
						
						
					}
					if (izquierda_b_a == 'b' or izquierda_b_a == 'B')
					{
						cout<<"\n\n";
						opcion_izquierda_b_a_b();	//Te dirige a la funcion con el archivo correspondiente y te indica si ganaste o perdiste
					}
					
				}
				if (izquierda_b_b == 'b' or izquierda_b_b == 'B')
				{
					cout<<"\n\n";
					opcion_izquierda_b_a_1();	//Te dirige a la funcion con el archivo correspondiente
					cin>>izquierda_b_b_b;	//Guarda la eleccion del usuario y dependiendo la eleccion tomada muestra las diferentes opciones
					
					if (izquierda_b_b_b == 'a' or izquierda_b_b_b == 'A')
					{
						cout<<"\n\n";
						opcion_izquierda_b_a_a_1();	//Te dirige a la funcion con el archivo correspondiente y te indica si ganaste o perdiste
						
						
					}
					if (izquierda_b_b_b == 'b' or izquierda_b_b_b == 'B')
					{
						cout<<"\n\n";
						opcion_izquierda_b_a_b_1();	//Te dirige a la funcion con el archivo correspondiente y te indica si ganaste o perdiste
					}
				}
			}
		}
		if (desicion == 'b' or desicion == 'B')	//Si el usuario desea el inciso b) se muestra lo siguiente
		{
			cout<<"\n\n";
			opcion_centro();	//Te dirige a la funcion con el archivo correspondiente
			cin>>centro;	//Guarda la eleccion del usuario y dependiendo la eleccion tomada muestra las diferentes opciones
			
			if (centro == 'a' or centro == 'A')
			{
				cout<<"\n\n";
				opcion_centro_a();	//Te dirige a la funcion con el archivo correspondiente
				cin>>centro_a;	//Guarda la eleccion del usuario y dependiendo la eleccion tomada muestra las diferentes opciones
				
				if (centro_a == 'a' or centro_a == 'A')
				{
					cout<<"\n\n";
					opcion_centro_a_a();	//Te dirige a la funcion con el archivo correspondiente y te indica si ganaste o perdiste
				}
				if (centro_a == 'b' or centro_a == 'B')
				{
					cout<<"\n\n";
					opcion_centro_a_b();	//Te dirige a la funcion con el archivo correspondiente y te indica si ganaste o perdiste
				}	
				
			}
			if (centro == 'b' or centro == 'B')
			{
				cout<<"\n\n";
				opcion_centro_b();	//Te dirige a la funcion con el archivo correspondiente
				cin>>centro_b;	//Guarda la eleccion del usuario y dependiendo la eleccion tomada muestra las diferentes opciones
				
				if (centro_b == 'a' or centro_b == 'A')
				{
					cout<<"\n\n";
					opcion_centro_b_a();	//Te dirige a la funcion con el archivo correspondiente
					cin>>centro_b_a;	//Guarda la eleccion del usuario y dependiendo la eleccion tomada muestra las diferentes opciones
					
					if (centro_b_a == 'a' or centro_b_a == 'A')
					{
						cout<<"\n\n";
						opcion_centro_b_a_a();	//Te dirige a la funcion con el archivo correspondiente y te indica si ganaste o perdiste
					}
					if (centro_b_a == 'b' or centro_b_a == 'B')
					{
						cout<<"\n\n";
						opcion_centro_b_a_b();	//Te dirige a la funcion con el archivo correspondiente y te indica si ganaste o perdiste
					}
					
				}
				if (centro_b == 'b' or centro_b == 'B')
				{
					cout<<"\n\n";
					opcion_centro_b_b();	//Te dirige a la funcion con el archivo correspondiente y te indica si ganaste o perdiste
					
				}
			}
			
		}
		if (desicion == 'c' or desicion == 'C')	//Si el usuario desea el inciso c) se muestra lo siguiente
		{
			cout<<"\n\n";
			opcion_derecha();	//Te dirige a la funcion con el archivo correspondiente
			cin>>derecha;	//Guarda la eleccion del usuario y dependiendo la eleccion tomada muestra las diferentes opciones
			
			if (derecha == 'a' or derecha == 'A')
			{
				cout<<"\n\n";
				opcion_derecha_a();	//Te dirige a la funcion con el archivo correspondiente
				cin>>derecha_a;	//Guarda la eleccion del usuario y dependiendo la eleccion tomada muestra las diferentes opciones
				
				if (derecha_a == 'a' or derecha_a == 'A')
				{
					cout<<"\n\n";
					opcion_derecha_a_a();	//Te dirige a la funcion con el archivo correspondiente y te indica si ganaste o perdiste
				}
				if (derecha_a == 'b' or derecha_a == 'B')
				{
					cout<<"\n\n";
					opcion_derecha_a_b();	//Te dirige a la funcion con el archivo correspondiente y te indica si ganaste o perdiste
				}
			}
			if (derecha == 'b' or derecha == 'B')
			{
				cout<<"\n\n";
				opcion_derecha_b();	//Te dirige a la funcion con el archivo correspondiente
				cin>>derecha_b;	//Guarda la eleccion del usuario y dependiendo la eleccion tomada muestra las diferentes opciones
				
				if (derecha_b == 'a' or derecha_b == 'A')
				{
					cout<<"\n\n";
					opcion_derecha_b_a();	//Te dirige a la funcion con el archivo correspondiente y te indica si ganaste o perdiste
				}
				if (derecha_b == 'b' or derecha_b == 'B')
				{
					cout<<"\n\n";
					opcion_derecha_b_b();	//Te dirige a la funcion con el archivo correspondiente y te indica si ganaste o perdiste
				}
			}
		}
		
		if (desicion != 'a' and desicion != 'A' and desicion != 'b' and desicion != 'B' and desicion != 'c' and desicion != 'C')	//Si des no es igual a a y des no es igual a b... se muestra la siguiente leyenda
		{
			cout<<"Error, ingrese una opcion valida";
		}
	}
	if (menu == 2)	//Si el usuario ingresa la opcion 2, leer muestra lo siguiente
	{
		cout<<"\n\nIngresa alguna de las siguientes 3 opciones del libro que deseas leer...";
		cout<<"\n\n1) Libro primera version...";
		cout<<"\n2) Libro segunda version...";
		cout<<"\n3) Libro tercera version...\t";
		cin>>libros;	//Almacena el valor que ingrese el usuario
		
		if (libros == 1)
		{
			cout<<"\n\n";
			libro_uno();	//Te dirige a la funcion con el archivo correspondiente
		}
		if (libros == 2)
		{
			cout<<"\n\n";
			libro_dos();	//Te dirige a la funcion con el archivo correspondiente
		}
		if (libros == 3)
		{
			cout<<"\n\n";
			libro_tres();	//Te dirige a la funcion con el archivo correspondiente
		}
	}
	if (menu == 3)	//Si el usuario desea salir se le muestra la siguiente leyenda
	{
		cout<<"\n\n¿Estas seguro que deseas salir?(s/n): ";	
		cin>>salida;
		
		if (salida == 's' or salida == 'S')	//Si el usuario ingresa S = Si, se termina el programa (return 0)
		{
			cout<<"\n\n!!VUELVE PRONTO!!";
			return 0;	//Se termina el programa
		}
	}
	
	cout<<"\n\n¿Deseas seguir jugando?(s/n): ";	//Cada que se realice cada accion, se le preguntara al usuario si desea seguir jungando o no
	cin>>pregunta;	//Guarda la accion del usuario y dependiendo de su eleccion entra a Ciclo o se termina el proceso
	
	if (pregunta == 'n' or pregunta == 'N')	//Si el usuario dice N = No, se termina el programa (return 0)
	{
		cout<<"\n\n!!Esperamos que te hayas divertido!!";
		return 0;	//Se termina el programa
	}
	
	}while (pregunta == 's' or pregunta == 'S');	//Mientras el usuario desee seguir jugando, se le mostrará el menu de inicio-Ciclo
	}while (salida == 'n' or salida == 'N');	//Mientras el usuario no desee salir, se mostrará el menu de inicio-Ciclo
	
}

