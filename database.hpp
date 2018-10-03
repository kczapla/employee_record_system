#pragma once
#include <iostream>
#include <vector>

#include "employee.hpp"


namespace Records {
    const int kFirstEmployeeNumber = 1000;
    
    class Database {
        public:
            Employee& addEmployee(const std::string& firstName,
                                  const std::string& lastName);
            Employee& getEmployee(int employeeNumber);
            Employee& getEmployee(const std::string& firstName,
                                  const std::string& lastName);

            void displayAll() const;
            void displayCurrnet() const;
            void displayFormer() const;

        private:
            std::vector<Employee> mEmployees;
            int mNextEmployeeNumber = kFirstEmployeeNumber;
    };
}
