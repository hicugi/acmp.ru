#include <iostream>
using namespace std;

int main(){
	
	int i;
	string v = "qwertyuiopasdfghjklzxcvbnm";
	char s;
	
	cin >> s;
	
	for( i=0; i < 26; i++ ){
		
		if( s != v[i] ) continue;
		
		if( i != 25 )
			cout << v[i+1];
		else
			cout << v[0];
		break;
	}
	
	return 0;
}
