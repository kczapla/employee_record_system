#include <iostream>

#include "database.hpp"

using namespace std;
using namespace Records;

int main() {

    Database myDB;

    Employee& emp1 = myDB.addEmployee("Greg", "Wallis");
    emp1.fire();

    Employee& emp2 = myDB.addEmployee("Marc", "White");
    emp2.setSalary(100000);

    Employee& emp3 = myDB.addEmployee("John", "Doe");
    emp3.setSalary(100000);
    emp3.promote();

    cout << "all employees: " << endl << endl;
    myDB.displayAll();

    cout << "current employees: " << endl << endl;
    myDB.displayCurrnet();

    cout << "former employees: " << endl << endl;
    myDB.displayFormer();

}
