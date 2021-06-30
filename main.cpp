/**
 * @file
 * @author  Trevor Tomesh <tmtomesh@gmail.com>
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
 * This program demonstrates how to use doxygen in C++
 */



#include <stdio.h>
#include <iostream>


/**
* This is a simple hello world function. 
*/
void helloWorld(){
	std::cout << "Hello World!" << std::endl;
	}
	

/**
* addup takes a minumum number (min) and a maximum number (max)
* and adds them up using a for-loop. It then returns the sum
* of these numbers.
*
* @param min is the minumum number that the function will start adding from
* @param max is the number that the function will finish adding at.
* @return sum is the final sum of the numbers from min to max.
*/
int addup(int min, int max){
	int sum = 0;	
	for(int i = min; i <= max; i++){
		sum += i;
		}
	return sum;
}
		
	
	

/**
* This is the main function.
*/
int main(){
	std::cout << "Hello World!" << std::endl; 
	
	std::cout << addup(0,5) << std::endl;
	
	return 0;
	
	}
	
