#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int n1,n2,i;
	cout<<"enter the no. of elements in the array_1 : "<<endl;
	cin>>n1;
	int arr_1[n1];
	cout<<"enter the "<<n1<<"elements in your array_1 : "<<endl;
	for(i=0;i<n1;i++)
	{
		cin>>arr_1[i];
	}
	cout<<"the elements in array_1 are : "<<endl;

	for(i=0;i<n1;i++)
	{
		cout<<arr_1[i];
	}
	cout<<endl;
	
	
	cout<<"enter the no. of elements in the array_2 : "<<endl;
	cin>>n2;
	int arr_2[n2];
	cout<<"enter the "<<n2<<"elements in your array_1 : "<<endl;

	for(i=0;i<n2;i++)
	{
		cin>>arr_2[i];
	}
	cout<<"the elements in array_2 are : "<<endl;
	for(i=0;i<n2;i++)
	{
		cout<<arr_2[i];
	}
	cout<<endl;
	
	int merged_array[n1+n2];
	for(i=0;i<n1;i++)
	{
		merged_array[i]=arr_1[i];
	}
	
	cout<<"your elements of array_1 got merged in another array : "<<endl;
	for(i=0;i<n1+n2;i++)
	{
		cout<<merged_array[i];
	}
	cout<<endl;
	
	for(i=0;i<n1+n2;i++)
	{
		merged_array[n1+i]=arr_2[i];
	}
	cout<<"here are all the elements of merged array : "<<endl;
	for(i=0;i<n1+n2;i++)
	{
		cout<<merged_array[i];
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
