#include<iostream>

using namespace std ;

int recursive(int n) {
		
		if(n == 2) {
			
			return 1 ;
			
		}
		
		else if(n == 3) {
			
			return 2 ;
		}
		
		else if(n <= 0) {
			
			return 0 ;
			
		}
		
		else {
			
			return recursive(n - 1) + recursive(n - 2)  ;
			
		}
}

int main(){
	
	int n ; 
	
	cin >> n ;
	
	int kq = recursive(n) ;
	
	cout << kq ;
	
	return 0 ;
}
