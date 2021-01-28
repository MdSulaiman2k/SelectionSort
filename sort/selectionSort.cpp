#include <iostream>
#include <stdlib.h>
#include<time.h>
using namespace std ;
int Selectionsort(int* arr , int  len)
{
	int times = 0;
     for(int i=0 ; i<len-1 ; i++){
     	++times;
     	for(int j=i+1 ; j<len ; j++){
     		 ++times;
             if(arr[i] > arr[j]){
             	 int a = arr[i] ;
             	 arr[i] = arr[j] ;
             	 arr[j] = a;
             }
     	}
     }
     return times;
}

int Bubblesort(int* arr , int len){
	int  innerloop = 0 ;
	bool check = true ;
	for(int i =0 ; i<len-1 && check ; i++){
		check = false ;
        for(int j = 0 ; j < len-i-1 ; j++){
        	innerloop++;

        	if (arr[j] > arr[j+1])
        	{
        		check =  true;
        		int a = arr[j] ;
        		arr[j] = arr[j+1] ;
        		arr[j+1] = a ; 
        	}
        }
	}
	return innerloop ; 
}

int insertionsort(int* arr , int len){
	int innerloop = 0;
	for(int i = 1 ; i<len ; i++ ){
		char check = true ;
		int a = arr[i-1] ;
		for(int j = i-1 ; j>0 && a  arr[j-1]; j--){
			innerloop++;
			
				int a  = arr[j] ;
			    arr[j] = arr[j-1] ;
			    arr[j-1] = a ;
			}
		}
	return innerloop ;
	}

/*To sort an array of size n in ascending order:
1: Iterate from arr[1] to arr[n] over the array.
2: Compare the current element (key) to its predecessor.
3: If the key element is smaller than its predecessor, compare it to the elements before. Move the greater elements one position up to make space for the swapped element.
*/

	/*void insertionSort(int arr[], int n)  
{  
    int i, key, j;  
    for (i = 1; i < n; i++) 
    {  
        key = arr[i];  
        j = i - 1;  
  
         Move elements of arr[0..i-1], that are  
        greater than key, to one position ahead  
        of their current position 
        while (j >= 0 && arr[j] > key) 
        {  
            arr[j + 1] = arr[j];  
            j = j - 1;  
        }  
        arr[j + 1] = key;  
    }  
}  
*/
int main()
{
   srand(time(0));
   int arr[10] ;
    for(int i= 0 ; i<10 ; i++){
   	   arr[i] = rand()%10;
   }
   cout<<endl;
   for(int i=0 ; i<10 ; i++){
   	cout<<arr[i]<<"\t";
   }
   cout<<"\nhow many times looped Selectionsort : "<<Selectionsort(arr,10)<<endl<<endl;
   for(int i=0 ; i<10 ; i++){
   	cout<<arr[i]<<"\t";
   }
   cout<<"\n\n";
   for(int i= 0 ; i<10 ; i++){
   	   arr[i] = rand()%10;
   }
   for(int i=0 ; i<10 ; i++){
   	cout<<arr[i]<<"\t";
   }
   cout<<endl<<endl;
   cout<<"\n"<<"how many times looped Bubblesort : "<<insertionsort(arr,10)<<endl;
   
   for(int i=0 ; i<10 ; i++){
   	cout<<arr[i]<<"\t";
   }


}
