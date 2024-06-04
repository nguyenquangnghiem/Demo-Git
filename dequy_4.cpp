#include<iostream>

using namespace std ;

int conserve(int n) {
	
	if(n%10 == 0) {
		
		return n ;
		
	}
	
	else {  
	
	cout << n%10 ;
		
		return conserve(n/10) ;
		
	}
	
}

int main() {
	
	int n ; 
	
	cin >> n ;
	
	conserve(n) ;
	
	return 0 ;
}
