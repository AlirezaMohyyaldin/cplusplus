#include <iostream>
using namespace std;
  
struct mys      
{   
    int    a;      
    float  b; 
}s;    

union myu      
{   
    int    a;      
    float  b; 
}u; 

int main( )    
{          
   cout << sizeof(s) << endl;
   cout << sizeof(u) << endl;
   
   s.a = 123;
   s.b = 13.5;
   cout << s.a << endl;
   cout << s.b << endl;
   
   u.a = 123;
   u.b = 13.5;
   cout << u.a << endl;
   cout << u.b << endl;
   
   return 0;    
}    

