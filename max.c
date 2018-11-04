#include <stdio.h>
#include "max.h"
int max (int a, int b) {
if((a<MAXn) && (b<MAXn)){
	if (a >= b){
		 return a;}
	else {
		 return b;}
}
else {
 return -104; }
}
