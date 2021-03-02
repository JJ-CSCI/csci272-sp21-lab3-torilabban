//------------------------------
//  DO NOT MODIFY NEXT LINE
//------------------------------
#include "catch.hpp"
//------------------------------
// Put the assignment code here
class Quaternion {
  private:
  double a;
  double bi;
  double cj;
  double dk;
  public:
  Quaternion ( double a, double bi , double cj, double dk);
  bool operator==(const Quaternion &rhs)const{
    return Quaternion == rhs.Quaternion;
    } 
  double Quaternion operator+ (const double &obj);
};

void Quaternion:: Quaternion.q ( double , double, double , double);
void Quaternion:: Quaternion.p ( double , double, double , double);
void Quaternion:: Quaternion.r ( double , double, double , double);

int main(){
Quaternion q,p,r;
void Quaternion::bool operator==(const Quaternion &rhs)const{
  if ( Quaternion.q == Quaternion.p) {
    cout<< " True " << endl;
  }
  else{
    cout << " False" << endl;
  }

double Quaternion operator+ (const double &obj){
  if (q)
}

}
}


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
