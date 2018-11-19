#include<iostream>
using namespace std;

class ZooAnimal  
   {
    private:
      char *name;
      int cageNumber;
      int weightDate;
      int weight;
      ZooAnimal *mother;
    public:
      void Create (char*, int, int, int); 
	// creating
      void Destroy ();
	 // destroying 
      void isMotherOf ();
      void changeWeight (int pounds);
      void changeWeightDate (int today);
      char* reptName ();
      int reptWeight ();
      inline int reptWeightDate () {return weightDate;};
      int daysSinceLastWeighed (int today);
   };

void ZooAnimal::isMotherOf ()
{
   mother = this;
}
void ZooAnimal::Create (char* a, int b, int c, int d)
{
    name=a;
    cageNumber=b;
    weightDate=c;
    weight=d;
}

int main()
{
    ZooAnimal bozo;
    bozo.Create ("Bozo", 408, 1027, 400);
    bozo.isMotherOf ();
    cout << "The day the animal was last weighed " << bozo.reptWeightDate() << endl;
    return 0;
}
