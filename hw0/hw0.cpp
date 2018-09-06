/*Raheema Kadwa
//Machine Learning - HW0 
//Programming Prelim 
*/

#include <iostream>    
using namespace std;
 

/*Write a function called range that takes in a list/array/vector of numbers and returns the
difference between the smallest and biggest number in the list. For example, if you provide the
list {2, -2, 4, 5}, x=range(list) will place the number 7 into x. Use a loop.*/
void range(vector<int> vect){
	int max=0, min=0; 

	for (int i=0; i<vect.size(); i++){
       if (vect[i] > max)
       		max = vect[i];
       else if (vect[i]<min)
       		min = vect[i];
    }

    int x = max-min;
}

int main() {                        
   cout << "hello, world" << endl;  
   return 0;                       
}    