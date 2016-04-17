////大数问题
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
//void Print1ToMaxOfDigital(int n)	//n位数
//{
//	if (n <= 0)	// 输入错误
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
//void Print1ToMaxOfDigitalRecursively(char * number, int length, int index)//全排列
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
//		if (*tree == '#')//为空
//		{
//			return;
//		}
//		else
//		{
//			_root = new BinaryTree_Node();//构建一个新的节点
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
//	char *Tree = "124##5##36##7##";//先序遍历序列
//	BinaryTree t;
//	t._CreateBinaryTree(Tree,root);
//	t.PrePrintBinaryTree(root);
//	t.DestoryBinaryTree(root);
//}
//
////判断一个二叉树_root2是不是另一个_root1的子树
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
//bool DoesTree1HaveTree2(BinaryTree_Node* _root1, BinaryTree_Node* _root2)//是否具有相同的结构
//{
//	if (_root2 == NULL)//子树为空或者匹配完成
//	{
//		return true;
//	}
//	if (_root1 == NULL)//二叉树为空 或者到达	叶子节点
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
		if (*tree == '#')//为空
		{
			return;
		}
		else
		{
			_root = new BinaryTree_Node();//构建一个新的节点
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


// 求二叉树的镜像
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
//	//char *Tree = "124##5##36##7##";//先序遍历序列
//	char *Tree = "1#23##4##";//先序遍历序列
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


//字符串的循环左移k位

//#include<iostream>						
//using namespace std;
/*****************************************************************************/
//void moveString(char *str);		//最low的方法  暴力移位法
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
// char *str = abc def ghi jk   //循环右移k位
/*****************************************************************************/

//char * leftshift(char * str, int k)
//{
//	int length = strlen(str);
//	int m = length - k;
//	if (NULL == str || k <= 0)//字符串为空 或者 参数有误
//	{
//		return;
//	}
//
//
//	if (m < k)//剩余字符 小于 k的情况
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
void BubbleSort(int* arr, int len)  //冒泡排序
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
void InsertSort(int *arr, int len)//插入排序
{
	for (int j = 1; j < len ; j++)
	{
		int i = j - 1;
		int key = arr[j];
		while (i >= 0 && arr[i] > key)	//挪动数据
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

void ShellSort(int *arr, int len)//希尔排序
{
	int h = 1;
	while (h < len)//设置步长
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

void SelectSort(int *arr,int len)	//选择排序
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
		int min = find_min(arr, p, q);//从arr[p...q]中找出最小的数,返回其下标
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


void QuickSort(int *arr,int left,int right)//  快速排序
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
void MinHeapify(int *arr, int size, int element/* 元素*/)//堆排序 整理节点time：O(lgn)
{
	int lchild = element * 2 + 1;
	int rchild = lchild + 1;

	while (rchild < size)
	{
		if (arr[element] <= arr[lchild] && arr[element] <= arr[rchild])
		{
			return;//如果比左右子树都小，完成整理
		}
		if (arr[lchild] <= arr[rchild])//如果左边最小
		{
			swap(arr[lchild], arr[rchild]);//把左边的提到上面
			element = lchild;//循环整理子树
		}
		else//否则右边最小
		{
			swap(arr[element], arr[rchild]);
			element = lchild;
		}
		lchild = element * 2 + 1;
		rchild = rchild + 1;//重新计算子树位置
	}
	if (lchild < size && arr[lchild] < arr[element])//只有左子树且子树小于自己
	{
		swap(arr[lchild], arr[element]);
	}
	return;
}
//堆排序time:O(nlgn)

void HeapSort(int *arr, int size)
{
	int i;
	for (i = size - 1; i >= 0; i--)//从子树开始整理树
	{
		MinHeapify(arr, size, i);
	}
	while (size > 0)//拆解树
	{
		swap(arr[size - 1], arr[0]);
		size--;//树大小减小
		MinHeapify(arr, size, 0);//整理树
	}
	return;
}

void Heapfy(int A[], int idx, int max)      //建立最大堆  
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
		int temp = A[largest];   //较大的节点值将交换到其所在节点的父节点  
		A[largest] = A[idx];
		A[idx] = temp;

		Heapfy(A, largest, max); //递归遍历  
	}
}

void buildHeap(int A[], int ll)
{
	int len = ll;

	for (int i = len / 2 - 1; i >= 0; --i)
	{
		Heapfy(A, i, len);     //建立最大堆，将堆中最大的值交换到根节点  
	}

	for (int i = len - 1; i >= 1; --i)
	{
		int temp = A[0];   //将当前堆的根节点交换到堆尾的指定位置  
		A[0] = A[i];
		A[i] = temp;
		Heapfy(A, 0, i);  //建立下一次的最大堆  
	}
}
/***********************************************************/

//字符串的排列输出
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










