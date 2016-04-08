struct ListNode{
	int val;
	ListNode* next;
};
struct TreeNode{
	int val;
	TreeNode* right;
	TreeNode* left;
};
bool hasDuplication(int *arr, int nLength){
	if(arr == NULL || nLength <= 0)
		return true;
	for(int i = 0; i < nlength - 1; i ++){
		for(int j = 1; j < nLength; j++)
			if(a[i] == a[j])
				return true;
	}
	return false;
} 
struct ComplexNode{
	int val;
	ComlextNode* next;
	ComplextNode* sibling;
}
#incldue<string.h>
#include<stdio.h>
#include<iostream>
using namespace std;
int l1, l2;
int a[99999] = {0}, b[99999] = {0}, result = {0};
char str1 = {'\0'}, str2 = {'\0'};
void mul(){
	for(int i = 1; i < l1; i++){
		for(in j = 1; j < l2; j++){
			result[i + j - 1] = a[i] * b[j];
			if(result[i + j - 1] > 9){
				result[i + j] += result[i + j - 1] / 10;
				result[i + j - 1] = result[i + j - 1] % 10;
			}
		}
	}
	if(result[l1 + l2 - 1] > 9){
		result[i + j] += result[i + j - 1] / 10;
		result[i + j - 1] = result[i + j - 1] % 10;
	}
	l1 += l2;
}
int main(){

	scanf("%s", str1);
	scanf("%s", str2);
	l1 = strlen(str1);
	l2 = strlen(str2);
	for(int i = 0; i< l1; i ++)
		a[l1 - i] = str1[i] - '0';
	for(int i = 0; i < l2; i++)
		b[l2 - i] = str2[i] - '0';
	mul();
	for(int i = 1; i <= l1; i++)
		printf("%d", result[i]);
	return 0;
}



