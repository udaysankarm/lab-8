#include<iostream>
using namespace std;

void les(int B[20],int L)//function to find minimum
{
	int k,j,min=B[0];/*declaring variables k,j are used to acess the array where min stores    the minimum or the supposed minimum of the array */
/*initially the first number is considered to be minimum then the next number is compared with this if this is less than the first number the minimum is replaced by this number then it goes on comparing the numbers on eafter another  */
	for(k=2;k<=L;k++)//lopp to restrict the comaprison to 2 adjacent numbers
	{
		for(j=k-2;j<k;j++)//loop that takes 2 adjacent numbers and compares them
		{
			if(B[j]<min) /*checcking whether the number is less than the supposed minimum */
                         min=B[j];///taking this number as the next supposed minimum
		}
	}
	cout<<min<<endl;//printing the minimum 
	
}
void larg(int C[20],int L)//function to find maximum
{
	int k,j,max=C[0];/*declaring variables k,j are used to acess the array where max stores    the maximum or the supposed maximum of the array */
/*initially the first number is considered to be maximum then the next number is compared with this if this is greater  than the first number the maximum is replaced by this number then it goes on comparing the numbers one after another  */
	for(k=2;k<=L;k++)//lopp to restrict the comaprison to 2 adjacent numbers
	{
		for(j=k-2;j<k;j++)//loop that takes 2 adjacent numbers and compares them over and over again
		{
			if(C[j]>max)//checking whether the number is greater then the supposed maximum
			max=C[j];//taking this number as the next supposed maximum
		}
	}
	cout<<max<<endl;//printing the minimum after every number is compared
	
}
void avg(int B[20],int L)//function to find the average
{
	int i;	//integer used to go through the loop
	float s;//variable to store the sum
	for(i=0;i<L;i++)//loop to access each and every memmory location in the loop
	s=s+B[i];//adding each element to the sum
	cout<<s/L;//printing the value of mean which is sum by number of elements

}
int arrange(int B[20],int L)//array used for arranging the string 
{
	int i,j,temp;//declaring the variables i,j and temp which stores the values of some elements of the array
	for(i=0;i<L;i++)//primary for loop to repeate the comparison in the below loop l times
        {
		for(j=1;j<L-i;j++)//loop to swap the elements of the array if the previous one is less greater than the next one
		{
			if(B[j-1]>B[j])//condition to check whether the current on eis greater than the next one
			{
				temp=B[j];//assingning the value in the next position to temp to prevent the loss that variable
				B[j]=B[j-1];//sawaping the variables
				B[j-1]=temp;
			}
               	
		}
	}
}


int main()
{
	int A[20],l,i,p;/*declaring the array a variable to store the lenth of the array and a 		variable to access each variable of the array*/
	cout<<"how many elements are you going to input (less than 20)"<<endl;
	cin>>l;//storing the length of the array
	cout<<"Enter the elements of whose mean median mode etc has to be finded"<<endl;
	/*instruction to the user to input the elements of the array*/
	for(i=0;i<l;i++)/*loop acessing each position of the array*/
        {
		cout<<"element in position "<<i+1<<" is:";
		cin>>A[i];/*storing value in each position*/
	}
	
	cout<<"\nlargest element is:";
	larg(A,l);//calling the function to find maximum
        cout<<"\nsmallest lement is:";
	les(A,l);//calling the function to find minimum
	cout<<"\nthe mean of the array is :";
        avg(A,l);//calling the function to find mean
	cout<<"\nmedian of the array is :";
	p=l/2;
	arrange(A,l);
         //median is the middle term when the elements are arranged in ascending or descending order
 	if(l%2==1)
        cout<<A[p+1];//if p is odd then the middle term is the median 
        else
        cout<<(float)(A[p]+A[p+1])/2;//  if p is even then the median is the average of the 2   	middle terms
	return 0;

}
