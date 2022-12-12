#include "lib.h"

int maggiore (int dimension, int alfa[]) {
int p=1, q=0;
if(alfa[q]<alfa[p]) {
for (p; p<dimension-1; p++){
while (alfa[q]<=alfa[p]) {
q++;
if(q==dimension){
return alfa[p];
}}}
return alfa[p];
}
if (alfa[p]<alfa[q]) {
for (q; q<dimension-1; q++) {
while (alfa[p]<=alfa[q]) {
p++;
if (p==dimension) {
return alfa[q];
}}}
return alfa[q];
}}
