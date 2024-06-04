#include<iostream>

using namespace std ;

double sum(int n) {
	
	if(n == 1 ) {
		
		return 1 ;
		
	}
	
	else if(n > 1) {
		
		return 1 *1.0 / n + sum(n - 1) ;
		
	}
}

int main() {
	
	int n ; 
	
	cin >> n ;
	
	cout << sum(n) ;
	
	return 0 ;
}
