#include <fstream>
#include "lab2.h"

int main()
{
	float h,m;
	ifstream infile("file.in",ios::in);
	BMI bmi;
	ofstream outfile("file.out",ios::out);

	while(infile>>h>>m)
	{
		if(h==0&&m==0)
			break;

		bmi.setHeight(h);
		bmi.setWeight(m);
		bmi.getHeight();
		bmi.getWeight();
		bmi.setBMI();
		bmi.getcategory();
		outfile<<bmi.setBMI()<<"\t"<<bmi.getcategory()<<endl;
	}
	
	return 0;
}
