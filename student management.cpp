
#include <iostream>
#include <vector>
#include <string>

class Student {
public:
    Student(std::string name, int id) : name(name), id(id) {}
    void addGrade(double grade) { grades.push_back(grade); }
    double getAverageGrade() const {
        double sum = 0;
        for (double grade : grades) sum += grade;
        return grades.empty() ? 0 : sum / grades.size();
    }
    std::string getName() const { return name; }
    int getId() const { return id; }

private:
    std::string name;
    int id;
    std::vector<double> grades;
};

int main() {
    std::vector<Student> students;
    students.push_back(Student("Alice", 1));
    students.push_back(Student("Bob", 2));

    students[0].addGrade(85.5);
    students[0].addGrade(90.0);
    students[1].addGrade(78.0);

    for (const auto& student : students) {
        std::cout << "Name: " << student.getName() << ", ID: " << student.getId()
                  << ", Average Grade: " << student.getAverageGrade() << std::endl;
    }

    return 0;
}
