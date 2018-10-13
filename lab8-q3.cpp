#include<iostream>
using namespace std;
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
				B[j-1]=temp;// current term is now stored in temp therfore the previous term is given this value
			}
		}
	}
}
void klarge(int C[20],int L,int r)//function to prit the kth largest term 
{
	cout<<"\n the "<<r<<"th largest term is:"<<C[L-r];//when it is arranged the largest term will be stored at position l-1 where l is the length of the array	
}
void kleast(int C[20],int L,int r)//function to print the k th smallest term
{	
	cout<<"\n the "<<r<<"th lowest term is:"<<C[r-1];//when it is arranged the smallest term will be on the zeroth position therfore the kth samallest is at k-1th position	
}
int main()
{
	int A[20],k,l,i;
	cout<<"The number of elements in the array: ";
	cin>>l;
	cout<<"Enter the elements of whose mean median mode etc has to be finded"<<endl;
	/*instruction to the user to input the elements of the array*/
	for(i=0;i<l;i++)/*loop acessing each position of the array*/
    {
		cout<<"element in position "<<i+1<<" is:";
		cin>>A[i];/*storing value in each position*/
	}
	cout<<"if you want kth largest term and kth lowest term input value k:";
	cin>>k;
	arrange(A,l);
	klarge(A,l,k);
	kleast(A,l,k);
	return 0;
}
