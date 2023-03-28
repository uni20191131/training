#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <string.h>

using namespace std;
vector<pair<int, int>> v;
int n,x,y;
int arr[10001000]={0,};
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int i=0;
	int j=666;
	string c;
	cin>>n;
	while(1){
		c =to_string(j);
	
		int l=c.length();

		for(int k=0;k<l-2;k++){
			if(c[k]=='6' && c[k+1]=='6' && c[k+2]=='6'){
				arr[i]=j;
				cout<<"i: "<<i<<" "<<n<<endl;
				i++;
				
					if(i==n){
						break;
					}		

			}	
		}
		j++;
		
	}
	
	


	cout<<arr[n-1];
	
	

	return 0;



}