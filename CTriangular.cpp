#include "CTriangular.h"

/// @brief default constructor 
Triangular::Triangular() {

	cout << "Triangular - constructor - default" << endl;

	Reset();

} 

/// @brief copy constructor 
/// @param o reference to the object that should be copied 
Triangular::Triangular(const Triangular &o) {
	
	cout << "Triangular - copy constructor" << endl;

	Init(o);
}

/// @brief destructor
Triangular::~Triangular() {

	cout << "Triangular - destructor" << endl;
	Reset();

}  


/// @brief sets the value of the four BH 
/// @param s1 side 1 
/// @param s2 side 2 
/// @param s3 side 3
/// @param s4 side 4 
void Triangular::SetBaseandHeight(float b, float h) {
	
	BH[0] = b;
	BH[1] = h;
	
	return;

} 

/// @brief overload of operator = 
/// @param o reference to the object on the right side of the operator 
/// @return reference to the object on the left side of the operator 
Triangular& Triangular::operator=(const Triangular &o) { 

	return *this;
	
}

/// @brief overload of operator == 
/// @param o reference to the object on the right side of the operator 
/// @return always false 
bool Triangular::operator==(const Triangular &o) {

	return false;
}


/// @brief default initialization of the object
void Triangular::Init() {
	BH[0]= BH[1] = 0.;
}


/// @brief initialization of the object as a copy of an object 
/// @param r reference to the object that should be copied 
void Triangular::Init(const Triangular &o) {
	Init();
	BH[0] = o.BH[0]; 
	BH[1] = o.BH[1];
	
}

/// @brief total reset of the object  
void Triangular::Reset() {
	BH[0]= BH[1] = 0.;
	
}


/// @brief get the area of the object
/// @return area 
float Triangular::GetArea() {

	return ((BH[0] * BH[1]) / 2);

} 

/// @brief get the BH of the object 
/// @param s0 side 0 
/// @param s1 side 1
/// @param s2 side 2
/// @param s3 side 3 
void Triangular::GetBaseandHeight(float &b, float &h) {

	b = BH[0]; 
	h = BH[1];

}

/// @brief write an error message 
/// @param string message to be printed
void Triangular::ErrorMessage(const char *string) {
	
	cout << endl << "ERROR -- Triangular --";
	cout << string << endl;

}

/// @brief write a warning message 
/// @param string message to be printed
void Triangular::WarningMessage(const char *string) {
	
	cout << endl << "WARNING -- Triangular --";
	cout << string << endl;

}


/// @brief for debugging: all about the object
void Triangular::Dump() {
	
	cout << endl;
	cout << "Base = " << BH[0] << " Altezza = " << BH[1] << endl;
	cout << "Area = " << GetArea() << endl;
	cout << endl;

}

