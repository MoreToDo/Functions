// Functions.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <cmath>

using namespace std;

const double PI = 3.14159;

#include "allFunctions.h"


int main()
{

   int radius = getPosInt("Please enter the value to be calculated: ");

   int aCircle = areaOfCircle(radius);

   int volRect = volOfRect(radius);

   cout << "You have entered " << radius << " as the variable to be calculated.\n";
   cout << "The area of the circle is: " << aCircle << "\n";
   cout << "The volumn of the rectangle is: " << volRect << "\n";

   system("pause");// halt the program for viewing
    return 0;
}

