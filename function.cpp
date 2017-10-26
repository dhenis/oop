#include <iostream>
#include <cstdlib> // lib C for define rand(), srand(), rand_max
#include <ctime> // c time function - defines time ()

using namespace std;
//1===========================
 void printNTimes(const char* msg, int n) {
     for (int i = 0; i < n; ++i) {

         cout << msg;

     }
 }// end of printNtimes
//=========================================

//2

void print(const long & x){

  cout<<x<<endl<<endl;

} // end of print
//-================================




int main(){
long x = 234923592;

printNTimes("hello\n",5); // printNTimes

print(x); //print

//rand max

srand(time(0)); // set the seed

//  time (0) return the current number
int rand Num = rand();

cout <<"Generated random number : "<<rand Numb <<endl;

return 0;
};// end of main
