// ООП1.2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
#include <string>
#include <windows.h>
using namespace std;
class Stationery {
protected:
	int price;
	string brand;
	string name;
public:
	Stationery() {
		name = "";
		brand = "";
		price = 0;
	}
};
/////////////////////

class Writing : public  Stationery
{
protected:
	string color;
public:
	Writing() :Stationery() {
		color = "";
	}

};
////////////////////////////
class Pencil : public Writing
{
protected:
	string erase;
	string softness;
public:
	Pencil() :Writing() {
		erase = "";
		softness = "";
	}
};
//////////////////////////////
class OrigPencil: public Pencil
{
protected:
	string shape;
	string material;
public:
	OrigPencil() : Pencil() {
		shape = "";
		material = "";
	}
	friend ostream& operator<< (ostream& cout, const OrigPencil & TA)
	{
		cout << TA.name << " " << TA.brand << endl << "Price: "
			<< TA.price << endl <<  "Color: "
			<< TA.color << endl << "Erase: "
			<< TA.erase << endl << "Softness: "
			<< TA.softness << endl << "Material: "
			<< TA.material << endl << "Shape: " << TA.shape << endl;
		return cout;
	}

	friend istream& operator >> (istream& cin, OrigPencil & TA)
	{
		cout << "Name: " << endl;
		cin >> TA.name;
		cout << "Brand: " << endl;
		cin >> TA.brand;
		cout << "Price: " << endl;
		cin >> TA.price;
		cout << "Color: " << endl;
		cin >> TA.color;
		cout << "Erase: " << endl;
		cin >> TA.erase;
		cout << "Softness: " << endl;
		cin >> TA.softness;
		cout << "Material: " << endl;
		cin >> TA.material;
		cout << "Shape: " << endl;
		cin >> TA.shape;
		return cin;
	}
	friend int operator + (int ss, const OrigPencil& TA)
	{
		return ss + TA.price;
	}
};
/////////////////////////////////
class MechPencil : public Pencil {
protected:
	double diametr;
	int rod;
public:
	MechPencil() : Pencil() {
		diametr = 0.0;
		rod = 0;
	}
	friend ostream& operator<< (ostream& cout, const MechPencil & TA)
	{
		cout << TA.name << " " << TA.brand << endl << "Price: "
			<< TA.price << endl << "Color: "
			<< TA.color << endl << "Erase: "
			<< TA.erase << endl << "Softness: "
			<< TA.softness << endl << "Diametr: "
			<< TA.diametr << endl << "Rod: " << TA.rod<< endl;
		return cout;
	}

	friend istream& operator >> (istream& cin, MechPencil & TA)
	{
		cout << "Name: " << endl;
		cin >> TA.name;
		cout << "Brand: " << endl;
		cin >> TA.brand;
		cout << "Price: " << endl;
		cin >> TA.price;
		cout << "Color: " << endl;
		cin >> TA.color;
		cout << "Erase: " << endl;
		cin >> TA.erase;
		cout << "Softness: " << endl;
		cin >> TA.softness;
		cout << "Diametr: " << endl;
		cin >> TA.diametr;
		cout << "KolRod: " << endl;
		cin >> TA.rod;
		return cin;
	}
	friend int operator + (int ss, const MechPencil& TA)
	{
		return ss + TA.price;
	}
};
/////////////////////////////////
class Pen : public Writing
{
protected:
	double thickness;
public:
	Pen(): Writing() {
		thickness = 0.0;
	}
};
////////////////////////////////
class FountainPen : public Pen
{
protected:
	string grip;
	int consumables;
public:
	FountainPen():Pen() {
		grip="";
		consumables = 0;
	}
	friend ostream& operator<< (ostream& cout, const FountainPen & TA)
	{
		cout << TA.name << " " << TA.brand << endl << "Price: "
			<< TA.price << endl << "Color: "
			<< TA.color << endl << "Thickness: "
			<< TA.thickness << endl<<"Grip: "
			<<TA.grip<<endl<<"Consumables: "
			<<TA.consumables<<endl;
		return cout;
	}

	friend istream& operator >> (istream& cin, FountainPen& TA)
	{
		cout << "Name: " << endl;
		cin >> TA.name;
		cout << "Brand: " << endl;
		cin >> TA.brand;
		cout << "Price: " << endl;
		cin >> TA.price;
		cout << "Color: " << endl;
		cin >> TA.color;
		cout << "Thickness: " << endl;
		cin >> TA.thickness;
		cout << "Grip: " << endl;
		cin >> TA.grip;
		cout << "Consumables: " << endl;
		cin >> TA.consumables;
		return cin;
	}
	friend int operator + (int ss, const FountainPen& TA)
	{
		return ss + TA.price;
	}
};
/////////////////////////////////
class BallPen : public Pen
{
protected:
	string avto;
	int length;
public:
	BallPen() :Pen() {
		avto = "";
		length = 0;
	}
	friend ostream& operator<< (ostream& cout, const BallPen & TA)
	{
		cout << TA.name << " " << TA.brand << endl << "Price: "
			<< TA.price << endl << "Color: "
			<< TA.color << endl << "Thickness: "
			<< TA.thickness << endl << "Avto: "
			<< TA.avto << endl << "Length: "
			<< TA.length << endl;
		return cout;
	}

	friend istream& operator >> (istream& cin, BallPen& TA)
	{
		cout << "Name: " << endl;
		cin >> TA.name;
		cout << "Brand: " << endl;
		cin >> TA.brand;
		cout << "Price: " << endl;
		cin >> TA.price;
		cout << "Color: " << endl;
		cin >> TA.color;
		cout << "Thickness: " << endl;
		cin >> TA.thickness;
		cout << "Avto: " << endl;
		cin >> TA.avto;
		cout << "Length: " << endl;
		cin >> TA.length;
		return cin;
	}
	friend int operator + (int ss, const BallPen& TA)
	{
		return ss + TA.price;
	}
};
/////////////////////////////////
class Office : public Stationery
{
protected:
	int quantity;
public:
	Office() : Stationery(){
		quantity = 0;
	}
};
////////////////////////////////
class SmallOffice : public Office
{
protected:
	string cover;
	string shapee;
public:
	SmallOffice() :Office() {
		cover = "";
		shapee = "";
	}
};
////////////////////////////////////
class Buttons : public SmallOffice
{
protected:
	int diametrr;
public:
	Buttons() :SmallOffice() {
		diametrr = 0;
	}
	friend ostream& operator<< (ostream& cout, const Buttons & TA)
	{
		cout << TA.name << " " << TA.brand << endl << "Price: "
			<< TA.price << endl << "Quantity: "
			<<TA.quantity<<endl<<"Cover: "
			<<TA.cover<<endl<<"Shape: "
			<<TA.shapee<<endl<<"Diametr: "
			<<TA.diametrr<<endl;
		return cout;
	}

	friend istream& operator >> (istream& cin, Buttons & TA)
	{
		cout << "Name: " << endl;
		cin >> TA.name;
		cout << "Brand: " << endl;
		cin >> TA.brand;
		cout << "Price: " << endl;
		cin >> TA.price;
		cout << "Quantity: " << endl;
		cin >> TA.quantity;
		cout << "Cover: " << endl;
		cin >> TA.cover;
		cout << "Shape: " << endl;
		cin >> TA.shapee;
		cout << "Diametr: " << endl;
		cin >> TA.diametrr;
		return cin;
	}
	friend int operator + (int ss, const Buttons& TA)
	{
		return ss + TA.price;
	}
};
////////////////////////////////////
class Clips : public SmallOffice
{
protected:
	int lengthh;
public:
	Clips() :SmallOffice() {
		lengthh = 0;
	}
	friend ostream& operator<< (ostream& cout, const Clips & TA)
	{
		cout << TA.name << " " << TA.brand << endl << "Price: "
			<< TA.price << endl << "Quantity: "
			<< TA.quantity << endl << "Cover: "
			<< TA.cover << endl << "Shape: "
			<< TA.shapee << endl << "Length: "
			<< TA.lengthh << endl;
		return cout;
	}

	friend istream& operator >> (istream& cin, Clips & TA)
	{
		cout << "Name: " << endl;
		cin >> TA.name;
		cout << "Brand: " << endl;
		cin >> TA.brand;
		cout << "Price: " << endl;
		cin >> TA.price;
		cout << "Quantity: " << endl;
		cin >> TA.quantity;
		cout << "Cover: " << endl;
		cin >> TA.cover;
		cout << "Shape: " << endl;
		cin >> TA.shapee;
		cout << "Length: " << endl;
		cin >> TA.lengthh;
		return cin;
	}
	friend int operator + (int ss, const Clips& TA)
	{
		return ss + TA.price;
	}
};
///////////////////////////////////
class Correct : public Office
{
protected:
	string colorbody;
public:
	Correct() :Office() {
		colorbody = "";
	}
};
class CorrectPen : public Correct
{
protected:
	string fluidsupply;
	string tipmaterial;
public:
	CorrectPen() :Correct() {
		fluidsupply = "";
		tipmaterial = "";
	}
	friend ostream& operator<< (ostream& cout, const CorrectPen & TA)
	{
		cout << TA.name << " " << TA.brand << endl << "Price: "
			<< TA.price << endl << "Quantity: "
			<< TA.quantity << endl << "ColorBody: "
			<< TA.colorbody << endl << "FluidSupply: "
			<< TA.fluidsupply << endl << "TipMaterial: "
			<< TA.tipmaterial << endl;
		return cout;
	}

	friend istream& operator >> (istream& cin, CorrectPen & TA)
	{
		cout << "Name: " << endl;
		cin >> TA.name;
		cout << "Brand: " << endl;
		cin >> TA.brand;
		cout << "Price: " << endl;
		cin >> TA.price;
		cout << "Quantity: " << endl;
		cin >> TA.quantity;
		cout << "ColorBody: " << endl;
		cin >> TA.colorbody;
		cout << "FluidSupply: " << endl;
		cin >> TA.fluidsupply;
		cout << "TipMaterial: " << endl;
		cin >> TA.tipmaterial;
		return cin;
	}
	friend int operator + (int ss, const CorrectPen& TA)
	{
		return ss + TA.price;
	}
};
//////////////////////////////////////////
class CorrectTape : public Correct
{
protected:
	int width;
public:
	CorrectTape() :Correct() {
		width = 0;
	}
	friend ostream& operator<< (ostream& cout, const CorrectTape & TA)
	{
		cout << TA.name << " " << TA.brand << endl << "Price: "
			<< TA.price << endl << "Quantity: "
			<< TA.quantity << endl << "ColorBody: "
			<< TA.colorbody << endl << "Width: "
			<< TA.width<< endl;
		return cout;
	}

	friend istream& operator >> (istream& cin, CorrectTape & TA)
	{
		cout << "Name: "<<endl;
		cin >> TA.name;
		cout << "Brand: " << endl;
		cin >> TA.brand;
		cout << "Price: " << endl;
		cin >> TA.price;
		cout << "Quantity: " << endl;
		cin >> TA.quantity;
		cout << "ColorBody: " << endl;
		cin >> TA.colorbody;
		cout << "Width: " << endl;
		cin >> TA.width;
		return cin;
	}
	friend int operator + (int ss, const CorrectTape& TA)
	{
		return ss + TA.price;
	}
};
//////////////////////////////////
template <class T>
class Matrix
{
public:
	Matrix(int c)
	{
		b = c;
		M = new T *[b];
		for (int i = 0; i < b; i++)
		{
			M[i] = new T[b];
		}

	}
	void Put(int c)
	{
		int r = 0;
		
		for (int i = 0; i < c; i++) {
			for (int j = 0; j < c; j++) {
				
				cin >> M[i][j];
				r++;
			
			}
		}
		cout << endl;
	}
	void V(int c)
	{
		
		for (int i = 0; i < c; i++)
		{
			for (int j = 0; j < c; j++)
			{
				
				cout << M[i][j] << " ";

				
			}
		}
	}
	void summ() {
		int s = 0;
		for (int i = 0; i < b; i++)
		{
			for (int j = 0; j < b; j++)
			{
				s = s + M[i][j];
			}
		}
		cout << "Сумма  = " << s << endl;
	}

private:
	T** M;
	int b;
};


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int r, add;
	cout << "Какой вид канцелярии хотите добавить к*к?"
		<< endl << "0-Выход"
		<< endl << "1-Обычный карандаш"
		<< endl << "2-Механический карандаш"
		<< endl << "3-Перьевая ручка"
		<< endl << "4-Шариковая ручка"
		<< endl << "5-Канцелярские кнопки"
		<< endl << "6-Канцелярские скрепки"
		<< endl << "7-Корректирующий карандаш"
		<< endl << "8-Корректирующая лента"<<endl;
	cin >> add;
	while (add != 0) {
		
		if (add == 1) {
			cout << "Сколько хотите добавить экземпляров к*к?" << endl;
			cin >> r;

			cout << "Заполните информацию о Канцелярии" << endl;
			Matrix<OrigPencil> AT(r);
			AT.Put(r);
			cout << "Вывод информации о канцелярии:" << endl;
			AT.V(r);
			cout << "Стоимость всех: ";
			AT.summ();
			cout << endl;
		}
		if (add == 2) {
			cout << "Сколько хотите добавить экземпляров к*к?" << endl;
			cin >> r;

			cout << "Заполните информацию о Канцелярии" << endl;
			Matrix<MechPencil> ATT(r);
			ATT.Put(r);
			cout << "Вывод информации о канцелярии:" << endl;
			ATT.V(r);
			cout << "Стоимость всех: ";
			ATT.summ();
			cout << endl;
		}
		if (add == 3) {
			cout << "Сколько хотите добавить экземпляров к*к?" << endl;
			cin >> r;

			cout << "Заполните информацию о Канцелярии" << endl;
			Matrix<FountainPen> ATA(r);
			ATA.Put(r);
			cout << "Вывод информации о канцелярии:" << endl;
			ATA.V(r);
			cout << "Стоимость всех: ";
			ATA.summ();
			cout << endl;
		}
		if (add == 4) {
			cout << "Сколько хотите добавить экземпляров к*к?" << endl;
			cin >> r;

			cout << "Заполните информацию о Канцелярии" << endl;
			Matrix<BallPen> ATAT(r);
			ATAT.Put(r);
			cout << "Вывод информации о канцелярии:" << endl;
			ATAT.V(r);
			cout << "Стоимость всех: ";
			ATAT.summ();
			cout << endl;
		}
		if (add == 5) {
			cout << "Сколько хотите добавить экземпляров к*к?" << endl;
			cin >> r;

			cout << "Заполните информацию о Канцелярии" << endl;
			Matrix<Buttons> ATATA(r);
			ATATA.Put(r);
			cout << "Вывод информации о канцелярии:" << endl;
			ATATA.V(r);
			cout << "Стоимость всех: ";
			ATATA.summ();
			cout << endl;
		}
		if (add == 6) {
			cout << "Сколько хотите добавить экземпляров к*к?" << endl;
			cin >> r;

			cout << "Заполните информацию о Канцелярии" << endl;
			Matrix<Clips> ATATAT(r);
			ATATAT.Put(r);
			cout << "Вывод информации о канцелярии:" << endl;
			ATATAT.V(r);
			cout << "Стоимость всех: ";
			ATATAT.summ();
			cout << endl;
		}
		if (add == 7) {
			cout << "Сколько хотите добавить экземпляров к*к?" << endl;
			cin >> r;

			cout << "Заполните информацию о Канцелярии" << endl;
			Matrix<CorrectPen> ATATATA(r);
			ATATATA.Put(r);
			cout << "Вывод информации о канцелярии:" << endl;
			ATATATA.V(r);
			cout << "Стоимость всех: ";
			ATATATA.summ();
			cout << endl;
		}
		if (add == 8) {
			cout << "Сколько хотите добавить экземпляров к*к?" << endl;
			cin >> r;
			cout << "Заполните информацию о Канцелярии" << endl;
			Matrix<CorrectTape> ATATATAT(r);
			ATATATAT.Put(r);
			cout << "Вывод информации о канцелярии:" << endl;
			ATATATAT.V(r);
			cout << "Стоимость всех: ";
			ATATATAT.summ();
			cout << endl;
		}
		cout << "Какой вид канцелярии хотите добавить?"
			<< endl << "0-Выход"
			<< endl << "1-Обычный карандаш"
			<< endl << "2-Механический карандаш"
			<< endl << "3-Перьевая ручка"
			<< endl << "4-Шариковая ручка"
			<< endl << "5-Канцелярские кнопки"
			<< endl << "6-Канцелярские скрепки"
			<< endl << "7-Корректирующий карандаш"
			<< endl << "8-Корректирующая лента"<<endl;
		cin >> add;

	}
	cout << endl;
	system("pause");
	return 0;
}
