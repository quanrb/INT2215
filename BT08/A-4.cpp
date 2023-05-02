#include "bits/stdc++.h"
using namespace std;

int main()  { 
   char **s = new char*;  // ban dau con tro chua duoc cap phat -> loi chua khoi tao
   char foo[] = "Hello World"; 
   *s = foo; 
   printf("s is %s\n", *s); //truyen tham so kieu char*
   s[0] = foo; 
   printf("s[0] is %s\n", s[0]); 
   return(0); 
}
