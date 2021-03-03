//------------------------------
//  DO NOT MODIFY NEXT LINE
//------------------------------
#include "catch.hpp"
//------------------------------
// Put the assignment code here
//https://www.tutorialspoint.com/cplusplus/cpp_overloading.htm
#include <iostream>
class Quaternion {
  private:
  double coeffe;
  double coeffe1;
  double coeffe2;
  double coeffe3;
  public:
  Quaternion ( double a, double bi , double cj, double dk){
    coeffe= a;
    coeffe1=bi;
    coeffe2=cj;
    coeffe3=dk;
  }

};

int main(){

Quaternion operator+ (const Quaternion& addie) const{
  Quaternion addie{0,0,0,0};
  addie.coeffe= this ->coeffe+addie.coeffe;
  addie.coeffe1= this -> coeffe1+addie.coeffe1;
  addie.coeffe2= this -> coeffe2 + addie.coeffe2;
  addie.coeffe3= this-> coeffe3 + addie.coeffe3;
  return addie;
  }

  Quaternion operator- (const Quaternion& min) const{
  Quaternion min{0,0,0,0};
  min.coeffe= this ->coeffe-min.coeffe;
  min.coeffe1= this -> coeffe1-min.coeffe1;
  min.coeffe2= this -> coeffe2 - min.coeffe2;
  min.coeffe3= this-> coeffe3 - min.coeffe3;
  return min;
  }

  Quaternion operator* (const Quaternion& mul) const {
  mul.coeffe= this ->coeffe*mul.coeffe;
  mul.coeffe1= this -> coeffe1*mul.coeffe1;
  mul.coeffe2= this -> coeffe2*mul.coeffe2;
  mul.coeffe3= this-> coeffe3*mul.addie.coeffe3;
  return min; 

  bool Quaternion operator== (const Quaternion& comp) const{
    Quaternion comp;
    if (this->coeffe==comp.coeffe){
      return true;}
    else{
      return false;}

    if (this-> coeffe1==comp.coeffe1) {
      return true;
    }
    else { 
      return false;}

    if (this->coeffe2==comp.coeffe2) {
      return true;
    }
    else{
      return false;
    }

    if(this -> coeffe3==comp.coeffe3) {
      return true;
    }
    else{
      return false;
    }

  
    
   

  }
};


//------------------------------
//   DO NOT MODIFY TEST CASES
//------------------------------
TEST_CASE( "Assignment" ) {
    SECTION( "q1" ) {
        Quaternion q{1.0, 2.0, 3.0, 4.0};
        Quaternion p{1.0, 2.0, 3.0, 4.0};
        REQUIRE( q == p );
    }
    SECTION( "q2" ) {
        Quaternion q{1.0, 2.0, 3.0, 4.0};
        Quaternion p{1.0, 2.0, 3.0, 4.0};
        Quaternion r{2.0, 4.0, 6.0, 8.0};
        REQUIRE( (q + p) == r );
    }
    SECTION( "q3" ) {
        Quaternion q{1.0, 2.0, 3.0, 4.0};
        Quaternion p{1.0, 2.0, 3.0, 4.0};
        Quaternion r{0.0, 0.0, 0.0, 0.0};
        REQUIRE( (q - p) == r );
    }
    SECTION( "q3" ) {
        Quaternion q{1.0, 2.0, 3.0, 4.0};
        Quaternion r{2.0, 4.0, 6.0, 8.0};
        REQUIRE( (q * 2.0) == r );
    }
}
//------------------------------
