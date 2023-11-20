/*
Program propose : To store and display student's id, name, score, attandances and calculate avarage score.
Programmer      : Vishallan, Khairul, Ikhwan, Iqbal
Date            : 19 nov 2022
*/

#include <iostream>
using namespace std;


//array declaration
	int studentID [50];
	string studentName [50];
	double scores [50];
	int attendance [50];
	int i,x;
	
	//Declare calculateAverageScores() to calculate average score
	double calculateAverageScores(const double scores[], int size) {
    double sum = 0.0;
    
     for (int i = 0; i < 50; i++) {
        sum += scores[i];
    }

    return (size > 0) ? (sum / 50) : 0.0;
} //Vishallan
	
int main(){
	
	//enter numbers into the array
	for (i = 0; i<50; i++)
	{
		cout<<"Enter studentID : ",
		cin>>studentID [i]; //read data into array
		
		cout<<"Enter studentName : ",
		cin>>studentName [i]; //read data into array
		
		cout<<"Enter scores : ",
		cin>>scores [i]; //read data into array
		
		cout<<"Enter attendance : ",
		cin>>attendance [i]; //read data into array
		
	}
	
	
	cout<<"\nList of students:" <<endl;
	
	cout<<"\tstudentID\t\t\tstudentName\t\t\tscores\t\t\tattendance" <<endl;
	
	//print the numbers in the array
	for (x = 0; x<50; x++)
	{
	
	    i=x;
	    cout<<i+1<<".\t"<<studentID[x]<<"\t\t\t\t";
	    cout<<studentName[x]<<"\t\t\t\t";
	    cout<<scores[x]<<"\t\t\t\t";
	    cout<<attendance[x]<< endl;
    }
    
    // Call the function to calculate the average score
    double averageScore = calculateAverageScores(scores, 50);

    // Display the average score
    cout << "\nAverage Score: " << averageScore << endl;

    return 0;
}

