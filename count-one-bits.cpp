#include <iostream>
using namespace std;

//int count_one_bits(int n)
//{
//	int count=0;
//	while(n)
//	{
//		if(n&1)
//			count++;
//
//			n=n>>1;
//	}
//	return count;
//}

//int count_one_bits(int n)
//{
//	int count=0;
//	unsigned int flag=1;
//	while(flag)
//	{
//		if(n&flag)
//			count++;
//
//		flag=flag<<1;
//	}
//	return count;
//}

int count_one_bits(int n)
{
	int count=0;
	while(n)
	{
		count++;

		n=n&(n-1);
	}
	return count;
}

int main()
{
	int ret=0;
	ret = count_one_bits(5);
	cout<<ret<<endl;
	system("pause");
	return 0;
}


