#include<iostream>
#include<vector>
#include"menu.h"
using namespace std;

class User{
	public:
		string name;
		string password;
		User(){
			password=name="";
		}
		User(string name ,string password){
			User::name=name;
			User::password=password;
		}
		friend ostream &operator<<(ostream &out,User *u){
			out << "Nombre: "<< u->name << endl;
			out << "Password: " << u->password<< endl;
			return out;
		}
};
int menu(const char titulo[], const char *opciones[], int n);
bool verificarDatos(vector<User *> usuarios);
int main(){

	vector<User *> usuarios={};
	string nam="";
	string pass="";
	int op=0;
	int access;
	bool repite=true;
	
	const char *titulo = "MENU DE OPCIONES";
	const char *opciones[] = {"Crear usuario", "Iniciar sesion","Salir"};
	int n = 3; 
	do{
		op = menu(titulo, opciones, n);
	/*	system("cls");
		cout<<"\t1. Crear usuario"<<endl;
		cout<<"\t2. Iniciar sesion"<<endl;
		cout<<"\t3. Salir"<<endl;
		cin>>op;*/
		if(op==1){
			system("cls");
			cout<<"Crear Usuario"<<endl;
			cout<<"\n\tUser:";
			cin.ignore();
			getline(cin, nam);
			cout<<"\n\tPassword:";
			getline(cin, pass);
			usuarios.push_back(new User(nam,pass));
		}else{
			if(op==2){
				verificarDatos(usuarios);
			} else {
				if(op==3){
					repite=false;
				}
			}
		}
	
	}while(repite);
	cout << "\n\tSaliendo..." << endl;
	return 0;	
}
bool verificarDatos(vector<User *> usuarios){
	string nam="";
	string pass="";
	int access;
	system("cls");
	cout<<"Crear Usuario"<<endl;
	cout<<"\n\tUser:";
	cin.ignore();
	getline(cin, nam);
	cout<<"\n\tPassword:";
	getline(cin, pass);
	access=0;
	for(User *u: usuarios){
		if((nam==u->name)&&(pass==u->password)){
			access++;
		}
	}
	if(access>=1){
		cout << "Accediendo..." << endl;
		system("pause");
		return true;
		
	}else{
		cout << "Datos incorrectos " << endl;
		system("pause");
		return false;
		
	}
	
}

