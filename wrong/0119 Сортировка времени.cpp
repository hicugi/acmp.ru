#include <iostream>
using namespace std;

int main(){

  int N;
  
  cin >> N;
  
  int arr[N][3] ,i,j;
  
  // input times
  for( i=0; i < N; i++ )
    for( j=0; j < 3; j++ )
      cin >> arr[i][j];
  
  
  // insert smaller times at begin
  int nb ,n;
  
  for( i=1; i < N; i++ ){
    
    nb = arr[i-1][0] * 60 * 60 + arr[i-1][1] * 60 + arr[i-1][2];
    n = arr[i][0] * 60 * 60 + arr[i][1] * 60 + arr[i][2];
    
    if( nb > n )
      for( j=0; j < 3; j++ ){
        
        n = arr[i-1][j];
        arr[i-1][j] = arr[i][j];
        arr[i][j] = n;
      }
  }
  
  // show result
  for( i=0; i < N; i++ ){
    
    if( i > 0 )
      cout << endl;
    
    for( j=0; j < 3; j++ ){
      
      if( j > 0 )
        cout << " ";
      cout << arr[i][j];
    }
  }
  
  return 0;
}
