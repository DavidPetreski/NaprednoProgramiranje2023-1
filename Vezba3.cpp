#include <stdio.h>      

#include <time.h>       


int main ()
{
  time_t rawtime;	//Се добива времето во секунди
  struct tm * timeinfo;

  time ( &rawtime );		//Се добива времето во секунди и се зачувува во променливата rawtime
  timeinfo = localtime ( &rawtime );	//Се конвертира времето од секунди во локално време и резултатот се зачувува во променливата timeinfo
  printf ( "The current date/time is: %s", asctime (timeinfo) );	//Со asctime се конвертира локалното време во низа од знаци кои го прикажуваат датумот и времето и ова се печати

  return 0;
}





#include <stdio.h>      

#include <time.h>      


int main ()
{
  time_t rawtime;	//Се дефинира променлива за да се задржи вредноста на времето

  time (&rawtime);	//Се добива времето во секунди и се зачувува во променливата rawtime
  printf ("The current local time is: %s", ctime (&rawtime));	//Се печати времето во читлива форма и се прикажува со printf функцијата

  return 0;
}
