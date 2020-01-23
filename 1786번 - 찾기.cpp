#include<iostream>
#include<vector>
#include<string>
#include<stdio.h>
using namespace std;

int count;
vector<int> findedIndex;

/* ������ ���λ�, ���̻� ��ġ ����� ���� ����� �迭 ����� �Լ� */
vector<int> makeResultArray(string pattern){
	int patternSize = pattern.size(); // ���� ���ڿ��� ���� 
	
	// �迭�� ũ�Ⱑ ���� ���ڿ��� ���̿� ����, �迭�� ��� ���Ұ� 0���� �ʱ�ȭ�� vector ���� 
	vector<int> resultArray(patternSize, 0);  
	
	int j = 0; 
	for(int i = 1 ; i < patternSize ; i++){
		
		// i �Ʒ� ���ڿ� j �Ʒ� ���ڰ� ��ġ���� ���� ��� ����Ǵ� �κ�
		// �� ���ڰ� �ٸ� ��� j �� �ڷ� �̵���Ű�� �ٽ� �ѹ� j�� i �Ʒ��� �ִ� ���ڸ� ���ϱ� ������ while�� ���  
		while(j > 0 && pattern[i] != pattern[j]){
			j = resultArray[j-1];
			
		}
		
		// i �Ʒ� ���ڿ� j �Ʒ� ���ڰ� ��ġ�ϴ� ��� 
		if(pattern[i] == pattern[j]){ 
			resultArray[i] = ++j; // ���� j�� ����Ű�� ������ �ε����� 1�� ����  
			//j = j + 1; // j �� i�� �Բ� ����������  
		}
	
	}
	return resultArray; 
}

/* KMP �˰��� */
// --> parent ���ڿ��� �ε��� i�� 1�� ������Ű�鼭 pattern ���ڿ��� �ε��� j�� �ش��ϴ� ���ڿ� ���Ѵ�.
// --> pattern ���ڿ��� �ε��� j�� 1�� ������Ű�鼭 parent ���ڿ��� �ε��� i�� �ش��ϴ� ���ڿ� ���Ѵ�.
void KMP(string parent, string pattern){
	// ������ ���λ�, ���̻� ��ġ ����� ���� ����� �迭�� makeResultArray�Լ��� �ٷ� ����  
	vector<int> resultArray = makeResultArray(pattern);
	
	int parentSize = parent.size();
	int patternSize = pattern.size(); 

 
	int j = 0;
	for(int i = 0 ; i < parentSize ; i++){
		
		// parent[i]�� �ش��ϴ� ���ڿ� pattern[j]�� �ش��ϴ� ���ڰ� ���� ���� ��� 
		while(j > 0 && parent[i] != pattern[j]){
			j = resultArray[j-1]; // ���� ���ڿ� ����
		}
		
		// parent���ڿ��� pattern���ڿ��� �� ���ھ� ���� �� �� ���ڰ� ���� ��� 
		if(parent[i] == pattern[j]){
			
			// j�� pattern ���ڿ��� ������ ������ ���
			// ��, pattern ���ڿ� ��ü�� parent���� ã���� ���!  
			if(j == patternSize - 1){
				count++;
				findedIndex.push_back(i - patternSize + 2);
				j = resultArray[j]; // parent ���ڿ��� �����ϴ� �� �ٸ� pattern�� ã�� ������ ���� 
			}else{
				j++;
			}
		}
		

	}
}

int main(){ 

	string parent, pattern;
	getline(cin, parent);
	getline(cin, pattern);
	
	KMP(parent, pattern);
	printf("%d\n", count);
	for(int i = 0 ; i < findedIndex.size() ; i++){
		printf("%d\n", findedIndex[i]);
	}
}
