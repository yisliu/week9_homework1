#include <iostream>
#include <string>
using namespace std;

int main() {
  /*
input: name, cost, weight
output: name, total cost, cost, weight
make variables for all the different inputs, and then time cost and weight. At last print out all variables.
*/
  string name;
  int tc, c, w;
  cin>>name>>c>>w;
  tc = c*w;
  cout<<name<<" "<<tc<<" "<<c<<" "<<w;
}