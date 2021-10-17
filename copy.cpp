/**
* @file main.cpp
* @author Trevor M. Tomesh <tmtomesh@gmail.com>
* @version 1.0
*
* @section LICENSE
*
* This program is free software; you can redistribute it and/or
* modify it under the terms of the GNU General Public License as
* published by the Free Software Foundation; either version 2 of
* the License, or (at your option) any later version.
*
* This program is distributed in the hope that it will be useful, but
* WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
* General Public License for more details at
* https://www.gnu.org/copyleft/gpl.html
*
* @section DESCRIPTION
*
* This program is a simple demonstrator that shows how doxygen generates
* documentation for a simple C++ program.
**/

# include <stdio.h>
# include <iostream>


/**
* addup takes a minumum number (min) and a maximum number (max)
* and adds them up using a for loop. It then returns the sum of
* the numbers (sum)
* 
* @param min is the minumum number that the function will start adding from
* @param max is the number that the function will finish adding at.
* @return the final sum of the numbers from min to max. 
**/

int addup(int min, int max){
	int sum = 0;
	for(int i = min; i <= max; i++){
		sum +=i;
		}
	return sum;
}


/**
* This is the main function.
**/
int main(){
	std::cout << "Hello World!" << std::endl;
	std::cout << addup(5,10) << std::endl; 

	return 0;
	}
	
