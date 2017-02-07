//Program Name: Archery Project 1
//Programmer: Scott Dezrah Blinn
//Date 2/6/2017
//Installation Assumption College - Personal Laptop
//Visual Studio 

#include "stdafx.h"
using namespace std;
#include <iostream>
#include <fstream>
#include <math.h>

//Declaring functions
double calcDistance(double xaxis, double yaxis); // Takes co-ordinates and calculates distance from center
int pointCalc(double distance); // Calculates point value of each hit 
double winnerCalc(double score1, double score2, double score3, double score4); // Compares scores and finds highest score

int main()
{
	ifstream in_stream;
	ofstream out_stream;

	in_stream.open("scores.dat"); //opens scores.dat


	//Declares variables and reads in first twenty values held in scores.dat
	double x1, y1, x2, y2, x3, y3, x4, y4, x5, y5, x6, y6, x7, y7, x8, y8, x9, y9, x10, y10;
	in_stream >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4 >> x5 >> y5 >> x6 >> y6 >> x7 >> y7 >> x8 >> y8 >> x9 >> y9 >> x10 >> y10;
	
	//Declares variables and reads in next twenty values held in scores.dat
	double a1, b1, a2, b2, a3, b3, a4, b4, a5, b5, a6, b6, a7, b7, a8, b8, a9, b9, a10, b10;
	in_stream >> a1 >> b1 >> a2 >> b2 >> a3 >> b3 >> a4 >> b4 >> a5 >> b5 >> a6 >> b6 >> a7 >> b7 >> a8 >> b8 >> a9 >> b9 >> a10 >> b10;
    
	//Declares variables and reads in next twenty values held in scores.dat
	double c1, d1, c2, d2, c3, d3, c4, d4, c5, d5, c6, d6, c7, d7, c8, d8, c9, d9, c10, d10;
	in_stream >> c1 >> d1 >> c2 >> d2 >> c3 >> d3 >> c4 >> d4 >> c5 >> d5 >> c6 >> d6 >> c7 >> d7 >> c8 >> d8 >> c9 >> d9 >> c10 >> d10;

	////Declares variables and reads in last twenty values held in scores.dat
	double e1, f1, e2, f2, e3, f3, e4, f4, e5, f5, e6, f6, e7, f7, e8, f8, e9, f9, e10, f10;
	in_stream >> e1 >> f1 >> e2 >> f2 >> e3 >> f3 >> e4 >> f4 >> e5 >> f5 >> e6 >> f6 >> e7 >> f7 >> e8 >> f8 >> e9 >> f9 >> e10 >> f10;

	//This section works with Archer 1's data

	//This defines variables for the calcDistance function to work with. 
	double alpha, beta, gamma, delta, epsilon, zeta, eta, theta, iota, kappa;
	double archerScore1;

	
	//Calculates the location of Archer 1's shots using calcDistance and stores them in 10 distinct variables
	alpha = calcDistance(x1, y1);
	beta = calcDistance(x2, y2);
	gamma = calcDistance(x3, y3);
	delta = calcDistance(x4, y4);
	epsilon = calcDistance(x5, y5);
	zeta = calcDistance(x6, y6);
	eta = calcDistance(x7, y7);
	theta = calcDistance(x8, y8);
	iota = calcDistance(x9, y9);
	kappa = calcDistance(x10, y10);

	//Uses pointCalc function to calculate the point value of each of Archer 1's hits
	//adds them together and stores the result to archerScore1
	archerScore1 = 0;
	archerScore1 = pointCalc(alpha) + pointCalc(beta) + pointCalc(gamma) + pointCalc(delta)
		          + pointCalc(epsilon) + pointCalc(zeta) + pointCalc(eta) + pointCalc(theta)
					+ pointCalc(iota) + pointCalc(kappa);

	//This section works with Archer 2's data

	//This defines variables for the calcDistance function to work with. 
	double alpha1, beta1, gamma1, delta1, epsilon1, zeta1, eta1, theta1, iota1, kappa1;
	double archerScore2;

	//Calculates the location of Archer 2's shots using calcDistance and stores them in 10 distinct variables
	alpha1 = calcDistance(a1, b1);
	beta1 = calcDistance(a2, b2);
	gamma1 = calcDistance(a3, b3);
	delta1 = calcDistance(a4, b4);
	epsilon1 = calcDistance(a5, b5);
	zeta1 = calcDistance(a6, b6);
	eta1 = calcDistance(a7, b7);
	theta1 = calcDistance(a8, b8);
	iota1 = calcDistance(a9, b9);
	kappa1 = calcDistance(a10, b10);
	
	//Uses pointCalc function to calculate the point value of each of Archer 2's hits
	//adds them together and stores the result to archerScore2
	archerScore2 = 0;
	archerScore2 = pointCalc(alpha1) + pointCalc(beta1) + pointCalc(gamma1) + pointCalc(delta1)
		+ pointCalc(epsilon1) + pointCalc(zeta1) + pointCalc(eta1) + pointCalc(theta1)
		+ pointCalc(iota1) + pointCalc(kappa1);

	//This section works with Archer 3's data

	//This defines variables for the calcDistance function to work with. 
	double alpha2, beta2, gamma2, delta2, epsilon2, zeta2, eta2, theta2, iota2, kappa2;
	double archerScore3;

	//Calculates the location of Archer 3's shots using calcDistance and stores them in 10 distinct variables
	alpha2 = calcDistance(c1, d1);
	beta2 = calcDistance(c2, d2);
	gamma2 = calcDistance(c3, d3);
	delta2 = calcDistance(c4, d4);
	epsilon2 = calcDistance(c5, d5);
	zeta2 = calcDistance(c6, d6);
	eta2 = calcDistance(c7, d7);
	theta2 = calcDistance(c8, d8);
	iota2 = calcDistance(c9, d9);
	kappa2 = calcDistance(c10, d10);

	//Uses pointCalc function to calculate the point value of each of Archer 3's hits
	//adds them together and stores the result to archerScore3
	archerScore3 = 0;
	archerScore3 = pointCalc(alpha2) + pointCalc(beta2) + pointCalc(gamma2) + pointCalc(delta2)
		+ pointCalc(epsilon2) + pointCalc(zeta2) + pointCalc(eta2) + pointCalc(theta2)
		+ pointCalc(iota2) + pointCalc(kappa2);

	//This section works with Archer 1's data

	//This defines variables for the calcDistance function to work with. 
	double alpha3, beta3, gamma3, delta3, epsilon3, zeta3, eta3, theta3, iota3, kappa3;
	double archerScore4;

	//Calculates the location of Archer 1's shots using calcDistance and stores them in 10 distinct variables
	alpha3 = calcDistance(e1, f1);
	beta3 = calcDistance(e2, f2);
	gamma3 = calcDistance(e3, f3);
	delta3 = calcDistance(e4, f4);
	epsilon3 = calcDistance(e5, f5);
	zeta3 = calcDistance(e6, f6);
	eta3 = calcDistance(e7, f7);
	theta3 = calcDistance(e8, f8);
	iota3 = calcDistance(e9, f9);
	kappa3 = calcDistance(e10, f10);

	//Uses pointCalc function to calculate the point value of each of Archer 4's hits
	//adds them together and stores the result to archerScore4
	archerScore4 = 0;
	archerScore4 = pointCalc(alpha3) + pointCalc(beta3) + pointCalc(gamma3) + pointCalc(delta3)
		+ pointCalc(epsilon3) + pointCalc(zeta3) + pointCalc(eta3) + pointCalc(theta3)
		+ pointCalc(iota3) + pointCalc(kappa3);

	//This outputs the scores of each individual archer
	cout << "Archer 1 scored " << archerScore1 << " points. Hooray!" << endl;

	cout << "Archer 2 scored " << archerScore2 << " points. Hooray!" << endl;

	cout << "Archer 3 scored " << archerScore3 << " points. Hooray!" << endl;

	cout << "Archer 4 scored " << archerScore4 << " points. Hooray!" << endl;

	//This calls the winnerCalc function to determine the highest score
	winnerCalc(archerScore1, archerScore2, archerScore3, archerScore4);
	



	
	//This closes scores.dat
	in_stream.close();
	out_stream.close();

	return 0;



}
///This function uses the pythagorean theorem to determine 
//how far from the center of the circle the point described
//by the coordinates are. 
double calcDistance(double xaxis, double yaxis)
{   
	double distance;
	distance = sqrt((xaxis*xaxis) + (yaxis*yaxis));
	return distance;

}

//This function calculates the point value of hit
int pointCalc(double distance)
{
	int score;
	score = 0;

	if (distance >= 1.41)
		cout << "Missed";

	else if (distance >= 0.7)
	{
		cout << "";
		score = score + 1;
	}

	else
	{
		cout << "";
		score = score + 2;
	}

	return score;

}

//This uses a nested if loop to determine which score is the largest
double winnerCalc(double score1, double score2, double score3, double score4)
{
	int a, b, c, d;

	a = score1;
	b = score2;
	c = score3;
	d = score4;


	if (a > b)
	{
		if (a > c)
		{
			if (a > d)
				cout << "The winner scored " << a << " points! " << endl;
		}
			
	}
	if (b > c)
	{
		if (b > a)
		{
			if (b > d)
				cout << "The winner scored " << b << " points! " << endl;
		}
	}
	if (c > d)
	{
		if (c > b)
		{
			if (c > a)
				cout << "The winner scored " << c << " points!" << endl;
		}
	}
	if (d > a)
	{
		if (d > b)
		{
			if (d > c)
				cout << "The winner scored " << d << " points!" << endl;
		}
	}

	char response;
	cin >> response;
	return 0;
}
