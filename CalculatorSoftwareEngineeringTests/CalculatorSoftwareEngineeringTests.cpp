// CalculatorSoftwareEngineeringTests.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "ButtonFactoryTest.h"
#include "CalculatorProcessorTests.h"

int main()
{
    std::cout << "Button Factory Tests!\n";
    ButtonFactoryTest BFT;
    BFT.IsLabel56();
    BFT.IsLabelNot56();
    BFT.IsID10001();
    BFT.ISIDNot10001();
    BFT.IsColourAE71DC();
    BFT.IsColourNotAE71DC();
    BFT.IsLabel68();
    BFT.IsLabelNot68();
    BFT.IsID10070();
    BFT.ISIDNot10070();

    std::cout << "\nCalculator Processor Tests!\n";
    CalculatorProcessorTests CPT;
    CPT.HexTest();
    CPT.BinTest();
    CPT.DecTest();
    CPT.NotBinTest();
    CPT.NotDecTest();
    CPT.NotHexTest();
    CPT.Addition();
    CPT.Subtraction();
    CPT.Multiply();
    CPT.Division();
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
