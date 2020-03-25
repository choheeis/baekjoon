#include<iostream>
#include<vector>
using namespace std;

int gcd(int a, int b){
	while(b > 0){
		int tmp = a;
		a = b;
		b = tmp%b;
	}
	return a;
}

int main(){
	int T;
	cin>>T;
	
	for(int i = 0 ; i < T ; i++){
		int n;
		cin>>n;
		
		vector<int> vec;
		for(int j = 0 ; j < n; j++){
			int tmp;
			cin>>tmp;
			vec.push_back(tmp);
		}
		
		long long sum = 0;
		for(int j = 0 ; j < n - 1 ; j++){
			for(int h = j+1 ; h < n ; h++){
				sum += gcd(vec[j], vec[h]);
			}
		}

		cout<<sum<<'\n';
		
	}
}
