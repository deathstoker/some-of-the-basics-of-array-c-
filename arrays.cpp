#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int n;
	cout<<"enter the size of the array:-"<<endl;
	cin>>n;
	int array[n];
	int i;
	cout<<"enter the values in your array:-"<<endl;
	for(i=0;i<n;i++)
	{
		cin>>array[i];
	}
	cout<<"your array is given below:-"<<endl;
	for(i=0;i<n;i++)
	{
		cout<<array[i]<<" ";
	}
	cout<<endl;
	int sum=0;
	for(i=0;i<n;i++)
	{
		sum=sum+array[i];
	}
	cout<<"the sum of all the element of your array is :  "<<sum<<endl;
	//now which is the largest element in the array ----------
	int max = array[0];
	for(i=1;i<n;i++)
	{
		if(max < array[i])
		{
		  	max = array[i];
		}
		
	}
	cout<<"the largest number in the array is :  "<<max;
	
	
	
	
	
	
	
	
	return 0;
}
