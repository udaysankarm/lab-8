#include<iostream>
using namespace std;
void merge(int P[],int Q[],int R[],int l1,int l2)//function to combine the arrays
{
	int a;//a is loop control variable which is used to acess each position inside the ARRAY
	for(a=0;a<l1;a++)//LOOP TO ACCESS THE EACH AND EVERY POSITION IN THE FIRST ARRAY AND ASSSINGNF IT TO POSITION IN THE COMBINED ARRAY
	R[a]=P[a];//ASSINGING VALUE OF THE ITH POSITION OF THE FIRST ARRAY TO THE NEW COMBINED ARRAY 
	for(a=0;a<l2;a++)//LOOP TO ACCESS THE EACH AND EVERY POSITION IN THE SECOND ARRAY AND ASSSINGNF IT TO POSITION IN THE COMBINED ARRAY
	R[a+l1]=Q[a];//ASSINGING VALUE OF THE ITH POSITION OF THE SECOND ARRAY TO THE NEW COMBINED ARRAY
}
void max(int D[],int z)//FUNCTION TO FIND THE MAXIMUM VALUE COMBINED ARRAY
{
	int m=D[0];//INTIALLY TH FIRST ELEMENT ISS TAKEN AS MAXIMUM
	for(int j=1;j<z;j++)//LOOP GOING THROUGH EACH VARIABLE 
	if(D[j]>m)//IF THE CURRENT ELEMENT IS GREATER THAN THE ASSUMED MAXIMUM
	{
		m=D[j];//THEN THE THIS ELEMENT IS TAKEN AS THE NEW MAXIMUM
	}
	cout<<"\n the maximum number in the combined string is :"<<m;//PRINTING THIS MAXIMUM ELEMENT
}
void min(int D[],int z)//FUNCTION TO FIND THE MINIMUM VALUE IN THE COMBINED ARRAY
{
	int m=D[0];//INTIALLY THE FIRST ELEMENT IS TAKEN AS MINIMUM
	for(int j=1;j<z;j++)//LOOP GOING THROUGH EACH AVRIABLE 
	if(D[j]<m)//IF THE CURRENT ELEMENT IS LESS THAN THE ASSUMED MINIMUM
	{
		m=D[j];//THEN THE THIS ELEMENT IS TAKEN AS THE NEW MINIMUM
	}
	cout<<"\n the minimum number in the combined string is :"<<m;//PRINTING THIS MAXIMUM ELEMENT
}
int main()
{
	int A[20],B[20],C[40],k,la,lb,i;
	cout<<"The number of elements in the first array: ";
	cin>>la;
	cout<<"Enter the elements"<<endl;
	/*instruction to the user to input the elements of the array*/
	for(i=0;i<la;i++)/*loop acessing each position of the array*/
    {
		cout<<"element in position "<<i+1<<" is:";
		cin>>A[i];/*storing value in each position*/
	}
	cout<<"The number of elements in the second array: ";
	cin>>lb;
	cout<<"Enter the elements"<<endl;
	/*instruction to the user to input the elements of the array*/
	for(i=0;i<lb;i++)/*loop acessing each position of the array*/
    {
		cout<<"element in position "<<i+1<<" is:";
		cin>>B[i];/*storing value in each position*/
	}
	merge(A,B,C,la,lb);//function call to merge the arrays
	cout<<"\nThe combined array is :";
	for(i=0;i<la+lb;i++)
	cout<<" "<<C[i];
	max(C,la+lb);//function call to print the maximum of the combined array
	min(C,la+lb);//function call to print the minimum of the combined array
	return 0;
}
