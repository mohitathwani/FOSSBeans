#FOSSBeans

FOSSBeans is a simple command-line application that keeps tallies of FOSS contributions for an individual person. It lets you keep track of:

* Which projects you've contributed to

* How many pull requests you have submitted

* How many pull requests have been accepted

To "count beans" of your accomplishments.

##Project overview

To build and run the application, run: `Make`

The **main.cpp** implements the user interface in a command-line menu for adding projects and editing them to count new pull requests that have been submitted or accepted. The data entered is only kept during the current runtime of the application -- there is no persistence.

The **Project** class has the following public interface:

* **Project(string)** - overloaded constructor specifies the name of the project (e.g. "FOSSBeans")

* **submitRequest()** - Increments the tally of requests submitted (but not accepted) for that project

* **acceptRequest()** - Increments the tally of requests accepted for that project, and decrements the requests submitted

* **getRequests()** - Returns the number of pull requests made that are not yet accepted

* **getAcceptedRequests()** - Returns the number of pull requests accepted

* **getName()** - Returns a string of the project's name
