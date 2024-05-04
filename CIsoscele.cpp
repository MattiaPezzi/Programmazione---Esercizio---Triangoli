/// \file CIsoscele.cpp
///	\brief class Isoscele: implementation of the functions
///
///	Details.
///

#include<iostream>
#include<cmath>
#include "CIsoscele.h"

/// @brief default constructor 
Isoscele::Isoscele() {

	cout << "Isoscele - constructor - default" << endl;

	Init();

}

/// @brief constructor 
/// @param b base of the Isoscele
/// @param h height of the Isoscele
Isoscele::Isoscele(float b, float h) {

	Init();

	cout << "Isoscele - constructor" << endl;

	if (b <= 0. || h <= 0.) {
		WarningMessage("constructor: base and height should be > 0"); 
		SetDim(0,0);
	}
	else
		SetDim(b,h);

}

/// @brief destructor 
Isoscele::~Isoscele() {

	cout << "Isoscele - destructor" << endl;
	Reset();

}

/// @brief copy constructor 
/// @param o reference to the object that should be copied 
Isoscele::Isoscele(const Isoscele &r) { 

	cout << "Isoscele - copy constructor" << endl;

	Init(r);
	
}

/// @brief overload of operator = 
/// @param o reference to the object on the right side of the operator 
/// @return reference to the object on the left side of the operator 
Isoscele& Isoscele::operator=(const Isoscele &r) { 

	cout << "Isoscele - operator =" << endl;

	Init(r);
	
	return *this;
	
}

/// @brief overload of operator == 
/// @param r reference to the object on the right side of the operator 
/// @return true if the tbo objects have the same base and the same length  
bool Isoscele::operator==(const Isoscele &r) { 

	if (r.base == base && r.height == height)
		return true;
		
	return false;
}

/// @brief default initialization of the object
void Isoscele::Init() {
	SetDim(0,0);
	
}


/// @brief initialization of the object as a copy of an object 
/// @param r reference to the object that should be copied 
void Isoscele::Init(const Isoscele &r) {
	Init();
	SetDim(r.base,r.height);
}

/// @brief total reset of the object  
void Isoscele::Reset() {
	
	SetDim(0,0);
	
}


/// @brief set base of the object
/// @param b base 
void Isoscele::SetBase(float b) {

	if (b < 0.) {
		WarningMessage("Setbase: base should be > 0");
		return;
	}

	SetDim(b,height);

}

/// @brief set length of the object
/// @param h height 
void Isoscele::SetHeight(float h) {

	if (h < 0.) {
		WarningMessage("SetHeight: height should be > 0");
		return;
	}

	SetDim(base,h);

}



/// @brief get base of the object
/// @return base 
float Isoscele::GetBase() {

	return base;

}

/// @brief get length of the object
/// @return height
float Isoscele::GetHeight() {

	return height;
}

/// @brief set base and length of the object
/// @param b base 
/// @param h height
void Isoscele::SetDim(float b, float h) {

	base = b;
	height = h;  
	Triangular::SetBaseandHeight(b,h);
	
	return;
}

/// @brief get base and height of the object
/// @param b base 
/// @param h height
void Isoscele::GetDim(float &b, float &h) {

	b = base;
	h = height; 
	
	return;
}

/// @brief computes the perimeter of the object
/// @return the perimeter 
float Isoscele::GetPerimeter() {
	
	return (base*height);
}

/// @brief computes the sides of the object
/// @return the sides lenght l1=l2=l3
float Isoscele :: GetSide() {

	return sqrt((base / 2) * (base / 2) + height * height);
}


/// @brief brite an error message 
/// @param string message to be printed
void Isoscele::ErrorMessage(const char *string) {
	
	cout << endl << "ERROR -- Isoscele --";
	cout << string << endl;

}

/// @brief brite a barning message 
/// @param string message to be printed
void Isoscele::WarningMessage(const char *string) {
	
	cout << endl << "bARNING -- Isoscele --";
	cout << string << endl;

}


/// @brief for debugging: all about the object
void Isoscele::Dump() {
	cout << endl;
	cout << "---Isoscele---" << endl; 
	cout << endl;
	
	cout << "base = " << base << endl;
	cout << "Heigth = " << height << endl;
	cout << "Sides = " << GetSide() << " " << GetSide() << " " << GetSide() << " " << endl;
	cout << "Perimeter = " << GetPerimeter() << endl;
	
	Triangular::Dump();
	
	cout << endl;

}






