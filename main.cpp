#include<iostream>

#include "CIsoscele.h"
#include "CTrianRectangular.h"

int main() {

	Triangular *A, *B, *C; 
	float b,h,s3,s4;
	
	Isoscele isoA(10,5);
	Isoscele isoB(3,7);
	TrianRectangular rectC(2,1);
	
	A = &isoA;
	B = &isoB;
	C = &rectC;

	cout << endl;
	cout << "**** Triangular A ****" << endl;
	A->Dump();
	cout << "**** ***** ****" << endl;
	cout << "**** Triangular B ****" << endl;
	B->Dump(); 
	cout << "**** ***** ****" << endl;
	cout << "**** Triangular C ****" << endl;
	C->Dump(); 
	cout << "**** ***** ****" << endl;
	
	cout << endl;
	cout << "**** Isoscele A ****" << endl;
	isoA.Dump(); 
	cout << "**** ***** ****" << endl;
	cout << "**** Isoscele B ****" << endl;
	isoB.Dump(); 
	cout << "**** ***** ****" << endl;
	cout << "**** Isoscele C ****" << endl;
	rectC.Dump(); 
	cout << "**** ***** ****" << endl;	
	
	return 0;

}