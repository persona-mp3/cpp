#include <cstddef>
#include <iostream>
#include <vector>

class Student {
  // private properties, could also be marked as 'private'
  std::string s_name = "Default Student";
  float s_avg;

  // class constructor
  public:
    Student(){}
    Student(std::string name, float avg) : s_name(name), s_avg(avg) {}

    void print() { std::cout << s_name << " " << s_avg << "\n"; }
};

class Course {
  std::string m_name = "Unknown Course";
  std::vector<Student> m_students;

  public: 
    // default object initialised with private properties
    Course() {}
    // since 'strings' are big in cpp, we need to pass them by refrence to avoid copying them
    // for every operation
    Course(std::string& c_name): m_name(c_name){}

    void addStudent(Student& s){
      m_students.push_back(s);
    }
};

struct testingStruct {
  float avg;
};

int main(int argc, char *argv[]) {
  std::cout << "hello cpp\n" << "Get ready to enter a number\n";
  // int x{};
  // std::cin >> x;
  // std::cout << "You're " << x << " years old ???\n";
  // std::cout << "In the big 25?\nPack it up bro\n";

  std::vector<int> vec;
  vec.push_back(42);
  vec.push_back(23);
  vec.push_back(42);

  for (size_t i = 0; i < vec.size(); i++) {
    std::cout << vec[i] << std::endl;
  }
  return 0;
}
