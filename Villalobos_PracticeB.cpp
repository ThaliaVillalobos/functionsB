//Name: Thalia Villalobos
// 13 October 2015
//Write a single program which implements all of the functions assigned

#include<iostream>
#include<cmath>
#include<cassert>
using namespace std;

double feetToInches(double val);

void feetToInchez(double&  val);

double computeRectangle(double valA, double valB);

void computeArea (double valA, double valB, double& valC);

void computerArea (double valA, double valB, double& valArea, double& valPerimeter);

void  stats(double valA, double valB, double valC, double valD, double& valE, double& valF);

void calcAreaPerimeter(double radius, double& area, double& perimeter);

double calcArea(double length, double width);

int main()
{
    double valA = 20;
    double valB = 10;
    double valC = 44;
    double valD = 36;
    double num, num2;
    
   //assert 
    assert(feetToInches(12) == 144);
    assert(feetToInches(23) == 276);
    assert(computeRectangle(10, 10) == 100);
    assert(computeRectangle(20, 40) == 800);
    assert(calcArea(44,10) == 440);
    	
   //void 
    feetToInchez(valA);
    computeArea (valA, valB, num);
    computerArea (valB, valC, num, num2);
    stats(valB, valC, valA, valD, num, num2); 				
    calcAreaPerimeter(valA, num, num2);
  					
    cout << "It works!!" << endl;
    
    return 0;

}

double feetToInches(double val)
{
    double inches;
    inches = val * 12;
    return inches;
}

void feetToInchez(double& val)
{
    double inches;
    inches = val * 12;
    
    cout << "Expected 240 " << " Actual number of inches:" << inches << endl;
 
    return;
}

double computeRectangle(double valA, double valB)
{
    double answer;
    answer = valA * valB;
    return answer;
}

void computeArea (double valA, double valB, double& valC)
{
    valC = valA * valB;
    cout << "Expected area 200 " << " Actual area is: " << valC << endl;
    return;
}

void computerArea (double valA, double valB, double& valArea, double& valPerimeter)
{
    valArea = valA * valB;
    valPerimeter = (2 * valA) + (2 * valB);
    cout << "Expected area 440 " << " Actual area is: " << valArea << endl;
    cout << "Expected perimeter 108" << " Actual perimeter is: " << valPerimeter << endl;
    return;
}


void stats(double valA, double valB, double valC, double valD, double& valE, double& valF)
{
    valE = valA + valB + valC + valD;
    valF = valE / 4;
    cout << "Expected sum 110" << " Actual sum is: " << valE << endl;
    cout << "Expected average 27.5 " << " Actual average is: " << valF << endl;
    return;
}

void calcAreaPerimeter(double radius, double& area, double& perimeter)
{
    double pI = 3.141519;
    area = pI * pow(radius, 2);
    perimeter = 2 * pI * radius;
    
    cout << "Expected area 1256.61" << " Actual area is: " << area << endl;
    cout << "Expected perimeter 125.661" << " Actual perimeter is: "   <<perimeter << endl;
    return;   
}

double calcArea(double length, double width)
{
    double answer;
    answer = length * width;
    return answer;
}
