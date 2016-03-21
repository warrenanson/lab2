#include "lab2.h"

void BMI::setHeight(int h)
{
	Height = h;
}
void BMI::setWeight(int m)
{
	Weight = m;
}
float BMI::getHeight()
{
	return Height; 
}
float BMI::getWeight()
{
	return Weight;
}
float BMI::setBMI()
{
	return (float) Weight/(Height*0.01*Height*0.01);
	
}
string BMI::getcategory()
{
	if(setBMI()<15)
		return "Very severely underweight";
	else if(setBMI()>15&&setBMI()<16)
		return "Severely underweight";
	else if(setBMI()>16&&setBMI()<18.5)
		return "Underweight";
	else if(setBMI()>18.5&&setBMI()<25)
		return "Normal";
	else if(setBMI()>25&&setBMI()<30)
		return "Overweight";
	else if(setBMI()>30&&setBMI()<35)
		return "Obese Class I (Moderately obese)";
	else if(setBMI()>35&&setBMI()<40)
		return "Obese Class II (Severely obese)";
	else if(setBMI()>=40)
		return "Obese Class III (Very severely obese)";
}
