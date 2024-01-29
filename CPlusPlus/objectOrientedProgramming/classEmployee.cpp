#include <iostream>
using std::string;

class Employee {
    //protected:
    private: //encapsulation
    string Name;
    string Company;
    int Age;

    public:
    // string Name;
    // string Company;
    // int Age;
    void setName(string name){ // setter
        Name = name;
    }
    string getName(){ // getter
        return Name;
    }
    void setCompany(string company){ // setter
        Company = company;
    }
    string getCompany(){ //getter
        return Company;
    }
    void setAge(int age){ // setter
        if (age >= 18){
            Age = age;
        }
    }
    int getAge(){ // getter
        return Age;
    }
    void IntroduceYourself(){
        std::cout << "Name - " << Name << std::endl;
        std::cout << "Company - " << Company << std::endl;
        std::cout << "Age - " << Age << std::endl;
    }
    // constructor
    Employee(string name, string company, int age){
        Name = name;
        Company = company;
        Age = age;
    }
};

int main(){
    Employee employee1 = Employee("Rohan", "Google", 24);
    // employee1.Name = "Rohan";
    // employee1.Company = "Google";
    // employee1.Age = 24;
    employee1.IntroduceYourself();

    employee1.setAge(15);
    std::cout << employee1.getName() << " is " << employee1.getAge() << " years old." << std::endl;

    employee1.setAge(35);
    std::cout << employee1.getName() << " is " << employee1.getAge() << " years old." << std::endl;
}
