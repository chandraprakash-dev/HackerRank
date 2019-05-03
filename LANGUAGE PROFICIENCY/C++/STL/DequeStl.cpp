#include <iostream>
#include <deque> 
using namespace std;

void printKMax(int arr[], int n, int k){
	deque<int> d;
    for(int i=0;i<k;i++)
    {
        while(!d.empty() && arr[i]>=arr[d.back()]){
            d.pop_back();
        }
        d.push_back(i);
    }
    for(int i=k;i<n;i++)
    {
        cout<<arr[d[0]]<<" ";
        while(!d.empty() && d[0]<=i-k)
        {
            d.pop_front();
        }
        while(!d.empty() && arr[i]>=arr[d.back()])
        {
            d.pop_back();
        }
        d.push_back(i);
    }
    cout<<arr[d[0]]<<" \n";
}

int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(0);
	int t;
	cin >> t;
	while(t>0) {
		int n,k;
    	cin >> n >> k;
    	int i;
    	int arr[n];
    	for(i=0;i<n;i++)
      		cin >> arr[i];
    	printKMax(arr, n, k);
    	t--;
  	}
  	return 0;
}
