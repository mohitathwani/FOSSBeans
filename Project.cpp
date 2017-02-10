#include "project.h"

Project::Project(std::string name) : _name(name), _submitted(0), _accepted(0)

int Project::getRequests() 
{
  return _submitted;
}

int Project::getAcceptedRequests()
{
  return _accepted;
}

std::string Project::getName()
{
  return _name;
}

void Project::submitRequests()
{
  _submitted++;
}

void Project::acceptRequest()
{
  if(_submitted < 1)
    return;
  _submitted--;
  _accepted++;
}