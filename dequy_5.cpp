#include<iostream>

using namespace std ;

int first_Number(int n) {
	
	if(n / 10 == 0) {
		
		return n ;
		
	}
	
	else {
		
		return first_Number(n/10) ;
		
	}
}

int main() {
	
	int n ;
	
	cin >> n ;
	
	cout << first_Number(n) ;
	
	return 0 ;
}
