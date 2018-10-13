#include<iostream>
using namespace std;

int les(int B[20],int L)//function to find minimum
{	int k,j,min=B[0],p=0;/*declaring variables k,j are used to acess the array where min stores    the mainimum or the supposed minimumof the array p stores the position of the minimum or the supposed minimum*/
/*initially the first number is considered to be maximum then the next number is compared with this if this is greater  than the first number the maximum is replaced by this number then it goes on comparing the numbers one after another  */
	for(k=2;k<=L;k++)//lopp to restrict the comaprison to 2 adjacent numbers
	{
		for(j=k-2;j<k;j++)//loop that takes 2 adjacent numbers and compares them over and over again
		{
			if(B[j]<min)//checking whether the number is less then the supposed minimum
        	{
        		min=B[j];//taking this number as the next supposed maximum
        		p=j;//assinging this variable position to p 
            }
		}
	}
    return p;//returning the value of position in which the least element is present
}
int larg(int C[20],int L)//function to find maximum
{
	int k,j,max=C[0],p=0;/*declaring variables k,j are used to acess the array where max stores    the maximum or the supposed maximum of the array, p to store the minimum position */
/*initially the first number is considered to be maximum then the next number is compared with this if this is greater  than the first number the maximum is replaced by this number then it goes on comparing the numbers one after another  */
	for(k=2;k<=L;k++)//lopp to restrict the comaprison to 2 adjacent numbers
	{  
		for(j=k-2;j<k;j++)//loop that takes 2 adjacent numbers and compares them over and over again
		{
			if(C[j]>max)//checking whether the number is greater then the supposed maximum
        	{
        		max=C[j];//taking this number as the next supposed maximum
        		p=j;//assining this positioin to p which is the position of the supposed least element
            }
		}
	}
    return p;//returning the value of the least element to main fuction
}
void avg(int B[20],int L)//function to find the average
{
	int i;	//integer used to go through the loop
	float s;//variable to store the sum
	for(i=0;i<L;i++)//loop to access each and every memmory location in the loop
	s=s+B[i];//adding each element to the sum
	cout<<s/L;//printing the value of mean which is sum by number of elements
}
void arrange(int B[20],int L)//array used for arranging the string 
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
int freq(int Z[],int L)//function to find the number with higest frequency
{
	int i,j,m,M[L-1],s;//declaring variables for controlling the loop an array to store the frequency of each term 
	/* here m is of size l-1 because the last terms of the array Z is not compared with any elements therefore there is no need of storing any element in this position */
	for(i=0;i<L;i++)//loop to take the term wich is compared with the other terms
	{
		m=0;//m is frequncy of each term
		for(j=i+1;j<L;j++)//loop used compare each term with other terms in the array
		{
			if(Z[i]==Z[j])//checking whether the two terms are equal or not 
			m++;//if they are equal is incremented 
		}
		M[i]=m;	//m is frequency of each element this i assingned to the i th position of the array M
	}
	s=larg(M,L-1);// s stores the position of the largest element in M ie the position of the element with highest frequency
	return Z[s];//retruning the value of the term with highest frequency
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
	cout<<"\nlargest element is:"<<	A[larg(A,l)];//calling the function to find maximum
    cout<<"\nsmallest lement is:"<<A[les(A,l)];//calling the function to find minimum and printing the elemnt at the position returned by the function
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
	cout<<"\nThe element which repeates the most number of times is :"<<freq(A,l);//calling the function to find the number with hgest frequency
	return 0;
}



