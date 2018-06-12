#include<iostream.h>
#include<conio.h>
#include<math.h>
#include<graphics.h>

#define radius 1

void main() {
	int gd = DETECT, gm;
	initgraph(&gd, &gm, "C://TC//BGI");
	for(int y = 0; y < 450; y++) {
		for(int x = 0; x < 600; x++) {
			int universe = pow(radius, 2) - pow(x, 2) - pow(y, 2);
			if(universe >= 0) {
				line(x, y, x ,y);
			}
		}
	}
}