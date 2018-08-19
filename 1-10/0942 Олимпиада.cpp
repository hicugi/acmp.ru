#include <iostream>
using namespace std;

int getPoints( int tasks[], int N ) {

  int iTime = 300, res = 0;

  for( int i=0; i < N; i++ ){

    int v = 0;

    for( int j=0; j <= i; j++ )
      v += tasks[j];

    if( res+v > iTime ){
      res = iTime;
      break;
    }

    res += v;
  }

  return res;
}

void usort( int arr[], int N ) {

  int res[N], j=0;

  for( int i=0; i < N; i++ )
    res[i] = arr[ N-1-i ];
  
  for( int i=0; i < N; i++ )
    arr[i] = res[i];
}
 
void sort( int arr[], int N ) {

  int n;
  
  for( int i=1; i < N; i++ ){
    
    if( arr[i-1] < arr[i] )
      continue;

    for( int j=i; j > 0; j-- ){
      
      if( arr[j-1] < arr[j] )
        break;
      
      n = arr[j-1];
      arr[j-1] = arr[j];
      arr[j] = n;
    }
  }
}
 
int main() {

  // count of tasks
  int N;
  cin >> N;

  int tasks[N];

  for( int i=0; i < N; i++ )
    cin >> tasks[i];

  int students[3] = {0,0,0}, points = 0;

  // student #1
  students[0] = getPoints( tasks, N );

  // student #3
  usort( tasks, N );
  students[1] = getPoints( tasks, N );

  // student #3
  sort( tasks, N );
  students[2] = getPoints( tasks, N );

  // winner
  int studentPoints = 0, winner = 1;

  for( int i=2; i > -1; i-- ){
    
    if( studentPoints && studentPoints <= students[i] ) continue;

    studentPoints = students[i];
    winner = i;
  }

  int studentsCourses[3] = { 5, 3, 1 };
  cout << studentsCourses[winner];
  return 0;
}