#include <iostream>
using std::string;

// abstract class
class AbstractEmployee {
    virtual void AskForPromotion() = 0; // pure virtual function
};

class Employee:AbstractEmployee {
    //protected:
    private: //encapsulation
    string Name;
    string Company;
    int Age;

    public:
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
    // abstraction (some rules)
    void AskForPromotion(){
        if (Age > 30){
            std::cout << Name << " got promoted!" << std::endl;
        }
        else{
            std::cout << Name << ", sorry NO promotion for you!" << std::endl;
        }
    }
    // polymorphism
    virtual void Work(){
        std::cout << Name << " is checking email, task backlog, performing tasks..." << std::endl;
    }
};

// polymorphism
class Developer: public Employee { // by default private
    public: // for developer only
    string FavProgrammingLanguage;
    Developer(string name, string company, int age, string favProgrammingLanguage)
        :Employee(name, company, age) // Developer Constructor (get the name from Employee)
    {
        FavProgrammingLanguage = favProgrammingLanguage;
    }
    void FixBug(){ // developer is fixing this and this bug
        std::cout << getName() << " fixed bug using " << FavProgrammingLanguage << std::endl;
    }
    void Work(){
        std::cout << getName() << " is writing " << FavProgrammingLanguage << " code." << std::endl;
    }
};

// polymorphism
class Teacher: public Employee {
    public:
    string Subject;
    void PrepareLesson(){
        std::cout << getName() << " is preparing " << Subject << " lesson" << std::endl;
    }
    Teacher(string name, string company, int age, string subject)
        :Employee(name, company, age)
    {
        Subject = subject;
    }
    void Work(){
        std::cout << getName() << " is teaching " << Subject << "." << std::endl;
    }
};

int main(){
    Employee employee1 = Employee("Rohan", "Google", 24);
    Employee employee2 = Employee("Sunny", "Amazon", 35);
    Developer d = Developer("Jack", "Google", 35, "C++");
    Teacher t = Teacher("Sara", "Amazon", 35, "History");
    d.Work();
    t.Work();
    Employee *e1 = &d;
    Employee *e2 = &t;
    e1->Work();
    e2->Work();
}
