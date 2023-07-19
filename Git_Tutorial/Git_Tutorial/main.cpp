#include <iostream>

// 메인을 고쳤는데 안겹치게 다시 고친다
class Test
{
	int a = 0;
};

void main()
{
	// Branch3이 작업할때 놀수없지
	// cout하나 더해야지~
	std::cout << "Main" << std::endl;
	std::cout << "오늘은 어떤 작업을 할까" << std::endl;
	std::cout << "Branch4" << std::endl;
}