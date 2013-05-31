mvn-nar-test
============

http://blog.bigpixel.ro/2012/07/building-cc-applications-with-maven/

Test building native application with maven and mvn-nar plugin.

Please note, in order to be able to build the application for the first
time, you will NEED  to have the library dependencies in your maven
repository. In order to do this, you will have to run

`mvn install`

or 

`mvn package`

A signal for this not being done would be that the test.h include file is
not found during tbe build process.
