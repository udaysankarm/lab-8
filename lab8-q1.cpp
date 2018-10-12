#include<iostream> //includeing the library
using namespace std;//using standard namespace 
int fun(int B[10])//a function to find the sum of the elements of the array
{
	int s=0;//initilising the variable s
	for(int i=0;i<10;i++)//loop to find the sum of the elemnts of the array
	s=s+B[i];//adding each element to s consecutievely
	return s;//retruning the sum
}

int main()//main function
{
	int A[10]={1,2,3,4,5,6,7,8,9,0};//declaring a variable i and an integer array
	cout<<"sum of all the elements of the Array is:"<<fun(A)<<endl;/*calling the function and 		outputting the retrun value*/
	return 0;
}
