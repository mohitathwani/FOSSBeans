/*
  @file: project.h
  @author:
	Pinak Das
	Tanay Khandke
*/
#ifndef PROJECT_H
#define PROJECT_H
#include <string>
class Project {
  private:
    int _submitted;
    int _accepted;
    std::string _name;
  public:
    Project(std::string projectName);
    void submitRequest();
    void acceptRequest();
    int getSubmittedRequests();
    int getAcceptedRequests();
    std::string getName();
    int getRequests();
    void submitRequests();
};

#endif
