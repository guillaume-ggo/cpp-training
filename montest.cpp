#include <iostream>
#include <fstream>
using namespace std;

int main() {
  int ageUtilisateur(16);
  int *ptr(0);
  ptr=&ageUtilisateur;
  cout << "ptr=" << ptr << " *ptr=" << *ptr << " &ageUtilisateur=" << &ageUtilisateur << " ageUtilisateur=" << ageUtilisateur << endl;
  cout << "ptr==&ageUtilisateur?" << bool(ptr==&ageUtilisateur) << " *ptr==ageUtilisateur?" << (*ptr==ageUtilisateur) << endl;
  cout << (10/3) << " " << (10%3);
  cout << endl << "false==false=" << (false&&false) << endl;
  return 0;
}
