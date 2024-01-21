#include <bits/stdc++.h>


int findDuplicate(vector<int> &arr, int n){
	// Write your code here.
 unordered_map<int,int>freq;
 for(int i = 0; i<n; i++){
	 freq[arr[i]]++;
 }
 for(int i = 0 ; i < n; i++){
	 if(freq[i]>1){
		 return i;
	 }
 }

}
