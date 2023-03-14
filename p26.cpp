#include <iostream>
using namespace std;
#include <cstring>  

void f(struct student );

struct student      
{   int   id;      
    char  name[50];      
    float grade;      
}s1,s2;    

int main( )    
{    
   s1.id=123;    
   strcpy(s1.name, "taha");  
   s1.grade=19.5;  
   f(s1);
   
   cout << "------" << endl;
   
   s2.id=6789;    
   strcpy(s2.name, "sara");  
   s2.grade=18.75; 
   f(s2);
  
   return 0;    
}    

void f(struct student x)
{
   cout << x.id << '\n';    
   cout << x.name << '\n';    
   cout << x.grade << '\n'; 
}

