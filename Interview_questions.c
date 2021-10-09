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



