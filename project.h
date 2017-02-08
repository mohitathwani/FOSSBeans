/* 
  @file: project.h
  @author:
	Pinak Das
	Tanay Khandke
*/
#ifndef PROJECT_H
#define PROJECT_H
#include <string.h>
class Project {
  private:
    int _submitted;
	int _accepted;
    string _name;
  public:
    Project(string projectName);
    void submitRequest();
	void acceptRequest();
    int getSubmittedRequests();
	int getAcceptedRequests();
	string getName();
}

#endif
