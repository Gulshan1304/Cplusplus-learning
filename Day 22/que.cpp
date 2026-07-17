#include <iostream>
#include<string>
using namespace std;
class teacher{
    private:
    double salary;

public:
string name;
string department;
string Subject;

void changeDepartment(string newDepartment){
    department = newDepartment;


}


void setSalary(double newSalary){
     salary = newSalary;
}
double getSalary(){
    return salary;

}
};

int main(){
teacher t1;
t1.name = "Gulshan Rahangdale";
t1.department = "Computer Science";
t1.Subject = "C++";
t1.setSalary(50000);
cout<<"Name: "<<t1.name<<endl;
cout<<"Salary: "<<t1.getSalary()<<endl;
return 0;
}   
