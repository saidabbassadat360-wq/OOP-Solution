#include <iostream>
using namespace std;

class Student {
	float g1, g2, g3, g4, g5;
	
	public:
		void getGPA (float s1, float s2, float s3, float s4, float s5)
		{
			cout <<"Enter the 1st paper GPA : ";
			cin >> s1;
			cout <<"Enter the 2nd paper GPA : ";
			cin >> s2;
			cout <<"Enter the 3rd paper GPA : ";
			cin >> s3;
			cout <<"Enter the 4th paper GPA : ";
			cin >> s4;
			cout <<"Enter the 5th paper GPA : ";
			cin >> s5;
			
			this->g1 = s1;
			this->g2 = s2;
			this->g3 = s3;
			this->g4 = s4;
			this->g5 = s5;
		}

		void calculateGPA ()
		{
			float result = (g1+g2+g3+g4+g5)/5;
			cout <<endl;
			cout <<"Your GPA average of 5 papers is : "<<result <<endl;
		}
};

class DataScience : public Student
{
	float g1, g2, g3, g4, g5, g6, g7, g8;
	public:
		using Student :: getGPA;
		
		void getGPA (float s1, float s2, float s3, float s4, float s5, float s6, float s7, float s8)
		{
			cout <<"Enter the 1st paper GPA : ";
			cin >> s1;
			cout <<"Enter the 2nd paper GPA : ";
			cin >> s2;
			cout <<"Enter the 3rd paper GPA : ";
			cin >> s3;
			cout <<"Enter the 4th paper GPA : ";
			cin >> s4;
			cout <<"Enter the 5th paper GPA : ";
			cin >> s5;
			cout <<"Enter the 6th paper GPA : ";
			cin >> s6;
			cout <<"Enter the 7th paper GPA : ";
			cin >> s7;
			cout <<"Enter the 8th paper GPA : ";
			cin >> s8;

			this->g1 = s1;
			this->g2 = s2;
			this->g3 = s3;
			this->g4 = s4;
			this->g5 = s5;
			this->g6 = s6;
			this->g7 = s7;
			this->g8 = s8;
		}
		
		void calculateGPA ()
		{
			float result = (g1+g2+g3+g4+g5+g6+g7+g8)/8;
			cout <<endl;
			cout <<"Your GPA average of 8 papers is : "<<result <<endl;
		}
};

int main ()
{
	DataScience S1;
	int choice;
	float a, b, c, d, e, f, g, h;
	cout <<"GPA average of 5 and 8 papers.........!"<<endl;
	cout <<endl;
	cout <<"Enter 5 for 5 pepers "<<endl;
	cout <<"Enter 8 for 8 papers "<<endl;
	cout <<"Enter your choice ------>  ";
	cin >> choice;
	cout <<endl;
	
	if (choice == 5)
	{
		S1.getGPA (a, b, c, d, e);
		S1.Student :: calculateGPA();
	}
	else if (choice == 8)
	{
		S1.getGPA(a, b, c, d, e, f, g, h);
		S1.DataScience :: calculateGPA();
	}
	else 
	{
		cout <<"Invalid Choice !!!"<<endl;
	}
	
}