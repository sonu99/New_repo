Remove duplicate from array
Sorted aaray:
https://www.google.com/amp/s/www.geeksforgeeks.org/remove-duplicates-sorted-array/amp/

// Simple C++ program to remove duplicates
#include<iostream>

using namespace std;
 
// Function to remove duplicate elements
// This function returns new size of modified
// array.

int removeDuplicates(int arr[], int n)
{

    // Return, if array is empty

    // or contains a single element

    if (n==0 || n==1)

        return n;
 

    int temp[n];
 

    // Start traversing elements

    int j = 0;

    for (int i=0; i<n-1; i++)
 

        // If current element is not equal

        // to next element then store that

        // current element

        if (arr[i] != arr[i+1])

            temp[j++] = arr[i];
 

    // Store the last element as whether

    // it is unique or repeated, it hasn't

    // stored previously

    temp[j++] = arr[n-1];
 

    // Modify original array

    for (int i=0; i<j; i++)

        arr[i] = temp[i];
 

    return j;
}
 
// Driver code

int main()
{

    int arr[] = {1, 2, 2, 3, 4, 4, 4, 5, 5};

    int n = sizeof(arr) / sizeof(arr[0]);
 

    // removeDuplicates() returns new size of

    // array.

    n = removeDuplicates(arr, n);
 

    // Print updated array

    for (int i=0; i<n; i++)

       cout << arr[i] << " ";
 

    return 0;
}

Non-sorted array:
https://www.google.com/amp/s/www.geeksforgeeks.org/remove-duplicates-from-unsorted-array-using-map-data-structure/amp/

Own string copy:
https://www.google.com/amp/s/www.geeksforgeeks.org/c-program-copy-string-without-using-strcpy-function/amp/


// CPP program to copy one string to other 
// without using in-built function 

  
#include <stdio.h> 

int main() 
{ 

    // s1 is the source( input) string and s2 is the destination string 

    char s1[] = "GeeksforGeeks", s2[100], i; 

  

    // Print the string s1 

    printf("string s1 : %s\n", s1); 

  

    // Execute loop till null found 

    for (i = 0; s1[i] != '\0'; ++i) { 

        // copying the characters by 

        // character to str2 from str1 

        s2[i] = s1[i]; 

    } 

  

    s2[i] = '\0'; 

  

    // printing the destination string 

    printf("String s2 : %s", s2); 

  

    return 0; 
} 

Size of structur with sizeof:

https://www.javatpoint.com/structure-padding-in-c

#include<stdio.h>
struct example{
   char a;
   short int b;

};

int main()
{
    
    struct example *obj = NULL;
    obj++;
    printf("size of:%d", obj);
    return 0;
}

Intesecting link list
  5->6->
		      |
0->1->2->3->4->5->6


	while(node_1)
	{
		while(node_2)
		{
			if (node1 == node2)
			{
			return node_1;
			}
			node2= node2->next;
			
			
		}
		node1= node1->next;
	}

Bit wise oprator:

Check set bit in data

n_set_Bit(int data, int bit)
{
   int i, cnt=0;
   for(i=0;i<31;i++)
   {
       if((data>>i)&1)
	      {
	         cnt++;
	      }
   }
   
 }

Volatile keyword in C:

https://www.educba.com/volatile-in-c/

Linux and Device Driver:
========================
1> Ioctl 
2> I/o mapped and Memory mapped
3> Mutext, semaphore and spin lock.
4> Usersapce and kernel space difference.
5> Char driver call flow (application to driver)










Hardware:
=========
1> Timer and Counter

C Programming:
==============
1> Structure and union difference





//1- 15
  


#if 0
// Initial Candidate approach
O(n2)
  
count(9) - 1
count (10-99) - 21
  
tabulation in recursion using
int count_digit(int digit, int range)
{
  //Write an algorithm for counting the number of digits
  int data=0;
  int r=1;
  for(data; data<=range; data++)
  {
    if(rage  r)
      r=r*10;
		int test= (data/r);
    if(test == digit)
    	count++
    data++
	}
  
}

#if 0
int main()
{
  int digit = 1, range = 15;
  
  count_digit(digit, range);
}
#endif

!(n & (n - 1))

int pow_num(int num, int power)
{
	return ((num % (power-1) == 1) && (!n & (n - 1));
}

int main()
{
  int count = 0;

  int num = 64, power = 4;
  count = pow_num(num, power);
}
#endif


XOR 
    
 1) sorting - O(logn)
    comparison = O(n)
  int arr[] = {6, 6, 8, 8, 9};



==================================================
Nvidia:
https://www.geeksforgeeks.org/next-higher-number-with-same-number-of-set-bits/
	
>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
intel interview:
>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
	
char a=5;
const char *ptr =&a;
a++
char b=6;
char const *ptr2=&b
ptr=&a;

int a[10]={};

>>>>>>>>>>>>>>>>>>>
Add link list add:
>>>>>>>>>>>>>>>>>>>
	
struct student{
int roll_n;
char name[30];
NODE *next;
};

addNode(NODE * new_node)
{
	print("Enter roll number);
	scanf("%d",new_node->roll_n);
	print("Enter name);
	scanf("%s",new_node->name);
	
}
main()
{
   struct student *head=NULL;
   head = (struct student*)malloc(sizeof(struct student);
   struct student *new_node=NULL;
   new_node = (struct student*)malloc(sizeof(struct student);
   
   new_node =head;
   
		
}
