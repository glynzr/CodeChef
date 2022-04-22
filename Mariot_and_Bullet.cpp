#include <iostream>
using namespace std;
int main(){
   int T,i,X,Y,Z;
   i=0;
   cin>>T;
   while (i<T){
      cin>>X >> Y >> Z;
      if ((Y/X)<Z){
         cout<< Z-(Y/X)<< endl;
      }else{
         cout<< 0 <<endl;
      }
      i++;
   }
}