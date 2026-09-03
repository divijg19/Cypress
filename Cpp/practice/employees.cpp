#include <iostream>
class Employee {
public:
  virtual double calculateSalary() = 0;
};

class Permanent_Employee : public Employee {
private:
  double basicSalary;
  double bonus;

public:
  Permanent_Employee(double basicSalary, double bonus)
      : basicSalary(basicSalary), bonus(bonus) {}
  double calculateSalary() override { return basicSalary + bonus; }
};

class Contracted_Employee : public Employee {
private:
  double hourlyRate;
  int hoursWorked;

public:
  Contracted_Employee(double hourlyRate, int hoursWorked)
      : hourlyRate(hourlyRate), hoursWorked(hoursWorked) {}
  double calculateSalary() override { return hourlyRate * hoursWorked; }
};

int main(void) {
  Permanent_Employee permanent(50000, 5000);
  Contracted_Employee contracted(1800, 17);

  std::cout << permanent.calculateSalary() << '\n';
  std::cout << contracted.calculateSalary() << '\n';
  return 0;
}
