#include <iostream>

using namespace std;

enum scale {ounces, kilograms};

   class ZooAnimal  
   {
    private:
      char *name;
      int cageNumber;
      int weightDate;
      int weight;
    public:
      void Create (char*, int, int, int);
	 // creating
      void Destroy ();
	 // destroying 
      void changeWeight (int pounds);
      inline void changeWeightDate (int today) 
      {
          weightDate = today;
      }
      char* reptName ();
      int reptWeight ();
      void reptWeight (scale which);
      int reptWeightDate ();
      int daysSinceLastWeighed (int today);
   };

	// function
void ZooAnimal::Create (char* a, int b, int c, int d)
{
    name=a;
    cageNumber=b;
    weightDate=c;
    weight=d;
}
inline int ZooAnimal::reptWeightDate ()
{
    return weightDate;
}


int main()
{
    ZooAnimal bozo;
    bozo.Create ("Bozo", 408, 1027, 400);
    bozo.changeWeightDate(256);

    cout << "The day the animal was last weighed " << bozo.reptWeightDate() << endl;
    return 0;
}

