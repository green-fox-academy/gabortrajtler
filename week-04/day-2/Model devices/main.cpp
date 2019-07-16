#include <iostream>
#include <vector>
#include "Printer.h"
#include "Printer2D.h"
#include "Printer3D.h"
#include "Copier.h"

int main()
{

    // Create a vector that holds Printer* objects
    // Fill the vector with 3 Printer2D, 2 Printer3D and 1 copier.
    // Iterate through the vector and invoke print function on all of them.

    std::vector<Printer*> printers;
    Printer2D p2d1 = Printer2D(240,380);
    Printer2D p2d2 = Printer2D(480,960);
    Printer2D p2d3 = Printer2D(501,1001);
    Printer3D p3d1 = Printer3D(100, 100, 100);
    Printer3D p3d2 = Printer3D(200, 300, 200);
    Copier cp1 = Copier(243, 333, 3);

    printers.push_back(&p2d1);
    printers.push_back(&p2d2);
    printers.push_back(&p2d3);
    printers.push_back(&p3d1);
    printers.push_back(&p3d2);
    printers.push_back(&cp1);

    for (int i = 0; i < printers.size(); ++i) {
        printers[i]->print();
    }

    // Create a vector that holds Scanner* objects
    // Fill the vector with 2 Scanner and 2 Copier objects.
    // Iterate through the vector and invoke scan function on all of them

    std::vector<Scanner*> scanners;
    Scanner sc1 = Scanner(15);
    Scanner sc2 = Scanner(30);
    Copier cp2 = Copier(250, 350, 4);

    scanners.push_back(&sc1);
    scanners.push_back(&sc2);
    scanners.push_back(&cp1);
    scanners.push_back(&cp2);

    for (int i = 0; i < scanners.size(); ++i) {
        scanners[i]->scan();
    }

    // Create a Copier object and invoke copy function on it.
    cp1.copy();

    return 0;
}