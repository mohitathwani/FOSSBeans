#include "project.h"

Project::Project(std::string name) : name(name), submitted(0), accepted(0)

int Project::getRequests() 
{
  return submitted;
}

int Project::getAcceptedRequests()
{
  return accepted;
}

std::string Project::getName()
{
  return name;
}

void Project::submitRequests()
{
  submitted++;
}

void Project::acceptRequest()
{
  if(submitted < 1)
    return;
  submitted--;
  accepted++;
}