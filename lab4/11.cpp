#include <iostream>

using namespace std;

class Triangle{
public:
int sideA;
int sideB;
int sideC;


Triangle(){

      sideA = 0;
      sideB = 0;
      sideC = 0;

          cout<<sideA<<" "<<sideB<<" "<<sideC<<endl;
};

Triangle(int sideA, int sideB, int sideC){

  this ->  sideA = (sideA>=0)?sideA:0;
  this ->  sideB = (sideB>=0)?sideB:0;
  this ->  sideC = (sideC>=0)?sideC:0;

    cout<<sideA<<" "<<sideB<<" "<<sideC<<endl;
  };

};


int main(){

Triangle t ;

t.sideA = 3;
t.sideB = 4;
t.sideC = 5;

Triangle t2;
Triangle t3(1,2,3);
Triangle t4(-1,2,3);

Triangle t5 = t;

if ((t.sideA == 3 && t.sideB == 4 && t.sideC == 5) &&
(t2.sideA == 0 && t2.sideB == 0 && t2.sideC == 0) &&
(t3.sideA == 1 && t3.sideB == 2 && t3.sideC == 3) &&
(t4.sideA == 0 && t4.sideB == 2 && t4.sideC == 3) &&
(t5.sideA == 3 && t5.sideB == 4 && t5.sideC == 5))
cout << "You correctly created a Triangle class" << endl;
else
cout << "Your Triangle class seem to have errors." << endl;

// if(t.sideA == 3 && t.sideB == 4 && t.sideC == 5){
//
// cout<<"you Correctly create a Triangle class \n";
//
// }else
// {
// cout<<"your triangle class seems to to hacve an error \n";
// }



return 0;
}
