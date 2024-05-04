/// \file CTrianRectangular.cpp
///	\brief class TrianRectangular: implementation of the functions
///
///	Details.
///

#include<iostream> 
#include<cmath>
#include "CTrianRectangular.h"

/// @brief default constructor 
TrianRectangular::TrianRectangular() {

	cout << "TrianRectangular - constructor - default" << endl;

	Init();

}

/// @brief constructor 
TrianRectangular::TrianRectangular(float b, float h) {

	Init();

	cout << "TrianRectangular - constructor" << endl;

	if (b <= 0. || h <= 0.) {
		WarningMessage("constructor: diagonals should be > 0"); 
		SetDim(0,0);
	}
	else
		SetDim(b,h);

}

/// @brief destructor 
TrianRectangular::~TrianRectangular() {

	cout << "TrianRectangular - destructor" << endl;
	Reset();

}

/// @brief copy constructor 
/// @param o reference to the object that should be copied 
TrianRectangular::TrianRectangular(const TrianRectangular &r) { 

	cout << "TrianRectangular - copy constructor" << endl;

	Init(r);
	
}

/// @brief overload of operator = 
/// @param o reference to the object on the right side of the operator 
/// @return reference to the object on the left side of the operator 
TrianRectangular& TrianRectangular::operator=(const TrianRectangular &r) { 

	cout << "TrianRectangular - operator =" << endl;

	Init(r);
	
	return *this;
	
}

/// @brief overload of operator == 
/// @param r reference to the object on the right side of the operator 
/// @return true if the two objects have the same width and the same length  
bool TrianRectangular::operator==(const TrianRectangular &r) { 

	if (r.base == base && r.height == height)
		return true;
		
	return false;
}

/// @brief default initialization of the object
void TrianRectangular::Init() {
	SetDim(0,0);
	
}


/// @brief initialization of the object as a copy of an object 
/// @param r reference to the object that should be copied 
void TrianRectangular::Init(const TrianRectangular &r) {
	Init();
	SetDim(r.base,r.height);
}

/// @brief total reset of the object  
void TrianRectangular::Reset() {
	
	SetDim(0,0);
	
}


/// @brief set longer diagonal of the object
/// @param d diagonal 
void TrianRectangular::SetBase(float b) {

	if (b < 0.) {
		WarningMessage("Setbase: diagonal should be > 0");
		return;
	}

	SetDim(b,height);

} 

/// @brief set shorter diagonal of the object
/// @param d diagonal 
void TrianRectangular::SetHeight(float b) {

	if (b < 0.) {
		WarningMessage("Setheight: diagonal should be > 0");
		return;
	}

	SetDim(base,b);

}


/// @brief get longer diagonal of the object
/// @return longer diagonal 
float TrianRectangular::GetBase() {

	return base;

}

/// @brief get shorter diagonal of the object
/// @return shorter diagonal 
float TrianRectangular::GetHeight() {

	return height;

}

/// @brief get side of the object
/// @return side 
float TrianRectangular::GetIpotenusa() {

	return sqrt(base*base + height*height);

}



/// @brief set the diagonals of the object
/// @param b longer diagonal  
/// @param h shorter diagonal
void TrianRectangular::SetDim(float b, float h) {

	float side = 0;
	
	base = b;
	height = h;  

	Triangular::SetBaseandHeight(base,height);
	
	return;
}

/// @brief get the diagonals of the object
/// @param b larger diagonal 
/// @param h shorter diagonal
void TrianRectangular::GetDim(float &b, float &h) {

	b = base;
	h = height; 
	
	return;
}

/// @brief computes the area of the object
/// @return the area 
float TrianRectangular::GetPerimeter() {
	
	return (base+height+(GetIpotenusa()));
}


/// @brief write an error message 
/// @param string message to be printed
void TrianRectangular::ErrorMessage(const char *string) {
	
	cout << endl << "ERROR -- TrianRectangular --";
	cout << string << endl;

}

/// @brief write a warning message 
/// @param string message to be printed
void TrianRectangular::WarningMessage(const char *string) {
	
	cout << endl << "WARNING -- TrianRectangular --";
	cout << string << endl;

}


/// @brief for debugging: all about the object
void TrianRectangular::Dump() {
	cout << endl;
	cout << "---TrianRectangular---" << endl; 
	cout << endl;
	
	cout << "Base = " << base << endl;
	cout << "Height = " << height << endl; 
	cout << "Ipotenusa = " << GetIpotenusa() << endl;
	cout << "Perimeter = " << GetPerimeter() << endl;
	
	Triangular::Dump();
	
	cout << endl;

}








