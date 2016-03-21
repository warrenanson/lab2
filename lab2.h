#include<iostream>
#include<string>
using namespace std;

class BMI
{
   public:
	void setHeight(int h);
	void setWeight(int m);
	float getHeight();
	float getWeight();
	float setBMI();
	string getcategory();

   private:
	float Height,Weight;
};
