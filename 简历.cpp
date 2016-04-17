////��������
//#include<iostream>
//#include<assert.h>
//using namespace std;
//
//void Print1ToMaxOfDigitalRecursively(char * number, int length, int index);
//
//void PrintNumber(char * number)
//{
//	assert(number);
//	bool isBeginning0 = true;
//	int nLength = strlen(number);
//	for (int i = 0; i < nLength; i++)
//	{
//		if (isBeginning0 && number[i] != '0')
//		{
//			isBeginning0 = false;
//		}
//		if (!isBeginning0)
//			printf("%c", number[i]);
//	}
//	printf("\t");
//}
//void Print1ToMaxOfDigital(int n)	//nλ��
//{
//	if (n <= 0)	// �������
//	{
//		printf("input error!\n");
//		return;
//	}
//	char * number = new char[n + 1];
//	number[n] = '\0';
//	for (int i = 0; i < 10; i++)
//	{
//		number[0] = i + '0';
//		Print1ToMaxOfDigitalRecursively(number, n, 0);
//	}
//	delete[] number;
//}
//
//void Print1ToMaxOfDigitalRecursively(char * number, int length, int index)//ȫ����
//{
//	if (index == length - 1)
//	{
//		PrintNumber(number);
//		return;
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		number[index + 1] = i + '0';
//		Print1ToMaxOfDigitalRecursively(number, length, index + 1);
//	}
//}
//
//void Test1()
//{
//	int n1 = 3;
//	Print1ToMaxOfDigital(n1);
//	int n2 = 0;
//	Print1ToMaxOfDigital(n2);
//	int n3 = -1;
//	Print1ToMaxOfDigital(n3);
//}
//int main()
//{
//	Test1();
//	return 0;
//}
//
//
///***************************************************************************/
//
//#include<iostream>
//#include<assert.h>
//using namespace std;
//
//struct BinaryTree_Node
//{
//	char _data;
//	BinaryTree_Node * _left;
//	BinaryTree_Node * _right;
//};
//
//class BinaryTree
//{
//public:
//	void _CreateBinaryTree(char * &tree,BinaryTree_Node* &_root)
//	{
//		assert(tree);
//		if (*tree == '#')//Ϊ��
//		{
//			return;
//		}
//		else
//		{
//			_root = new BinaryTree_Node();//����һ���µĽڵ�
//			_root->_data = *tree;
//			_CreateBinaryTree(++tree, _root->_left);
//			_CreateBinaryTree(++tree, _root->_right);
//		}
//	}
//	BinaryTree()
//		:_root(NULL)
//	{}
//	BinaryTree(char * tree,BinaryTree_Node* &_root)
//	{
//		_CreateBinaryTree(tree, _root);
//	}
//	//~BinaryTree()
//	//{
//	//	DestoryBinaryTree(_root);
//	//}
//	void DestoryBinaryTree(BinaryTree_Node * &_root)
//	{
//		assert(_root);
//		BinaryTree_Node * del = _root;
//		if (del->_left != NULL)
//		{
//			DestoryBinaryTree(del->_left);
//		}
//		if (del->_right != NULL)
//		{
//			DestoryBinaryTree(del->_right);
//		}
//		if (del != NULL)
//		{
//			delete del;
//		}
//	}
//	void PrePrintBinaryTree(BinaryTree_Node* & _root)
//	{
//		assert(_root);
//		if (_root->_data == '#')
//		{
//			return;
//		}
//		else
//		{
//			cout << _root->_data << " ";
//			if (_root->_left != NULL || _root->_right != NULL)
//			{
//				PrePrintBinaryTree(_root->_left);
//				PrePrintBinaryTree(_root->_right);
//			}
//		}
//	}
//
//private:
//	BinaryTree_Node * _root;
//};
//
//void Test1()
//{
//	BinaryTree_Node * root;
//	char *Tree = "124##5##36##7##";//�����������
//	BinaryTree t;
//	t._CreateBinaryTree(Tree,root);
//	t.PrePrintBinaryTree(root);
//	t.DestoryBinaryTree(root);
//}
//
////�ж�һ��������_root2�ǲ�����һ��_root1������
//bool DoesTree1HaveTree2(BinaryTree_Node * _root1, BinaryTree_Node * _root2);
//bool HasSubtree(BinaryTree_Node * _root1, BinaryTree_Node * _root2)
//{
//	bool result = false;
//	if (_root1 != NULL && _root2 != NULL)
//	{
//		result = DoesTree1HaveTree2(_root1, _root2);
//	}
//	if (!result)
//	{
//		result = HasSubtree(_root1->_left, _root2);
//	}
//	if (!result)
//	{
//		result = HasSubtree(_root1->_right, _root2);
//	}
//	return result;
//}
//bool DoesTree1HaveTree2(BinaryTree_Node* _root1, BinaryTree_Node* _root2)//�Ƿ������ͬ�Ľṹ
//{
//	if (_root2 == NULL)//����Ϊ�ջ���ƥ�����
//	{
//		return true;
//	}
//	if (_root1 == NULL)//������Ϊ�� ���ߵ���	Ҷ�ӽڵ�
//	{
//		return false;
//	}
//	if (_root1->_data != _root2->_data)
//	{
//		return false;
//	}
//	return DoesTree1HaveTree2(_root1->_left, _root2->_left)
//		&& DoesTree1HaveTree2(_root2->_right, _root2->_right);
//}
//
//void Test2()
//{
//	BinaryTree_Node * root1;
//	BinaryTree_Node * root2;
//	char* tree1 = "889##24##7##7##";
//	char* tree2 = "89##3##";
//	BinaryTree bt1;
//	BinaryTree bt2;
//	bt1._CreateBinaryTree(tree1, root1);
//	bt2._CreateBinaryTree(tree2, root2);
//	bt1.PrePrintBinaryTree(root1);
//	cout << endl;
//	bt2.PrePrintBinaryTree(root2);
//	cout << endl;
//	int ret = HasSubtree(root1, root2);
//	cout << ret << endl;
//}
//
//void Test3()
//{
//	BinaryTree_Node * root1;
//	BinaryTree_Node * root2;
//	char* tree1 = "889##24##7##7##";
//	char* tree2 = "89##2##";
//	BinaryTree bt1;
//	BinaryTree bt2;
//	bt1._CreateBinaryTree(tree1, root1);
//	bt2._CreateBinaryTree(tree2, root2);
//
//	BinaryTree_Node * root3 = NULL;
//	//char* tree3 = " ";
//	BinaryTree bt3;
//	int i = DoesTree1HaveTree2(root3, root2);
//	cout << i << endl;
//
//
//	BinaryTree_Node * root4;
//	char* tree4 = "89##3##";
//	BinaryTree bt4;
//	bt4._CreateBinaryTree(tree4, root4);
//	bt4.PrePrintBinaryTree(root4);
//	cout << endl;
//	int j = DoesTree1HaveTree2(root1, root4);
//	cout << j << endl;
//}
//int main()
//{
//	//Test1();
//	Test2();
//	//Test3();
//	return 0;
//}



#include<iostream>
#include<assert.h>
using namespace std;

struct BinaryTree_Node
{
	char _data;
	BinaryTree_Node * _left;
	BinaryTree_Node * _right;
};

class BinaryTree
{
public:
	void _CreateBinaryTree(char * &tree, BinaryTree_Node* &_root)
	{
		assert(tree);
		if (*tree == '#')//Ϊ��
		{
			return;
		}
		else
		{
			_root = new BinaryTree_Node();//����һ���µĽڵ�
			_root->_data = *tree;
			_CreateBinaryTree(++tree, _root->_left);
			_CreateBinaryTree(++tree, _root->_right);
		}
	}
	BinaryTree()
		:_root(NULL)
	{}
	BinaryTree(char * tree, BinaryTree_Node* &_root)
	{
		_CreateBinaryTree(tree, _root);
	}
	//~BinaryTree()
	//{
	//	DestoryBinaryTree(_root);
	//}
	void DestoryBinaryTree(BinaryTree_Node * &_root)
	{
		assert(_root);
		BinaryTree_Node * del = _root;
		if (del->_left != NULL)
		{
			DestoryBinaryTree(del->_left);
		}
		if (del->_right != NULL)
		{
			DestoryBinaryTree(del->_right);
		}
		if (del != NULL)
		{
			delete del;
		}
	}
	void PrePrintBinaryTree(BinaryTree_Node* & _root)
	{
		assert(_root);
		if (_root->_data == '#')
		{
			return;
		}
		else
		{
			cout << _root->_data << " ";
			if (_root->_left != NULL)
			{
				PrePrintBinaryTree(_root->_left);
			}
			if (_root->_right != NULL)
			{
				PrePrintBinaryTree(_root->_right);
			}
		}
	}

private:
	BinaryTree_Node * _root;
};


// ��������ľ���
//void MirroRecursively(BinaryTree_Node * root)
//{
//	if (root == NULL || (root->_left == NULL && root->_right ==NULL ))
//		return;
//	
//	BinaryTree_Node * tmp = root->_left;
//	root->_left = root->_right; 
//	root->_right = tmp;
//
//	if (root->_left != NULL)
//	{
//		MirroRecursively(root->_left);
//	}
//	if (root->_right != NULL)
//	{
//		MirroRecursively(root->_right);
//	}
//}
//void Test1()
//{
//	BinaryTree_Node * root;
//	//char *Tree = "124##5##36##7##";//�����������
//	char *Tree = "1#23##4##";//�����������
//
//	BinaryTree t;
//	t._CreateBinaryTree(Tree, root);
//	t.PrePrintBinaryTree(root);
//	cout << endl;
//
//	MirroRecursively(root);
//	t.PrePrintBinaryTree(root);
//	cout << endl;
//
//}
//
//int main()
//{
//	Test1();
//	//Test2();
//	//Test3();
//	return 0;
//}


//�ַ�����ѭ������kλ

//#include<iostream>						
//using namespace std;
/*****************************************************************************/
//void moveString(char *str);		//��low�ķ���  ������λ��
//
//char* leftshift(char *str, int k)
//{
//	while (k--)
//	{
//		moveString(str);
//	}
//	return str;
//}
//
//void moveString(char *str)
//{
//	int length = strlen(str);
//	char tmp = str[length -1];
//	int i = length - 1;
//	for (i = length - 1; i > 0; i--)
//	{
//		str[i] = str[i - 1];
//	}
//	str[i] = tmp;
//}
//void Test1()
//{
//	char str[] = "cvtateam";
//	char* ret = leftshift(str, 9);
//	cout << str << endl;
//	return 0;
//}
/*****************************************************************************/
// char *str = abc def ghi jk   //ѭ������kλ
/*****************************************************************************/

//char * leftshift(char * str, int k)
//{
//	int length = strlen(str);
//	int m = length - k;
//	if (NULL == str || k <= 0)//�ַ���Ϊ�� ���� ��������
//	{
//		return;
//	}
//
//
//	if (m < k)//ʣ���ַ� С�� k�����
//	{
//		while (k--)
//		{
//			int i = length - 1;
//			char tmp = str[length - 1];
//			for (i = length - 1; i>0; i--)
//			{
//				str[i] = str[i - 1];
//			}
//			str[i] = tmp;
//		}
//	}
//	else// m>=k
//	{
//		int p1 = 0, p2 = k;
//		int i = 0;
//		swap(str[i], str[k - 1]);
//	}
//}
//
//
///*****************************************************************************/
//
//int main()
//{
//	//Test1();
//
//	return 0;
//}


#include<iostream>

using namespace std;
/***********************************************************/

// 1 23 54 32 5 8 6 0 9
void BubbleSort(int* arr, int len)  //ð������
{
	for (int i = 0; i < len; i++)
	{
		for (int j = i + 1; j < len; j++)
		{
			int tmp;
			if (arr[j] < arr[i])
			{
				tmp = arr[i];
				arr[i] = arr[j];
				arr[j] = tmp;
			}
		}
	}
}
/***********************************************************/

//3, 6, 4, 9, 1, 8, 2, 5, 7
void InsertSort(int *arr, int len)//��������
{
	for (int j = 1; j < len ; j++)
	{
		int i = j - 1;
		int key = arr[j];
		while (i >= 0 && arr[i] > key)	//Ų������
		{
			arr[i + 1] = arr[i];
			i--;
		}
		arr[i + 1] = key;
	}
}
/***********************************************************/

void findmin(int *arr, int p, int q)
{
	for (int i = q; i >= p + 1; i--)
	{
		if (arr[i] < arr[i - 1])
		{
			swap(arr[i], arr[i - 1]);
		}
	}
}
void Recursive_InsertSort(int *arr, int p, int q)
{
	if (p < q)
	{
		findmin(arr, p, q);
		Recursive_InsertSort(arr, p + 1, q);
	}
}
/***********************************************************/

void ShellSort(int *arr, int len)//ϣ������
{
	int h = 1;
	while (h < len)//���ò���
	{
		h = 3 * h + 1;
	}
	while (h > 0)
	{
		for (int j = h; j < len; j++)
		{
			int key = arr[j];
			int i = j - h;
			while (i >= 0 && arr[i] > key)
			{
				arr[i + h] = arr[i];
				i = i - h;
			}
			arr[i + h] = key;
		}
		h = h / 3;
	}
}
void Print(int *a, int len)
{
	for (int i = 0; i < len; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
}
/***********************************************************/

void SelectSort(int *arr,int len)	//ѡ������
{
	int n = len -1;
	for (int i = 0; i < n; i++)
	{
		int min = i;
		for (int j = i + 1; j <= n; j++)
		{
			if (arr[min] > arr[j])
			{
				min = j;
			}
			//if (min != i)
			//{
				swap(arr[min], arr[i]);
			//}
		}
	}
}

int find_min(int *arr, int p, int q)
{
	int min = p;
	for (int i = p+1; i <= q; i++)
	{
		if (arr[min] > arr[i])
		{
			min = i;
		}
	}
	return min;
}

void Recursive_SelectSort(int *arr, int p, int q)
{
	if (p < q)
	{
		int min = find_min(arr, p, q);//��arr[p...q]���ҳ���С����,�������±�
		swap(arr[p], arr[min]);
		Recursive_SelectSort(arr, p + 1, q);
	}
}

/***********************************************************/
void merge(int *arr, int *arr1, int p, int m, int q);
void Recursive_mergesort(int *arr, int *arr1, int p, int q);

void MergeSort(int *arr,int *arr1,int len)
{
	Recursive_mergesort(arr, arr1,0, len);
}

void Recursive_mergesort(int *arr, int *arr1,int p, int q)
{
	if (p < p)
	{
		int m = (p + q) / 2;
		Recursive_mergesort(arr,arr1, p, m);
		Recursive_mergesort(arr,arr1, m+1, q);
		merge(arr, arr1,p, m, q);
	}
}

void merge(int *arr,int *arr1, int p, int m, int q)
{
	int i = p;
	int j = m + 1;
	int k = p;
	while (i < m && j < q)
	{
		if (arr[i] < arr[j])
		{
			arr1[k++] = arr[i++];
		}
		else
		{
			arr1[k++] = arr[j++];
		}
	}
	if (i <= m)
	{
		while (i <= m)
		{
			arr1[k++] = arr[i++];
		}
	}
	else
	{
		while (j <= q)
		{
			arr1[k++] = arr[j++];
		}
		for (int n = p; n <= q; n++)
		{
			arr[n] = arr1[n];
		}
	}
}
/***********************************************************/


void QuickSort(int *arr,int left,int right)//  ��������
{
	if (left < right)
	{
		int key = arr[left];
		int low = left;
		int high = right;
		while (low < high)
		{
			while (low <high && arr[high] > key)
			{
				high--;
			}
			arr[low] = arr[high];
			while (low < high && arr[low] < key)
			{
				low++;
			}
			arr[high] = arr[low];
		}
		arr[low] = key;
		QuickSort(arr, left, low - 1);
		QuickSort(arr, low + 1, right);
	}
}


void QuickSort1(int *arr, int left, int right)
{
	int begin = left;
	int end = right - 1;

	int key = arr[right];

	while (begin < left)
	{
		while (arr[begin] < key && begin < end)
		{
			begin++;
		}
		while (arr[end] > key && begin < end)
		{
			end--;
		}
		if (begin < end)
		{
			swap(arr[begin], arr[end]);
		}
	}
	while (arr[begin] < key)
	{
		begin++;
	}
	swap(arr[begin], arr[right]);
	QuickSort(arr, left, begin - 1);
	QuickSort(arr, begin + 1, right);
}
/***********************************************************/
void MinHeapify(int *arr, int size, int element/* Ԫ��*/)//������ ����ڵ�time��O(lgn)
{
	int lchild = element * 2 + 1;
	int rchild = lchild + 1;

	while (rchild < size)
	{
		if (arr[element] <= arr[lchild] && arr[element] <= arr[rchild])
		{
			return;//���������������С���������
		}
		if (arr[lchild] <= arr[rchild])//��������С
		{
			swap(arr[lchild], arr[rchild]);//����ߵ��ᵽ����
			element = lchild;//ѭ����������
		}
		else//�����ұ���С
		{
			swap(arr[element], arr[rchild]);
			element = lchild;
		}
		lchild = element * 2 + 1;
		rchild = rchild + 1;//���¼�������λ��
	}
	if (lchild < size && arr[lchild] < arr[element])//ֻ��������������С���Լ�
	{
		swap(arr[lchild], arr[element]);
	}
	return;
}
//������time:O(nlgn)

void HeapSort(int *arr, int size)
{
	int i;
	for (i = size - 1; i >= 0; i--)//��������ʼ������
	{
		MinHeapify(arr, size, i);
	}
	while (size > 0)//�����
	{
		swap(arr[size - 1], arr[0]);
		size--;//����С��С
		MinHeapify(arr, size, 0);//������
	}
	return;
}

void Heapfy(int A[], int idx, int max)      //��������  
{
	int left = idx * 2 + 1;
	int right = left + 1;

	int largest = idx;

	if (left < max && A[left] > A[idx])
	{ 
		largest = left; 
	}

	if (right < max && A[largest] < A[right])
	{ 
		largest = right; 
	}

	if (largest != idx)
	{
		int temp = A[largest];   //�ϴ�Ľڵ�ֵ�������������ڽڵ�ĸ��ڵ�  
		A[largest] = A[idx];
		A[idx] = temp;

		Heapfy(A, largest, max); //�ݹ����  
	}
}

void buildHeap(int A[], int ll)
{
	int len = ll;

	for (int i = len / 2 - 1; i >= 0; --i)
	{
		Heapfy(A, i, len);     //�������ѣ�����������ֵ���������ڵ�  
	}

	for (int i = len - 1; i >= 1; --i)
	{
		int temp = A[0];   //����ǰ�ѵĸ��ڵ㽻������β��ָ��λ��  
		A[0] = A[i];
		A[i] = temp;
		Heapfy(A, 0, i);  //������һ�ε�����  
	}
}
/***********************************************************/

//�ַ������������
void _StringArrange(char * pStr, char * pBegin);

void StringArrange(char *pStr)
{
	if (pStr == NULL)
	{
		return;
	}
	return;
	_StringArrange(pStr, pStr);
}

void _StringArrange(char * pStr, char * pBegin)
{
	if (pBegin == '\0')
	{
		printf("%s ", pStr);
	}
	else
	{
		for (char *pCh = pBegin; pCh != '\0'; pBegin++)
		{
			swap(*pCh, *pBegin);
			_StringArrange(pStr, pBegin + 1);
			swap(*pCh, *pBegin);
		}
	}
}





/***********************************************************/

int main()
{
	int a[] = { 3, 6, 4, 9, 1, 8, 2, 5, 7 ,0};
	int len = sizeof(a) / sizeof(a[0]);
	int a1[10];

	char *arr = "abc";

	StringArrange(arr);

	//BubbleSort(a, len);
	//InsertSort(a, len);
	//ShellSort(a, len);
	//Recursive_InsertSort(a, 0, len-1);
	//SelectSort(a, len);
	//Recursive_SelectSort(a, 0, len - 1);
	//MergeSort(a, a1, len);  Error

	//QuickSort(a, 0, 9);
	//QuickSort1(a, 0, 9);
	//HeapSort(a, 9);
	//buildHeap(a, 10);

	Print(a, len);
	return 0;
}










