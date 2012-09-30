#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <Windows.h>
using namespace std;
int main_menu();
int welcome();

int main(){
	main_menu();
	return 0;
}
int main_menu(){
	int choice = 0;
	welcome();
	return 0;
}
int welcome(/*Say hello to the nice people*/){
	system("Color 0C");
	cout << "WELCOME TO MINI GOLF MANIA"<<endl<<endl;
	system("Color 0F");
	Sleep(1000);
	cout << "Play smart!"<< endl;
	Sleep(1000);
	cout <<"Win low!"<<endl;
	Sleep(4000);
	system("cls");
	Sleep(500);
	return 0;
}