mvn-nar-test
============

http://blog.bigpixel.ro/2012/07/building-cc-applications-with-maven/

Test code for building native application with maven and the mvn-nar plugin.

Download NAR plugin
-------------------
In order to be able to build the application for the first time,
you will NEED to have the library dependencies in your maven
repository. Run `mvn install` to do this.

Failure to download the dependencies can result in the test.h include
file not being found during tbe build process.

Build and test
--------------
Run `mvn test` to build and run the test application. The application should
output `hello world 11` on success.
