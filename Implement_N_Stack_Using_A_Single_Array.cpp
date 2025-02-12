#include <bits/stdc++.h> 
class NStack
{
    int *arr;
    int *top;
    int *next;
    
    int n,s;
    int free;
    
    
public:
    
    NStack(int N, int S)
    {
        n = N;
        s = S;
        arr = new int[s];
        top = new int[n];
        next = new int[s];
        
        for(int i=0; i<n; i++){
            top[i]=-1;
        }
        
        for(int i=0; i<s; i++){
            next[i]=i+1;
        }
        next[s-1]=-1;
        
        free = 0;
    }

 
    bool push(int x, int m)
    {
        // Write your code here.
        
        if(free==-1){
           return false;
        }
        
        int index = free;
        arr[index] = x;
        free = next[index];
        next[index]=top[m-1];// last top element
        top[m-1]=index;//index of the top
        
        return true;
    }

   
    int pop(int m)
    {
        
        
        if(top[m-1]==-1){
            return -1;
        }
        
        int index = top[m-1];
        top[m-1]=next[index];
        next[index]=free;
        free=index;
        return arr[index];
    }
};
