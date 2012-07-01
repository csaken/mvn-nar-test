#include <stdio.h>

#include <test.h>

extern int function(int p);

int main(int argc, char** argv)
{
  printf("hello world %d\n", function(10));
}