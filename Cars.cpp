#include <iostream>
using namespace std;

class Worker {
private:
    int salary;
    string surname;
    string profession;
    int age;
    int work_exp;

public:

    Worker() {
        salary = 0;
        surname = "None";
        profession = "None";
        age = 0;
        work_exp = 0;
    }
    Worker(int sal, string sur, string prof, int a, int w) {
        salary = sal;
        surname = sur;
        profession = prof;
        age = a;
        work_exp = w;
    }
    // Setter
    void setSalary(int s) {
        salary = s;
    }
    // Getter
    int getSalary() {
        return salary;
    }

public:
    // Setter
    void setSurname(string sn) {
        surname = sn;
    }
    // Getter
    string getSurname() {
        return surname;
    }
public:
    // Setter
    void setProfession(string pr) {
        profession = pr;
    }
    // Getter
    string getProfession() {
        return profession;
    }
public:
    // Setter
    void setAge(int a) {
        age = a;
    }
    // Getter
    int getAge() {
        return age;
    }
public:
    // Setter
    void setWork_exp(int wex) {
        work_exp = wex;
    }
    // Getter
    int getWork_exp() {
        return work_exp;
    }

};

int main() {
    Worker myObj;
    myObj.setSalary(50000);
    cout << "Salary of worker is: " << myObj.getSalary()<<endl;
    myObj.setSurname("Astafieva");
    cout << "Surname of worker is: " << myObj.getSurname() << endl;
    myObj.setProfession("progremmer");
    cout << "Profession of worker is: " << myObj.getProfession() << endl;
    myObj.setAge(18);
    cout << "Age of worker is: " << myObj.getAge() << endl;
    myObj.setWork_exp(1);
    cout << "Work experience of worker is: " << myObj.getWork_exp() << endl;
    Worker w(50000, "Astafieva", "progremmer",18, 1);
    int z = w.getSalary();
    string a = w.getSurname();
    string p = w.getProfession();
    int g = w.getAge();
    int e = w.getWork_exp();
    cout << z;
    return 0;
}