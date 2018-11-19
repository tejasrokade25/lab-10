#include<iostream>
using namespace std;

class ZooAnimal  
   {
      char *name;
      int cageNumber;
      int weightDate;
      int weight;
    public:
      void Destroy ();
	 // destroy function
      char* reptName ();
      int daysSinceLastWeighed (int today);
      void create (char * p,int q,int r,int s);
   };
void ZooAnimal::create(char *p,int c,int wd ,int w)
{
  name=p;
  cageNumber=c;
  weightDate=wd;
  weight=w;
}
 
void ZooAnimal::Destroy ()
   {    
    delete [] name;
   }

   	// function to return the animal's name
   char* ZooAnimal::reptName ()
   {
    return name;
   }
   
  	 // function to return the number of days
   	// the animal was last weighed
  int ZooAnimal::daysSinceLastWeighed (int today)
   {
    int startday, thisday;
    thisday = today/100*30 + today - today/100*100;
    startday = weightDate/100*30 + weightDate - weightDate/100*100;
    if (thisday < startday) 
       { thisday += 360;
    return (thisday-startday);}

    if (today < weightDate) 
       { today += 360;
      return (today-weightDate);}
   }

int main()
{
    ZooAnimal bozo;
    bozo.create ("Bozo", 408, 1027, 400);

    cout << "This animal's name is " << bozo.reptName() << endl;

    	//function not called due to lack of definition
    return 0;
}
