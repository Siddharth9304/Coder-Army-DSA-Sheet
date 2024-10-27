//Dificulty Level - Basic
//Problem Statement:
//Given an array, arr of n integers, and an integer element x, find whether element x is present in the array. Return the index of the first occurrence of x in the array, or -1 if it doesn't exist.

//Expected Time Complexity: O(n).
//Expected Auxiliary Space: O(1). 

//Approach:
//Linear Search - Array is not sorted so what we can do, just iterate one by one to each element, if element found, just return the index else return -1. 

int search(int arr[], int n, int x) {
    //iterating array from 0 to n-1 (array indexing starts from 0 and go upto array_size-1)
    for(int i=0; i<arr.size(); i++)
        if(arr[i]==x)   //checking whether elemetn at index i is equals to x or not
            return i;   // returning index if element at index i is equals to x
    return -1;          // returning -1 after checking all the elements in an array
}

//Time Complexity - O(n), as iterating all the elements one by one
//Auxiliary Space - O(1),  as using only a constant amount of extra space(for variable i) regardless of the input size
//Total Space Complexity - O(n),  Tot S.C -> Auxiliary Space + input size
