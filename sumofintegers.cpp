#include <iostream>
using namespace std;
int main(){
	int sum = 0;
	int i;
	for(i=1;i<100;i++){
		if(i%3==0||i%5==0){
			sum = sum+i;
		}
	}
	cout<<"Sum of all integers between 0 and 100 which is divisible by 2 or 3 is => "<<sum<<endl;
}
