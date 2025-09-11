#include <iostream>

int main(int argc, char *argv[]) {
  std::string name = "a string holds an address ";
  std::string s2 = "Another string due to inspection ";

  std::cout << name << sizeof(name) << '\n';
  std::cout << s2 << sizeof(s2) << '\n';

  /*
   * Theres some speculation here. The tutorial I'm following, they are
   * using a Windows system, that saying, their compiler, system-architecture
   * and more will caues minor, but important differences. For example, a
   * std::string object is stored as 32-bytes, while on this device, it's a
   * 24-byte size. Kind of strange.
   * */

  std::string ss[] = {"cpp", "golang", "python", "java"};
  // on my system, it is -> 24 * 4 -> 96-bytes, expect it to differ on yours
  long arraySize = sizeof(ss);
  long nElements = arraySize / sizeof(ss[0]);
  std::cout << "Size of array, ss -> " << arraySize << '\n';
  std::cout << "Number of elements in ss -> " << nElements << '\n';

  // size of booleans is usually 1byte as it can either be 1 or 0
  // doubles - 8-bytes
  double monthlySalary = 38999.293;
  std::cout << "Size of doubles: " << sizeof(monthlySalary) << '\n';

  int maisonMargiela = 23889344; // 4-bytes
  std::cout << "Size of an integer: " << sizeof(maisonMargiela) << '\n';
  return 0;
}
