/*Raheema Kadwa
//Machine Learning - HW0 
//Programming Prelim 
*/

#include <iostream>    
#include <vector>
using namespace std;
using std::vector; 


/*1. Write a function called triple that takes in a real number. The function will return three times
the value of the input. For example x=triple(5) will place the number 15 into x. Note: the
function RETURNS a number, it does NOT print out a number to the screen.*/
int triple (int num){
	int x= num + num + num; 
	return x;
}

/*2.Write a function called range that takes in a list/array/vector of numbers and returns the
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

/*Write a function called flip that takes in a two-dimensional array/list/matrix with R rows, and
returns a new two-dimensional array/list/matrix where the nth row of the new matrix contains
the entries of the (M-n+1)th row of the original matrix. In other words, flip the row order.
For example, the flip of A={{1, 2, 3}, {4, 5, 6}, {7, 8, 9}} is A
F={{7,8,9}, {4,5,6}, {1,2,3}} Use a loop.*/

void flip (vector< vector<int> > vec){
	vector< vector<int> > flipped; 
	for (int x =0 ; x< vec.size(); x++){
		for (int y= 0; y < vec[x].size(); y++)
			flipped[vec[x].size()-1-x][y]= vec[x][y];
	}
}

int main() {                        
   cout << "hello, world" << endl;  
   return 0;                       
}    