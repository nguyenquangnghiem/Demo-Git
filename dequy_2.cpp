#include<iostream>

using namespace std ;

int recursive(int n) {
	
	while(n > 1) {
		
		if(n == 1) {
			
			return 1 ;
		}
		
		else {
			
			return n + recursive(n - 1) ;
			
		}
	}
	
}

int main(){
	
	int n ;
	
	cin >> n ;
	
	int kq = recursive(n);
		
		cout << kq ;
		
	
	return 0 ;
}
