// name : Donal howe 
//31/03/2023
// license : GNU LICENSE 3.0


/* Barrier.h --- Barrier.h
 * 
 * Filename: Barrier.h
 * Description: 
 
 * 
 * 
/* Code: */



#pragma once 

class Barrier{
  int numberOfThreads;
 public:
  Barrier(int numThreads);

  virtual ~Barrier(){};
  void wait(); 
};


/* Barrier.h ends here */
