#include <iostream>
#include "lib.h"
using namespace std;

int main(){
  int dimension = 0;
cin >> dimension;
int beta[dimension];
for (int i=0; i<dimension; i++) {
beta[i]=0;
} for (int i=0; i<dimension; i++) {
cin >> beta[i];
}
cout << maggiore (dimension, beta);
  return 0;
}
