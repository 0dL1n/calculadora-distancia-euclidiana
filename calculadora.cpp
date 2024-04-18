#include<stdio.h>
#include<iostream>
#include<math.h>

using namespace std;

typedef struct point{
	float x;
	float y;
} Point;

float distanceEuclidiana(Point p1, Point p2){
	float dx; float dy;
	dx = p1.x - p2.x;
	dy = p1.y - p2.y;
	return sqrt(pow(dx,2) + pow(dy,2));
}

int main(){
	Point p1 = {5.0, 4.0};
	Point p2 = {3.5, 4.0};
	float distancia = distanceEuclidiana(p1, p2);
	cout << distancia;
	
	return 0;
	
}
