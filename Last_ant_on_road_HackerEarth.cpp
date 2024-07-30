#include <iostream>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int arr[n];
		for(int i=0;i<n;i++)
		cin>>arr[i];
		int cn=0;
		int cp=0;
		for(int i=0;i<n;i++)
		{
			if(arr[i]<0)cn++;
			else cp++;
		}
		if(cp>cn) cout<<cn+1<<endl;
		else cout<<cn<<endl;
	}
	return 0;
}