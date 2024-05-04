/*! \file CTriangular.h
	\brief Declaration of the general class Triangular

	Details.
*/


#ifndef TRIANGULAR_H
#define TRIANGULAR_H

#include<iostream>

using namespace std;

/// @class Triangular
/// @brief an abstract base class for Triangular
class Triangular {
protected:

	float BH[2];
	
	void SetBaseandHeight(float b, float h); 



public:

	/// @name CONSTRUCTORS/DESTRUCTOR
	/// @{
	Triangular();
	Triangular(const Triangular &o);
	virtual ~Triangular();
	/// @}
	
	/// @name OPERATORS
	/// @{
	Triangular& operator=(const Triangular &o); 
	bool operator==(const Triangular &o);
	/// @}
	
	/// @name BASIC HANDLING
	/// @{
	void Init();												
	void Init(const Triangular &o);							
	void Reset();												
	/// @}

			
	/// @name GETTERS
	/// @{
	float GetArea();
	void GetBaseandHeight(float &b, float &h);
	/// @}
	
	/// @name DEBUG and SERIALIZATION 
	/// @{
	void ErrorMessage(const char *string); 
	void WarningMessage(const char *string);
	void Dump();
	/// @}

};

#endif