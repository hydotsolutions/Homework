#include <iostream>
using namespace std;
int main(){
	//Defining constant in the program
	int i;
	int even_or_odd_number = 0;
	int prime_number = 0;
	
	//Creating a for loop to loop through the numbers 
	for(i=2;i<101;i++){
	
	//Creating a conditional statement to select all even or odd number 
		if(i%2==0||i%3==0||i%5==0||i%7==0){
			even_or_odd_number= even_or_odd_number+i;
		}
	//The else will select only the prime numbers 	
		else{
			prime_number = prime_number+i;
		}
	}
	//2,3,5,7 are prime numbers but not included in the list of prime numbers because i used it in the if statement as a condition to capture all even and odd numbers
			cout<<"THE SUM OF ALL PRIME NUMBERS BETWEEN 0 AND 100 IS => "<<prime_number+2+3+5+7;
}
