#include<iostream>
#include<vector>
#include<string>
#include<stdio.h>
using namespace std;

int count;
vector<int> findedIndex;

/* 패턴의 접두사, 접미사 일치 결과에 의한 결과값 배열 만드는 함수 */
vector<int> makeResultArray(string pattern){
	int patternSize = pattern.size(); // 패턴 문자열의 길이 
	
	// 배열의 크기가 패턴 문자열의 길이와 같고, 배열의 모든 원소가 0으로 초기화된 vector 생성 
	vector<int> resultArray(patternSize, 0);  
	
	int j = 0; 
	for(int i = 1 ; i < patternSize ; i++){
		
		// i 아래 문자와 j 아래 문자가 일치하지 않을 경우 실행되는 부분
		// 두 문자가 다른 경우 j 를 뒤로 이동시키고 다시 한번 j와 i 아래에 있는 문자를 비교하기 때문에 while을 사용  
		while(j > 0 && pattern[i] != pattern[j]){
			j = resultArray[j-1];
			
		}
		
		// i 아래 문자와 j 아래 문자가 일치하는 경우 
		if(pattern[i] == pattern[j]){ 
			resultArray[i] = ++j; // 현재 j가 가리키는 원소의 인덱스에 1을 더함  
			//j = j + 1; // j 를 i와 함께 증가시켜줌  
		}
	
	}
	return resultArray; 
}

/* KMP 알고리즘 */
// --> parent 문자열은 인덱스 i를 1씩 증가시키면서 pattern 문자열의 인덱스 j에 해당하는 문자와 비교한다.
// --> pattern 문자열은 인덱스 j를 1씩 증가시키면서 parent 문자열의 인덱스 i에 해당하는 문자와 비교한다.
void KMP(string parent, string pattern){
	// 패턴의 접두사, 접미사 일치 결과에 의한 결과값 배열을 makeResultArray함수로 바로 만듦  
	vector<int> resultArray = makeResultArray(pattern);
	
	int parentSize = parent.size();
	int patternSize = pattern.size(); 

 
	int j = 0;
	for(int i = 0 ; i < parentSize ; i++){
		
		// parent[i]에 해당하는 문자와 pattern[j]에 해당하는 문자가 같지 않을 경우 
		while(j > 0 && parent[i] != pattern[j]){
			j = resultArray[j-1]; // 패턴 문자열 점프
		}
		
		// parent문자열과 pattern문자열을 한 문자씩 비교할 때 두 문자가 같을 경우 
		if(parent[i] == pattern[j]){
			
			// j가 pattern 문자열의 끝까지 증가된 경우
			// 즉, pattern 문자열 전체가 parent에서 찾아진 경우!  
			if(j == patternSize - 1){
				count++;
				findedIndex.push_back(i - patternSize + 2);
				j = resultArray[j]; // parent 문자열에 존재하는 또 다른 pattern을 찾아 나가기 위함 
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
