#include<iostream>
class A 
{
public:
	A(int a1, int b1) :a(a1), b(b1)
	{
		++count;
	}
	A(const A& other)
	{
		a = other.a;
		b = other.b;
		++count;
	}
	A(const A&& other)
	{
		a = other.a;
		b = other.b;
		++count;
	}

	~A()
	{
		--count;
	}
	const int count_f()const
	{
		return count;
	}
	static int count;
private:
	int a, b;
};

 int A::count = 0;
int main()
{
	A obj(1, 2);
	A obj1(3, 4);
	A obj3(12, 3);
	A obj4 = obj1;
	std::cout<<obj.count_f();
}