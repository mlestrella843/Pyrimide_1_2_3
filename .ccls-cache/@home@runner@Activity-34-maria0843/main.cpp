
/* Printing Pyramids
Print a pyramid of numbers to make a pattern as shown below

Pyramid height 3	Pyramid height 4
       1                                                               
      2 3                                                              
     4 5 6                                                             
    
	     1                                                               
      2 3                                                              
     4 5 6                                                             
    7 8 9 10 */

#include <iostream>
using namespace std;

int main() {
int n=0; int contador=0;

cout<<"Introduce the limit of your Pyramide: ";
cin>>n;  
  contador = 1;
  for(int i=1; i<=n; i++){          
      for(int k = n-i; k > 0; k--)
        cout<<" ";
      for(int j=1; j <= i; j++){
        cout<<contador<<" ";
        contador = contador + 1;
      }
      cout<<endl; 
  }

return 0;
  
}


  