#include<iostream>
#include<vector>
using namespace std;

int n, m;
vector<int> parent;

int getParent(vector<int> &parent, int x){
	if(parent[x] == x){
		return x;
	}else{
		return parent[x] = getParent(parent, parent[x]);
	}
}

int unionParent(vector<int> &parent, int a, int b){
	a = getParent(parent, a);
	b = getParent(parent, b);
	
	if(a < b){
		return parent[b] = a;
	}else{
		return parent[a] = b;
	}
}

void findParent(vector<int> &parent, int a, int b){
	a = getParent(parent, a);
	b = getParent(parent, b);
	
	if(a == b){
		cout<<"YES"<<'\n';	
	}else{
		cout<<"NO"<<'\n';
	}
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	cin>>n>>m;
	
	parent.resize(n+1);
	
	for(int i = 0 ; i <= n ; i++){
		parent[i] = i;
	}
	
	for(int i = 0 ; i < m ; i++){
		int command, a, b;
		cin>>command>>a>>b;
		
		if(command == 0){
			unionParent(parent, a, b);
		}else{
			findParent(parent, a, b);
		}
	}
	
}
