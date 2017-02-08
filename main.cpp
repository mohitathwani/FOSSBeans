#include <iostream>
#include <vector>
#include <string>

#include "Project.h"

using namespace std:
int main() {

  vector<Project *> projects;
  cout << "Enter a new project(N) or modify an existing project(M)" << endl;
  char choice;
  cin >> choice;


  while (true) {
    if (choice != 'N' || choice != 'M') {
      cout << "Usage: N or M";
      cin >> choice;
    }
    else {
      break;
    }
  }

  string eneteredProjectName;
  int i = 0;
  switch (choice) {
    case 'N':
      cout << "Enter name for the new project: " << endl;
      cin >> eneteredProjectName;
      projects.push_back(new Poject(eneteredProjectName));
      break;

    case 'M':
      cout << "Enter project name to be modified: " << endl;
      for (size_t i = 0; i < projects.size(); i++) {
        cout << i + 1 << ": " << projects[i]->getName() << endl;
      }
      break;
  }
  return 0;
}
